/*
 * Main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ziad
 */
#include "../Serv/Type_std.h"
#include "../Serv/bit_math.h"
#include "../GPIO/dio_Init.h"
#include <util/delay.h>


void Intialization(void);
void Loop(void);


int main(void)
{
	Intialization();
	while(1)
	{
		Loop();
	}
}


/* --------------- Callenge_2 --------------- */

//void Intialization(void)
//{
//	Dio_setPinDir(PortC_p0, Direction_Pin_Output);
//	Dio_setPinDir(PortC_p1, Direction_Pin_Output);
//	Dio_setPinDir(PortC_p2, Direction_Pin_Output);
//
//	Dio_setPinDir(PortC_p3, Direction_Pin_Output);
//
//}

//void Loop(void)
//{
//	Dio_setPinVal(PortC_p0, Status_Pin_High);
//	_delay_ms(50);
//	_delay_ms(40);
//	Dio_setPinVal(PortC_p0, Status_Pin_Low);
//	_delay_ms(40);
//
//	Dio_setPinVal(PortC_p1, Status_Pin_High);
//	_delay_ms(40);
//	Dio_setPinVal(PortC_p1, Status_Pin_Low);
//	_delay_ms(40);
//
//
//	Dio_setPinVal(PortC_p2, Status_Pin_High);
//	_delay_ms(40);
//	Dio_setPinVal(PortC_p2, Status_Pin_Low);
//	_delay_ms(40);
//
//	Dio_setPinVal(PortC_p3, Status_Pin_High);
//	_delay_ms(40);
//	Dio_setPinVal(PortC_p3, Status_Pin_Low);
//	_delay_ms(40);
//}


/* --------------- Callenge_1 --------------- */

//void Intialization(void)
//{
//	Dio_setPinDir(PortC_p0, Direction_Pin_Output);
//	Dio_setPinDir(PortC_p1, Direction_Pin_Output);
//
//	Dio_setPinDir(PortB_p0, Direction_Pin_Input);
//	Dio_setPinDir(PortB_p1, Direction_Pin_Input);
//
//}
//
//void Loop(void)
//{
//	u8 Button_1 = Dio_getPinVal(PortB_p0);
//	u8 Button_2 = Dio_getPinVal(PortB_p1);
//
//	if(Button_1 == 1)
//	{
//		Dio_setPinVal(PortC_p0, Status_Pin_High);
//	}
//
//	else if(Button_2 == 1)
//	{
//		Dio_setPinVal(PortC_p1, Status_Pin_High);
//	}
//
//	else
//	{
//		Dio_setPinVal(PortC_p1, Status_Pin_Low);
//		Dio_setPinVal(PortC_p0, Status_Pin_Low);
//	}
//
//	if(Button_2 == 1 && Button_1 == 1)
//	{
//		Dio_setPinVal(PortC_p0, Status_Pin_High);
//		Dio_setPinVal(PortC_p1, Status_Pin_High);
//	}
//	else
//	{
//		Dio_setPinVal(PortC_p1, Status_Pin_Low);
//		Dio_setPinVal(PortC_p0, Status_Pin_Low);
//	}
//}
