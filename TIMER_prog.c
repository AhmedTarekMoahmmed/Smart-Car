/*
 * TIMER_prog.c
 *
 *  Created on: Feb 11, 2019
 *      Author: Ahmed Tarek
 */


#include "STD_TYPES.h"
#include "BIT_CALC.h"

#include "TIMER_interface.h"
#include "TIMER_config.h"
#include "TIMER_private.h"


/********************************************TIMER_u8TimerConfig*****************************/

/*Description: used to initiate and configure the timer 0 which is 8bit
 * Inputs : void
 *
 * Outputs: Error state
 *
 * */

void TIMER_u8TimerConfig(u8 Copy_u8PwdValue)
{

	switch(TIMER0_MODE)
	{
	case NORMAL:
		TCNT_0_REG = TIMER_INITALIZATION_VALUE;
		
		TCCR_0_REG = PRESCALER;
	break;
	case PWM  :
		TCNT_0_REG = TIMER_INITALIZATION_VALUE;
		OCR_0_REG = Copy_u8PwdValue;
		
		TCCR_0_REG = PWM_WITH_IO_CLK_8_PRESCALER;

	}



}

