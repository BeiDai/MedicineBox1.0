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
////	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
////	delay_init(168);  
////	ReedSwitchInit();
////	LED_Init();
////	uart_init(115200);//��ʼ�����ڲ�����Ϊ115200
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
//////	if(USART3_RX_STA&0X8000)		//���յ�һ��������
//////	{ 
//////		rlen=USART3_RX_STA&0X7FFF;	//�õ����ν��յ������ݳ���
//////		USART3_RX_BUF[rlen]=0;		//��ӽ����� 
//////		printf("%s",USART3_RX_BUF);	//���͵�����   
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
////		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
////		delay_init(168);  
////		ReedSwitchInit();
////		LED_Init();
////		uart_init(115200);//��ʼ�����ڲ�����Ϊ115200
////		usart3_init(115200); 
////		Motor_Init();
////		OLED_Init();	
////		OLED_ShowChinese(0+30,0,0,12,1); //��
////		OLED_ShowChinese(14+30,0,1,12,1); //��
////		OLED_ShowChinese(28+30,0,2,12,1);//��
////		OLED_ShowChinese(42+30,0,3,12,1);//ҩ
////		OLED_ShowChinese(56+30,0,4,12,1);//��	
////	  
////		OLED_ShowChinese(0+30-12,0+16,6,12,1); //��
////		OLED_ShowChinese(14+30-12,0+16,7,12,1); //ȡ
////		OLED_ShowChinese(28+30-12,0+16,8,12,1);//ҩ
////		OLED_ShowChinese(42+30-12,0+16,9,12,1);//��
////		OLED_ShowChinese(56+30-12+12,0+16,10,12,1);//��
////		OLED_ShowChinese(70+30-12+12,0+16,11,12,1);//��
////	
////		OLED_Refresh_Gram();
//////	OLED_ShowChinese(68+30,0,5,12,1);//wifi
////		atk_8266_config();
////	
////		USART3_RX_STA=0; //�����������
////		EN = 1; //���������ж�

////	while(1)
////	{
////		if(USART3_RX_STA&0X8000)	
////		{
////			rlen=USART3_RX_STA&0X7FFF;	//�õ����ν��յ������ݳ���
////			USART3_RX_BUF[rlen]=0;		//��ӽ����� 
////			positionReceive = USART3_RX_BUF[rlen-1] - '0'; //���ַ�תΪ����
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
//		NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//����ϵͳ�ж����ȼ�����2
//		delay_init(168);  
//		ReedSwitchInit();
//		LED_Init();
//		uart_init(115200);//��ʼ�����ڲ�����Ϊ115200
//		usart3_init(115200); 
//		Motor_Init();
//		EN = 1; //�رյ����Դ
//		OLED_Init();	
//		OLED_ShowChinese(0+30,0,0,12,1); //��
//		OLED_ShowChinese(14+30,0,1,12,1); //��
//		OLED_ShowChinese(28+30,0,2,12,1);//��
//		OLED_ShowChinese(42+30,0,3,12,1);//ҩ
//		OLED_ShowChinese(56+30,0,4,12,1);//��	
//	  
//		OLED_ShowChinese(0+30-12,0+16,6,12,1); //��
//		OLED_ShowChinese(14+30-12,0+16,7,12,1); //ȡ
//		OLED_ShowChinese(28+30-12,0+16,8,12,1);//ҩ
//		OLED_ShowChinese(42+30-12,0+16,9,12,1);//��
//		OLED_ShowChinese(56+30-12+12,0+16,10,12,1);//��
//		OLED_ShowChinese(70+30-12+12,0+16,11,12,1);//��
//	
//		OLED_Refresh_Gram();
////	OLED_ShowChinese(68+30,0,5,12,1);//wifi
//		atk_8266_config();
//	
//		USART3_RX_STA=0; //�����������
//		
//		boxPosition_Init(1,350,6400*1000);
//		
//		positionNow = 1;

//	while(1)
//	{
//		if(USART3_RX_STA&0X8000)	
//		{
//			rlen=USART3_RX_STA&0X7FFF;	//�õ����ν��յ������ݳ���
//			USART3_RX_BUF[rlen]=0;		//��ӽ����� 
//			positionReceive = USART3_RX_BUF[rlen-1] - '0'; //���ַ�תΪ����
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
//ALIENTEK ̽����STM32F407������ UCOSIIIʵ��
//��4-1 UCOSIII UCOSIII��ֲ

//UCOSIII���������ȼ��û�������ʹ�ã�ALIENTEK
//����Щ���ȼ��������UCOSIII��5��ϵͳ�ڲ�����
//���ȼ�0���жϷ������������� OS_IntQTask()
//���ȼ�1��ʱ�ӽ������� OS_TickTask()
//���ȼ�2����ʱ���� OS_TmrTask()
//���ȼ�OS_CFG_PRIO_MAX-2��ͳ������ OS_StatTask()
//���ȼ�OS_CFG_PRIO_MAX-1���������� OS_IdleTask()
//����֧�֣�www.openedv.com
//�Ա����̣�http://eboard.taobao.com  
//������������ӿƼ����޹�˾  
//���ߣ�����ԭ�� @ALIENTEK

//�������ȼ�
#define START_TASK_PRIO		3
//�����ջ��С	
#define START_STK_SIZE 		512
//������ƿ�
OS_TCB StartTaskTCB;
//�����ջ	
CPU_STK START_TASK_STK[START_STK_SIZE];
//������
void start_task(void *p_arg);

