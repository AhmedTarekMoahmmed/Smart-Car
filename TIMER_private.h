/*
 * TIMER_private.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Ahmed Tarek
 */

#ifndef TIMER_PRIVATE_H_
#define TIMER_PRIVATE_H_


#define NORMAL_MODE   (u8)0
#define FAST_PWM_MODE (u8)0x03

#define TCNT_0_REG   ((Register_8B*)0x52) -> ByteAccess



#define OCR_0_REG  ((Register_8B*)0x5C) -> ByteAccess



#define TCCR_0_REG   ((Register_8B*)0x53) -> ByteAccess



#define TIMSK_0_REG	 ((Register_8B*)0x59) -> ByteAccess

#endif /* TIMER_PRIVATE_H_ */
