/*
 * Sev_prog.c
 *
 *  Created on: Jul 25, 2023
 *      Author: LENOVO
 */
#include "../../common/Bit_Math.h"
#include "../../common/STD_types.h"
#include "../../MCAL/DIO/DIO_interface.h"


static char sev_Anode[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
static char sev_Cathode[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x67};


void Sev_voidInit(u8 copy_u8SevPort)
{
	DIO_voidSetPortDir(copy_u8SevPort,Output_Port);
}
void Sev_voidSetAnode(u8 copy_u8SevPort, u8 copy_u8SevNum)
{
	DIO_voidSetPortValue(copy_u8SevPort,sev_Anode[copy_u8SevNum]);
}
void Sev_voidSetCath(u8 copy_u8SevPort, u8 copy_u8SevNum)
{
	DIO_voidSetPortValue(copy_u8SevPort,sev_Cathode[copy_u8SevNum]);
}