//�������ȼ�
#define LED0_TASK_PRIO		4
//�����ջ��С	
#define LED0_STK_SIZE 		128
//������ƿ�
OS_TCB Led0TaskTCB;
//�����ջ	
CPU_STK LED0_TASK_STK[LED0_STK_SIZE];
void led0_task(void *p_arg);

//�������ȼ�
#define LED1_TASK_PRIO		5
//�����ջ��С	
#define LED1_STK_SIZE 		128
//������ƿ�
OS_TCB Led1TaskTCB;
//�����ջ	
CPU_STK LED1_TASK_STK[LED1_STK_SIZE];
//������
void led1_task(void *p_arg);

//�������ȼ�
#define FLOAT_TASK_PRIO		6
//�����ջ��С
#define FLOAT_STK_SIZE		128
//������ƿ�
OS_TCB	FloatTaskTCB;
//�����ջ
__align(8) CPU_STK	FLOAT_TASK_STK[FLOAT_STK_SIZE];
//������
void float_task(void *p_arg);

int main(void)
{
	OS_ERR err;
	CPU_SR_ALLOC();
	
	delay_init(168);  	//ʱ�ӳ�ʼ��
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�жϷ�������
	uart_init(115200);  //���ڳ�ʼ��
	LED_Init();         //LED��ʼ��

	
	OSInit(&err);		//��ʼ��UCOSIII
	OS_CRITICAL_ENTER();//�����ٽ���
	//������ʼ����
	OSTaskCreate((OS_TCB 	* )&StartTaskTCB,		//������ƿ�
				 (CPU_CHAR	* )"start task", 		//��������
                 (OS_TASK_PTR )start_task, 			//������
                 (void		* )0,					//���ݸ��������Ĳ���
                 (OS_PRIO	  )START_TASK_PRIO,     //�������ȼ�
                 (CPU_STK   * )&START_TASK_STK[0],	//�����ջ����ַ
                 (CPU_STK_SIZE)START_STK_SIZE/10,	//�����ջ�����λ
                 (CPU_STK_SIZE)START_STK_SIZE,		//�����ջ��С
                 (OS_MSG_QTY  )0,					//�����ڲ���Ϣ�����ܹ����յ������Ϣ��Ŀ,Ϊ0ʱ��ֹ������Ϣ
                 (OS_TICK	  )0,					//��ʹ��ʱ��Ƭ��תʱ��ʱ��Ƭ���ȣ�Ϊ0ʱΪĬ�ϳ��ȣ�
                 (void   	* )0,					//�û�����Ĵ洢��
                 (OS_OPT      )OS_OPT_TASK_STK_CHK|OS_OPT_TASK_STK_CLR, //����ѡ��
                 (OS_ERR 	* )&err);				//��Ÿú�������ʱ�ķ���ֵ
	OS_CRITICAL_EXIT();	//�˳��ٽ���	 
	OSStart(&err);  //����UCOSIII
	while(1);
}

//��ʼ������
void start_task(void *p_arg)
{
	OS_ERR err;
	CPU_SR_ALLOC();
	p_arg = p_arg;

	CPU_Init();
#if OS_CFG_STAT_TASK_EN > 0u
   OSStatTaskCPUUsageInit(&err);  	//ͳ������                
#endif
	
#ifdef CPU_CFG_INT_DIS_MEAS_EN		//���ʹ���˲����жϹر�ʱ��
    CPU_IntDisMeasMaxCurReset();	
#endif

#if	OS_CFG_SCHED_ROUND_ROBIN_EN  //��ʹ��ʱ��Ƭ��ת��ʱ��
	 //ʹ��ʱ��Ƭ��ת���ȹ���,ʱ��Ƭ����Ϊ1��ϵͳʱ�ӽ��ģ���1*5=5ms
	OSSchedRoundRobinCfg(DEF_ENABLED,1,&err);  
#endif		
	
	OS_CRITICAL_ENTER();	//�����ٽ���
	//����LED0����
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
				 
	//����LED1����
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
				 
	//���������������
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
	OS_TaskSuspend((OS_TCB*)&StartTaskTCB,&err);		//����ʼ����			 
	OS_CRITICAL_EXIT();	//�����ٽ���
}

//led0������
void led0_task(void *p_arg)
{
	OS_ERR err;
	p_arg = p_arg;
	while(1)
	{
		LED2=0;
		OSTimeDlyHMSM(0,0,0,200,OS_OPT_TIME_HMSM_STRICT,&err); //��ʱ200ms
		LED2=1;
		OSTimeDlyHMSM(0,0,0,500,OS_OPT_TIME_HMSM_STRICT,&err); //��ʱ500ms
	}
}

//led1������
void led1_task(void *p_arg)
{
	OS_ERR err;
	p_arg = p_arg;
	while(1)
	{
		LED3=~LED3;
		OSTimeDlyHMSM(0,0,0,500,OS_OPT_TIME_HMSM_STRICT,&err); //��ʱ500ms
	}
}

//�����������
void float_task(void *p_arg)
{
	CPU_SR_ALLOC();
	static float float_num=0.01;
	while(1)
	{
		float_num+=0.01f;
		OS_CRITICAL_ENTER();	//�����ٽ���
		printf("float_num��ֵΪ: %.4f\r\n",float_num);
		OS_CRITICAL_EXIT();		//�˳��ٽ���
		delay_ms(500);			//��ʱ500ms
	}
}
