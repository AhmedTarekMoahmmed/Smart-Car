/*

/****************************MOTOR_interface.h*******************************/
/* Author  : Ahmed Tarek                                                  */
/* Date    : 11 feb 2019                                                  */
/* Version : v01                                                          */
/**************************************************************************/
/*Description															  */
/*-----------															  */
/*MOTOR_interface.h is a file from MOTOR Deriver include the declaration  */
/* of function which will be used to set motor speed and direction        */
/**************************************************************************/
#ifndef MOTOR_INTERFACE_H_
#define MOTOR_INTERFACE_H_





/********************************************LMD_u8Display*****************************/

/*Description: used to set motor speed and direction
 * Inputs : u8 Copy_u8Dirctio      :pointer to array which include  the patterns which will display
 * 			Range				   : MOTOR_DIR_CLOCKWISE '1' or   MOTOR_DIR_ANTICLOCKWISE '0'
 * 		    : u8 Copy_u8Speed     : color of  the pattern which will display
 * 		     Range				  : 0 to 255
 * Outputs: Error state
 *
 * */
u8 MOTOR_u8ControlSpeedDirection(u8 Copy_u8Dirctio,u8 Copy_u8Speed);


#endif /* MOTOR_INTERFACE_H_ */
