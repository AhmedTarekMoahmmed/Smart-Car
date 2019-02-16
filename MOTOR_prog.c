/*
 * MOTOR_prog.c
 *
 *  Created on: Feb 13, 2019
 *      Author: Ahmed Tarek
 */

/****************************MOTOR_prog.c*******************************/
/* Author  : Ahmed Tarek                                                  */
/* Date    : 11 feb 2019                                                  */
/* Version : v01                                                          */
/**************************************************************************/
/*Description															  */
/*-----------															  */
/*MOTOR_prog.c is a file from MOTOR Deriver include the definition        */
/* of function which will be used to set motor speed and direction        */
/**************************************************************************/




/********************************************LMD_u8Display*****************************/

/*Description: used to set motor speed and direction
 * Inputs : u8 Copy_u8Dirctio      :pointer to array which include  the patterns which will display
 * 			Range				   : MOTOR_DIR_CLOCKWISE '1' or   MOTOR_DIR_ANTICLOCKWISE '0'
 * 		    : u8 Copy_u8Speed     : color of  the pattern which will display
 * 		     Range				  : 0 to 255
 * Outputs: Error state
 *
 * */
u8 MOTOR_u8ControlSpeedDirection(u8 Copy_u8Dirctio,u8 Copy_u8Speed)
{

	/*Local variable use to check the error  */
		u8 Local_u8OperatinStatue = STD_u8_OK;

		/*condition to validate the inputs */
		if(			(Copy_u8Speed == MOTOR_FULL_SPEED)		||
					((Copy_u8Dirctio != MOTOR_DIR_CLOCKWISE) && (Copy_u8Dirctio != MOTOR_DIR_ANTICLOCKWISE))

			 )
			{
				Local_u8OperatinStatue = STD_u8_ERROR;
			}
			else
			{

				TIMER_u8TimerConfig(Copy_u8Speed);


				switch(Copy_u8Dirctio)
				{
				case MOTOR_DIR_CLOCKWISE:
					DIO_u8SetPinValue(MOTOR_PIN1,MOTOR_DIR_CLOCKWISE);
					DIO_u8SetPinValue(MOTOR_PIN2,MOTOR_DIR_ANTICLOCKWISE);

				case MOTOR_DIR_CLOCKWISE:
					DIO_u8SetPinValue(MOTOR_PIN1,MOTOR_DIR_ANTICLOCKWISE);
					DIO_u8SetPinValue(MOTOR_PIN2,MOTOR_DIR_CLOCKWISE);
				}


			}

		return Local_u8OperatinStatue;
}


