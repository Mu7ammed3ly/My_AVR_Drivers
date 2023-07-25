/*
 * Sev_interface.h
 *
 *  Created on: Jul 25, 2023
 *      Author: LENOVO
 */

#ifndef HAL_SEV_SEG_SEV_INTERFACE_H_
#define HAL_SEV_SEG_SEV_INTERFACE_H_


void Sev_voidInit(u8 copy_u8SevPort);
void Sev_voidSetAnode(u8 copy_u8SevPort, u8 copy_u8SevNum);
void Sev_voidSetCath(u8 copy_u8SevPort, u8 copy_u8SevNum);

#endif /* HAL_SEV_SEG_SEV_INTERFACE_H_ */
