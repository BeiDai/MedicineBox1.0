//#include "sys.h"
//#include "delay.h"
//#include "led.h"
//#include "key.h"
//#include "usart.h"
//#include "exti.h"
//#include "pwm.h"
//#include "usart3.h"
//#include "wifi.h"
//#include "motor.h"
//#include "reedswitch.h"
//#include "oled.h"

////int main(void) 
////{ 
//////	u16 rlen=0;
////	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
////	delay_init(168);  
////	ReedSwitchInit();
////	LED_Init();
////	uart_init(115200);//初始化串口波特率为115200
////	usart3_init(115200); 
////	Motor_Init();
////	OLED_Init();				
////	atk_8266_config();
////	USART3_RX_STA=0;
////	EN = 1;
////	OLED_ShowString(0,0," STM32F407ZGTGT6 2.4'",12); 
////	OLED_Refresh_Gram();
////	while(1)
////	{
//////	if(USART3_RX_STA&0X8000)		//接收到一次数据了
//////	{ 
//////		rlen=USART3_RX_STA&0X7FFF;	//得到本次接收到的数据长度
//////		USART3_RX_BUF[rlen]=0;		//添加结束符 
//////		printf("%s",USART3_RX_BUF);	//发送到串口   
//////		if(USART3_RX_BUF[rlen-1]==48)
//////			Step_Control(0,350,6400); 
//////		else if(USART3_RX_BUF[rlen-1]==49)
//////			Step_Control(1,350,6400);
//////		USART3_RX_STA=0; 
//////	}
////		atk_8266_at_response(1);
////		Step_Control(1,350,6400);
////		if(ReedSwitch==1)
////		{
////			OLED_ShowString(0,30,"     STOP! 10S",16); 
////			OLED_Refresh_Gram();
////			delay_ms(10000);
////			LED2=!LED2;
////			OLED_ShowString(0,30,"   ReedSwitch !    ",16); 
////			OLED_Refresh_Gram();
////		}
////	}    
////}

////int main(void) 
////{ 
////		u16 rlen=0;
////		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
////		delay_init(168);  
////		ReedSwitchInit();
////		LED_Init();
////		uart_init(115200);//初始化串口波特率为115200
////		usart3_init(115200); 
////		Motor_Init();
////		OLED_Init();	
////		OLED_ShowChinese(0+30,0,0,12,1); //智
////		OLED_ShowChinese(14+30,0,1,12,1); //能
////		OLED_ShowChinese(28+30,0,2,12,1);//云
////		OLED_ShowChinese(42+30,0,3,12,1);//药
////		OLED_ShowChinese(56+30,0,4,12,1);//盒	
////	  
////		OLED_ShowChinese(0+30-12,0+16,6,12,1); //请
////		OLED_ShowChinese(14+30-12,0+16,7,12,1); //取
////		OLED_ShowChinese(28+30-12,0+16,8,12,1);//药
////		OLED_ShowChinese(42+30-12,0+16,9,12,1);//：
////		OLED_ShowChinese(56+30-12+12,0+16,10,12,1);//盒
////		OLED_ShowChinese(70+30-12+12,0+16,11,12,1);//号
////	
////		OLED_Refresh_Gram();
//////	OLED_ShowChinese(68+30,0,5,12,1);//wifi
////		atk_8266_config();
////	
////		USART3_RX_STA=0; //允许接收数据
////		EN = 1; //开启接收中断

////	while(1)
////	{
////		if(USART3_RX_STA&0X8000)	
////		{
////			rlen=USART3_RX_STA&0X7FFF;	//得到本次接收到的数据长度
////			USART3_RX_BUF[rlen]=0;		//添加结束符 
////			positionReceive = USART3_RX_BUF[rlen-1] - '0'; //把字符转为整形
////			position1 = USART3_RX_BUF[rlen-2] - '0';
////			switch(positionReceive)
////			{
////				case 1: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400);positionReceive=0; break;
////				
////				case 2: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*2);positionReceive=0; break;
////				
////				case 3: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*3);positionReceive=0; break;
////				
////				case 4: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*4);positionReceive=0; break;
////				
////				case 5: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*5);positionReceive=0;	break;
////				
////				case 6: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*6);positionReceive=0; break;
////				
////				case 7: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*7);positionReceive=0; break;
////				
////				case 8: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
////								Step_Control(1,350,6400*8);positionReceive=0; break;
////				defaule: break;
////			}
////			USART3_RX_STA=0;
////		}
////	}
////}

