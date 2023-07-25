/*
 * main.c
 *
 *  Created on: Jul 24, 2023
 *      Author: LENOVO
 */


#include "common/Bit_Math.h"
#include "common/STD_types.h"
#include <util/delay.h>
#include "MCAL/DIO/DIO_interface.h"
#include "HAL/LED/LED_interface.h"
#include "HAL/Sev_seg/Sev_interface.h"

int main()
{
Sev_voidInit(GroupC);
int count = 0 ;
	while(1)
	{
       for(count = 0; count<=9;count++)
       {
		Sev_voidSetCath(GroupC,count);
		_delay_ms(500);
       }
	}
	return 0 ;
}
