/*
 * TIMER_interface.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Ahmed Tarek
 */

#ifndef TIMER_INTERFACE_H_
#define TIMER_INTERFACE_H_



#define NORMAL    (u8)0
#define PWM	      (u8)1


/******************************************************************************************/
/********************************************TIMER_u8TimerConfig*****************************/

/*Description: used to initiate and configure the timer 1 which is 8bit
 * Inputs : void
 *
 * Outputs: Error state
 *
 * */

u8 TIMER_u8TimerConfig(Copy_u8PwdValue);

#endif /* TIMER_INTERFACE_H_ */
