# 手机APP修改STM32RTC时间经验

## 1、使用RTC读取和修改时间

    // 获取日期和时间
    RTC_GetTime(RTC_Format_BIN, &RTC_TimeStructure);
    RTC_GetDate(RTC_Format_BIN, &RTC_DateStructure);

     RTC_DateStructure.RTC_Year;

    // 修改时间
     void RTC_TimeAndDate_Set(void)
     {
     	RTC_TimeTypeDef RTC_TimeStructure;
     	RTC_DateTypeDef RTC_DateStructure;

     	// 初始化时间
     	RTC_TimeStructure.RTC_H12 = RTC_H12_AMorPM;
     	RTC_TimeStructure.RTC_Hours = HOURS;        
     	RTC_TimeStructure.RTC_Minutes = MINUTES;      
     	RTC_TimeStructure.RTC_Seconds = SECONDS;      
     	RTC_SetTime(RTC_Format_BINorBCD, &RTC_TimeStructure);
     	RTC_WriteBackupRegister(RTC_BKP_DRX, RTC_BKP_DATA);

     	// 初始化日期
     	RTC_DateStructure.RTC_WeekDay = WEEKDAY;       
     	RTC_DateStructure.RTC_Date = DATE;         
     	RTC_DateStructure.RTC_Month = MONTH;         
     	RTC_DateStructure.RTC_Year = YEAR;        
     	RTC_SetDate(RTC_Format_BINorBCD, &RTC_DateStructure);
     	RTC_WriteBackupRegister(RTC_BKP_DRX, RTC_BKP_DATA);
     }

## 2、手机APP修改时间

    /******************************   修改药盒时间   *************************************/
    // 时间接收数据格式 6#0018-04-21#18:00:00#7
    // 具有校验数据功能 正确则修改系统时间

    if(USART3_RX_BUF[Start_Number] - '0'== 6)
    {

      // 定义时间数据的起始位置

      u8 Date_Right = 0;  // 校验数据是否正确
      u8 Number;
      u8 Frist_Number_Day = Start_Number + 2;  // 日期起始位置
      u8 Frist_Number_Time = Start_Number +13; // 时间起始位置
      u8 Number_Week = Start_Number + 22;			 // 周起始位置

      // 转化数据为整型格式
      for(Number=Start_Number+2; Number<=Start_Number+22 ; Number++)
      {
        USART3_RX_BUF[Number] = USART3_RX_BUF[Number] - '0';
      }

      // 转化数据为年月日，时分秒，周，格式
      Set_Year = USART3_RX_BUF[Frist_Number_Day]*1000 + USART3_RX_BUF[Frist_Number_Day+1]*100 + USART3_RX_BUF[Frist_Number_Day+2]*10 + USART3_RX_BUF[Frist_Number_Day+3];
      Set_Month = USART3_RX_BUF[Frist_Number_Day+5]*10 + USART3_RX_BUF[Frist_Number_Day+6];
      Set_Day = USART3_RX_BUF[Frist_Number_Day+8]*10 + USART3_RX_BUF[Frist_Number_Day+9];


      Set_Hour = USART3_RX_BUF[Frist_Number_Time]*10 + USART3_RX_BUF[Frist_Number_Time+1];
      Set_Minute = USART3_RX_BUF[Frist_Number_Time+3]*10 + USART3_RX_BUF[Frist_Number_Time+4];
      Set_Second = USART3_RX_BUF[Frist_Number_Time+6]*10 + USART3_RX_BUF[Frist_Number_Time+7];

      Set_Week = USART3_RX_BUF[Number_Week];

      // 判断数据是否满足格式要求
      if(Set_Year>0 && Set_Year<999)			Date_Right = 1;  else Date_Right = 0;
      if(Set_Month>0 && Set_Month<24)			Date_Right = 1;  else Date_Right = 0;
      if(Set_Day>0 && Set_Day<32)					Date_Right = 1;  else Date_Right = 0;

      if(Set_Hour>0 && Set_Hour<24)				Date_Right = 1;  else Date_Right = 0;
      if(Set_Minute>0 && Set_Minute<60)		Date_Right = 1;  else Date_Right = 0;
      if(Set_Second>0 && Set_Second<60)		Date_Right = 1;  else Date_Right = 0;

      if(Set_Week>0 && Set_Week<=7)				Date_Right = 1;  else Date_Right = 0;

    //				printf("Set_Year = %d\n",Set_Year);
    //				printf("Set_Month = %d\n",Set_Month);
    //				printf("Set_Day = %d\n",Set_Day);
    //				printf("Set_Hour = %d\n",Set_Hour);
    //				printf("Set_Minute = %d\n",Set_Minute);
    //				printf("Set_Second = %d\n",Set_Second);
    //				printf("Set_Week = %d\n",Set_Week);
    //				

      // 数据满足格式要求更改系统时间
      if(Date_Right == 1)
      {
        RTC_TimeAndDate_SetByUser(Set_Year,Set_Month,Set_Day,Set_Hour,Set_Minute,Set_Second,Set_Week);
      }
    }
