/*
 * bcd_Config.c
 *
 *  Created on: Mar 23, 2024
 *      Author: ziad
 */
#include "bcd_Config.h"

Seg Seg_1_Cathod = {
	.Pin_1 = PortA_p1,
	.Pin_2 = PortA_p2,
	.Pin_3 = PortA_p3,
	.Pin_4 = PortA_p4,
	.Pin_5 = PortA_p5,
	.Pin_6 = PortA_p6,
	.Pin_7 = PortA_p7
};


Seg Seg_1_Anode = {
	.Pin_1 = PortB_p1,
	.Pin_2 = PortB_p2,
	.Pin_3 = PortB_p3,
	.Pin_4 = PortB_p4,
	.Pin_5 = PortB_p5,
	.Pin_6 = PortB_p6,
	.Pin_7 = PortB_p7,
};

BCD BCD_1 = {
	.Pin_1 = PortC_p0,
	.Pin_2 = PortC_p1,
	.Pin_3 = PortC_p2,
	.Pin_4 = PortC_p3,
};



