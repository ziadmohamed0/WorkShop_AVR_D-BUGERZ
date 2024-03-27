/*
 * Main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ziad
 */

#include "Main_Init.h"
#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
{
	while(1)
	{

	}
}


/*********** Initializations Challenge 3 *********/
//	Dio_setPinDir(PortD_p2,Direction_Pin_Input);
//	Dio_setPinDir(PortD_p3,Direction_Pin_Input);
//
//	Bcd_7segInit(Seg_1_Cathod);


/*********** Loop Challenge 3 *********/
//		u8 Number = 0;
//
//
//		if(Dio_getPinVal(PortD_p2))
//		{
//			while(Dio_getPinVal(PortD_p2))
//			{
//				_delay_ms(50);
//				Bcd_7segWriteNumCathode(Seg_1_Cathod, Number);
//			}
//			if(Number == 10)
//			{
//				Number = 0;
//			}
//			else
//			{
//				Number++;
//			}
//		}
//
//		if(Dio_getPinVal(PortD_p3))
//			{
//				while(Dio_getPinVal(PortD_p3))
//				{
//					_delay_ms(50);
//					Bcd_7segWriteNumCathode(Seg_1_Cathod, Number);
//				}
//				if(Number == 10)
//				{
//				Number = 0;
//				}
//				else
//				{
//					Number-=1;
//				}
//			}



/*********** Challenge 4 *********/
//u8 Number = 0;
//
//ISR(INT1_vect)
//{
//	Number--;
//	Bcd_7segWriteNumCathode(Seg_1_Cathod, Number);
//	if(Number == 10)
//	{
//		Number = 0;
//	}
//
//}
//
//ISR(INT0_vect)
//{
//	Bcd_7segWriteNumCathode(Seg_1_Cathod, Number);
//	Number++;
//	if(Number == 10)
//	{
//		Number = 0;
//	}
//}
//
//void INT_0_Init(void)
//{
//	Dio_setPinDir(PortD_p2, Direction_Pin_Input);
//	Dio_setPinDir(PortC_p6,Direction_Pin_Output);
//	Dio_setPinVal(PortC_p6, Status_Pin_Low);
//
//	GICR |= (1 << INT0);
//	MCUCR |= (1 << ISC00) | (1 << ISC01);
//	SREG |= (1 << 7);
//}
//
//void INT_1_Init(void)
//{
//	Dio_setPinDir(PortD_p3, Direction_Pin_Input);
//	Dio_setPinDir(PortC_p6,Direction_Pin_Output);
//
//	Dio_setPinVal(PortC_p6, Status_Pin_Low);
//	GICR |= (1 << INT1);
//	MCUCR |= (1 << ISC00) | (1 << ISC01);
//	SREG |= (1 << 7);
//}
//
//
//int main(void)
//{
////	Dio_setPinDir(PortC_p6,Direction_Pin_Output);
//
//	Bcd_7segInit(Seg_1_Cathod);
//
//
//	INT_0_Init();
//	INT_1_Init();
//
//	while(1)
//	{
//
//	}
//}
