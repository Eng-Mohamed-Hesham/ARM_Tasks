/*
 * main.c
 *
 *  Created on: Sep 13, 2023
 *      Author: Muhammed-PC
 */

#include "../include/STD_TYPES.h"
#include "../include/BIT_MATH.h"

#include "../include/MRCC_interface.h"
#include "../include/MGPIO_Interface.h"
#include "../include/MSYSTICK_Interface.h"

#include "../include/HLED_Interface.h"
#include "../include/HSSD_Interface.h"

void main (void){
	MRCC_voidInit();
	MSTK_voidInit();
	while (1){
		for (u8 Copy_u8iterator = zero; Copy_u8iterator <= nine; Copy_u8iterator++){
			HSSD_voidDisplayNumber(MGPIO_PORTA, RIGHT_HALF, Copy_u8iterator);
			MSTK_voidSetBusyWait(1000000);
		}

		for (u8 Copy_u8iterator = eight; Copy_u8iterator >= one; Copy_u8iterator--){
			HSSD_voidDisplayNumber(MGPIO_PORTA, RIGHT_HALF, Copy_u8iterator);
			MSTK_voidSetBusyWait(1000000);
		}

	}
}