//int main(void) 
//{ 
//		u16 rlen=0;
//		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置系统中断优先级分组2
//		delay_init(168);  
//		ReedSwitchInit();
//		LED_Init();
//		uart_init(115200);//初始化串口波特率为115200
//		usart3_init(115200); 
//		Motor_Init();
//		EN = 1; //关闭电机电源
//		OLED_Init();	
//		OLED_ShowChinese(0+30,0,0,12,1); //智
//		OLED_ShowChinese(14+30,0,1,12,1); //能
//		OLED_ShowChinese(28+30,0,2,12,1);//云
//		OLED_ShowChinese(42+30,0,3,12,1);//药
//		OLED_ShowChinese(56+30,0,4,12,1);//盒	
//	  
//		OLED_ShowChinese(0+30-12,0+16,6,12,1); //请
//		OLED_ShowChinese(14+30-12,0+16,7,12,1); //取
//		OLED_ShowChinese(28+30-12,0+16,8,12,1);//药
//		OLED_ShowChinese(42+30-12,0+16,9,12,1);//：
//		OLED_ShowChinese(56+30-12+12,0+16,10,12,1);//盒
//		OLED_ShowChinese(70+30-12+12,0+16,11,12,1);//号
//	
//		OLED_Refresh_Gram();
////	OLED_ShowChinese(68+30,0,5,12,1);//wifi
//		atk_8266_config();
//	
//		USART3_RX_STA=0; //允许接收数据
//		
//		boxPosition_Init(1,350,6400*1000);
//		
//		positionNow = 1;

//	while(1)
//	{
//		if(USART3_RX_STA&0X8000)	
//		{
//			rlen=USART3_RX_STA&0X7FFF;	//得到本次接收到的数据长度
//			USART3_RX_BUF[rlen]=0;		//添加结束符 
//			positionReceive = USART3_RX_BUF[rlen-1] - '0'; //把字符转为整形
//			position1 = USART3_RX_BUF[rlen-2] - '0';
//			switch(positionReceive)
//			{
//				case 1: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=1; break;
//				
//				case 2: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=2; break;
//				
//				case 3: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=3; break;
//				
//				case 4: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=4; break;
//				
//				case 5: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=5;	break;
//				
//				case 6: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=6; break;
//				
//				case 7: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=7; break;
//				
//				case 8: OLED_ShowNum(74,17,positionReceive,1,12),OLED_Refresh_Gram(),
//								boxPosition(positionReceive);positionReceive=0,positionNow=8; break;
//			}
//			USART3_RX_STA=0;
//		}
//	}
//}


#include "sys.h"
#include "delay.h"
#include "usart.h"
#include "led.h"
#include "includes.h"
#include "os_app_hooks.h"
//ALIENTEK 探索者STM32F407开发板 UCOSIII实验
//例4-1 UCOSIII UCOSIII移植

//UCOSIII中以下优先级用户程序不能使用，ALIENTEK
//将这些优先级分配给了UCOSIII的5个系统内部任务
//优先级0：中断服务服务管理任务 OS_IntQTask()
//优先级1：时钟节拍任务 OS_TickTask()
//优先级2：定时任务 OS_TmrTask()
//优先级OS_CFG_PRIO_MAX-2：统计任务 OS_StatTask()
//优先级OS_CFG_PRIO_MAX-1：空闲任务 OS_IdleTask()
//技术支持：www.openedv.com
//淘宝店铺：http://eboard.taobao.com  
//广州市星翼电子科技有限公司  
//作者：正点原子 @ALIENTEK

//任务优先级
#define START_TASK_PRIO		3
//任务堆栈大小	
#define START_STK_SIZE 		512
//任务控制块
OS_TCB StartTaskTCB;
//任务堆栈	
CPU_STK START_TASK_STK[START_STK_SIZE];
//任务函数
void start_task(void *p_arg);

//任务优先级
#define LED0_TASK_PRIO		4
//任务堆栈大小	
#define LED0_STK_SIZE 		128
//任务控制块
OS_TCB Led0TaskTCB;
//任务堆栈	
CPU_STK LED0_TASK_STK[LED0_STK_SIZE];
void led0_task(void *p_arg);

//任务优先级
#define LED1_TASK_PRIO		5
//任务堆栈大小	
#define LED1_STK_SIZE 		128
//任务控制块
OS_TCB Led1TaskTCB;
//任务堆栈	
CPU_STK LED1_TASK_STK[LED1_STK_SIZE];
//任务函数
void led1_task(void *p_arg);

//任务优先级
#define FLOAT_TASK_PRIO		6
//任务堆栈大小
#define FLOAT_STK_SIZE		128
//任务控制块
OS_TCB	FloatTaskTCB;
//任务堆栈
__align(8) CPU_STK	FLOAT_TASK_STK[FLOAT_STK_SIZE];
//任务函数
void float_task(void *p_arg);

int main(void)
{
	OS_ERR err;
	CPU_SR_ALLOC();
	
	delay_init(168);  	//时钟初始化
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//中断分组配置
	uart_init(115200);  //串口初始化
	LED_Init();         //LED初始化

	
	OSInit(&err);		//初始化UCOSIII
	OS_CRITICAL_ENTER();//进入临界区
	//创建开始任务
	OSTaskCreate((OS_TCB 	* )&StartTaskTCB,		//任务控制块
				 (CPU_CHAR	* )"start task", 		//任务名字
                 (OS_TASK_PTR )start_task, 			//任务函数
                 (void		* )0,					//传递给任务函数的参数
                 (OS_PRIO	  )START_TASK_PRIO,     //任务优先级
                 (CPU_STK   * )&START_TASK_STK[0],	//任务堆栈基地址
                 (CPU_STK_SIZE)START_STK_SIZE/10,	//任务堆栈深度限位
                 (CPU_STK_SIZE)START_STK_SIZE,		//任务堆栈大小
                 (OS_MSG_QTY  )0,					//任务内部消息队列能够接收的最大消息数目,为0时禁止接收消息
                 (OS_TICK	  )0,					//当使能时间片轮转时的时间片长度，为0时为默认长度，
                 (void   	* )0,					//用户补充的存储区
                 (OS_OPT      )OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR, //任务选项
                 (OS_ERR 	* )&err);				//存放该函数错误时的返回值
	OS_CRITICAL_EXIT();	//退出临界区	 
	OSStart(&err);  //开启UCOSIII
	while(1);
}

