#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 


#if defined STM32F10X_HD
#define LED    PEout(5)// PE5	
#elif defined STM32F10X_MD
//#define LED    PAout(9)// PA09	
#define LED    PCout(13)// PC13	
#endif

void LED_Init(void);//��ʼ��

		 				    
#endif
