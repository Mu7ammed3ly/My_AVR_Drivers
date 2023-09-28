/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: LENOVO
 */

#define  F_CPU    8000000UL
#include "common/Bit_Math.h"
#include "common/STD_types.h"
#include <util/delay.h>
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/LED/LED_interface.h"
#include "HAL/Sev_seg/Sev_interface.h"
#include "HAL/Switch/Switch_interface.h"
#include "HAL/LCD/LCD_interface.h"
#include "HAL/KEYPAD/KEYBAD_interface.h"
#include "MCAL/GIE/GIE_interface.h"
#include "MCAL/EXTI/EXTI_interface.h"
#include "MCAL/ADC/ADC_interface.h"
#include "MCAL/TIMER/TIMER_interface.h"
#include "MCAL/SPI/SPI_interface.h"
#include "MCAL/I2C/I2C_interface.h"
int main()
{

	I2C_voidMasterInit();

	while(1)
	{

	}

	return 0 ;
}