//开始任务函数
void start_task(void *p_arg)
{
	OS_ERR err;
	CPU_SR_ALLOC();
	p_arg = p_arg;

	CPU_Init();
#if OS_CFG_STAT_TASK_EN > 0u
   OSStatTaskCPUUsageInit(&err);  	//统计任务                
#endif
	
#ifdef CPU_CFG_INT_DIS_MEAS_EN		//如果使能了测量中断关闭时间
    CPU_IntDisMeasMaxCurReset();	
#endif

#if	OS_CFG_SCHED_ROUND_ROBIN_EN  //当使用时间片轮转的时候
	 //使能时间片轮转调度功能,时间片长度为1个系统时钟节拍，既1*5=5ms
	OSSchedRoundRobinCfg(DEF_ENABLED,1,&err);  
#endif		
	
	OS_CRITICAL_ENTER();	//进入临界区
	//创建LED0任务
	OSTaskCreate((OS_TCB 	* )&Led0TaskTCB,		
				 (CPU_CHAR	* )"led0 task", 		
                 (OS_TASK_PTR )led0_task, 			
                 (void		* )0,					
                 (OS_PRIO	  )LED0_TASK_PRIO,     
                 (CPU_STK   * )&LED0_TASK_STK[0],	
                 (CPU_STK_SIZE)LED0_STK_SIZE/10,	
                 (CPU_STK_SIZE)LED0_STK_SIZE,		
                 (OS_MSG_QTY  )0,					
                 (OS_TICK	  )0,					
                 (void   	* )0,					
                 (OS_OPT      )OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR,
                 (OS_ERR 	* )&err);				
				 
	//创建LED1任务
	OSTaskCreate((OS_TCB 	* )&Led1TaskTCB,		
				 (CPU_CHAR	* )"led1 task", 		
                 (OS_TASK_PTR )led1_task, 			
                 (void		* )0,					
                 (OS_PRIO	  )LED1_TASK_PRIO,     	
                 (CPU_STK   * )&LED1_TASK_STK[0],	
                 (CPU_STK_SIZE)LED1_STK_SIZE/10,	
                 (CPU_STK_SIZE)LED1_STK_SIZE,		
                 (OS_MSG_QTY  )0,					
                 (OS_TICK	  )0,					
                 (void   	* )0,				
                 (OS_OPT      )OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR, 
                 (OS_ERR 	* )&err);
				 
	//创建浮点测试任务
	OSTaskCreate((OS_TCB 	* )&FloatTaskTCB,		
				 (CPU_CHAR	* )"float test task", 		
                 (OS_TASK_PTR )float_task, 			
                 (void		* )0,					
                 (OS_PRIO	  )FLOAT_TASK_PRIO,     	
                 (CPU_STK   * )&FLOAT_TASK_STK[0],	
                 (CPU_STK_SIZE)FLOAT_STK_SIZE/10,	
                 (CPU_STK_SIZE)FLOAT_STK_SIZE,		
                 (OS_MSG_QTY  )0,					
                 (OS_TICK	  )0,					
                 (void   	* )0,				
                 (OS_OPT      )OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR, 
                 (OS_ERR 	* )&err);				 
	OS_TaskSuspend((OS_TCB*)&StartTaskTCB,&err);		//挂起开始任务			 
	OS_CRITICAL_EXIT();	//进入临界区
}

//led0任务函数
void led0_task(void *p_arg)
{
	OS_ERR err;
	p_arg = p_arg;
	while(1)
	{
		LED2=0;
		OSTimeDlyHMSM(0,0,0,200,OS_OPT_TIME_HMSM_STRICT,&err); //延时200ms
		LED2=1;
		OSTimeDlyHMSM(0,0,0,500,OS_OPT_TIME_HMSM_STRICT,&err); //延时500ms
	}
}

//led1任务函数
void led1_task(void *p_arg)
{
	OS_ERR err;
	p_arg = p_arg;
	while(1)
	{
		LED3=~LED3;
		OSTimeDlyHMSM(0,0,0,500,OS_OPT_TIME_HMSM_STRICT,&err); //延时500ms
	}
}

//浮点测试任务
void float_task(void *p_arg)
{
	CPU_SR_ALLOC();
	static float float_num=0.01;
	while(1)
	{
		float_num+=0.01f;
		OS_CRITICAL_ENTER();	//进入临界区
		printf("float_num的值为: %.4f\r\n",float_num);
		OS_CRITICAL_EXIT();		//退出临界区
		delay_ms(500);			//延时500ms
	}
}
