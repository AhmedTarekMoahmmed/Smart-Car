/*
 * POFISP_config.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Ahmed Tarek
 */

#ifndef POFISP_CONFIG_H_
#define POFISP_CONFIG_H_



/*Macros determine the mode which the timer work on with*/
/*Range : NORMAL OR PWM */
#define TIMER0_MODE 	NORMAL



/*EXTERNAL_CLK_VALUE : this macro is used only when using external clk source*/
#define EXTERNAL_CLK_VALUE    8000000ul


#define TIMER_INITALIZATION_VALUE   (u8)0


/*IO_CLK_NO_PRESCALER: internal clock with no prescaler.                       */
#define  IO_CLK_NO_PRESCALER     (u8)0x01

/*IO_CLK_8_PRESCALER: internal clock with 8 prescaler.                         */
#define  IO_CLK_8_PRESCALER      (u8)0x02

/*IO_CLK_64_PRESCALER: internal clock with 64 prescaler.                       */
#define  IO_CLK_64_PRESCALER     (u8)0x03

/*IO_CLK_265_PRESCALER: internal clock with 256 prescaler.                     */
#define  IO_CLK_265_PRESCALER    (u8)0x04

/*IO_CLK_1024_PRESCALER: internal clock with 1024 prescaler.                   */
#define  IO_CLK_1024_PRESCALER   (u8)0x05

/*EX_CLK_FALLING_EDGE: External clock source on T0 pin. Clock on falling edge. */
#define  EX_CLK_FALLING_EDGE     (u8)0x06
/*EX_CLK_RISING_EDGE: External clock source on T0 pin. Clock on rising edge.   */
#define  EX_CLK_RISING_EDGE      (u8)0x07

/*macro to choose  the prescaler */

#define PRESCALER 		IO_CLK_NO_PRESCALER

/*********************PWM*********************************/
  /* PWM_WITH_ IO_CLK_NO_PRESCALER: internal clock with no prescaler.                       */
#define  PWM_WITH_IO_CLK_NO_PRESCALER     (u8)0x49
     
 /* PWM_WITH_ IO_CLK_8_PRESCALER: internal clock with 8 prescaler.                         */
#define  PWM_WITH_IO_CLK_8_PRESCALER      (u8)0x4a
         
 /* PWM_WITH_ IO_CLK_64_PRESCALER: internal clock with 64 prescaler.                       */
#define  PWM_WITH_IO_CLK_64_PRESCALER     (u8)0x4b
 /* PWM_WITH_ IO_CLK_265_PRESCALER: internal clock with 256 prescaler.                     */
#define  PWM_WITH_IO_CLK_265_PRESCALER    (u8)0x4c
/* PWM_WITH_ IO_CLK_1024_PRESCALER: internal clock with 1024 prescaler.                   */
#define  PWM_WITH_IO_CLK_1024_PRESCALER   (u8)0x4d
 /* PWM_WITH_ EX_CLK_FALLING_EDGE: External clock source on T0 pin. Clock on falling edge. */
#define  PWM_WITH_EX_CLK_FALLING_EDGE     (u8)0x4e
 /*PWM_WITH_ EX_CLK_RISING_EDGE: External clock source on T0 pin. Clock on rising edge.   */
#define  PWM_WITH_EX_CLK_RISING_EDGE      (u8)0x4f




#define PWM_PRESCALER PWM_WITH_IO_CLK_8_PRESCALER

#endif /* POFISP_CONFIG_H_ */
