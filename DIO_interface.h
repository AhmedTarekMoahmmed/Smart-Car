/*interface mustn't change between the differnt Targets but the prog,config and private file may be change */
/**********************************************************************************/
/* Author  : Ahmed Tarek                                                          */
/* Date    : 29 Jan 2019                                                          */
/* Version : v01                                                                  */
/**********************************************************************************/
/*Description												                              	        		  */
/*-----------												                                      			  */
/*DIO_interface.h is a file from DIO Deriver include the header of function which */
/*use to initiate all pins ,set pin direction , set pin value ,get pin value ,    */
/*set port direction , set port value, get port value		                          */
/**********************************************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_



/*pin number of the target AVR ATMEGA 32  */
/*Rnge : PIN0 TO PIN31 */

#define DIO_PIN0          PIN0 
#define DIO_PIN1          PIN1 
#define DIO_PIN2          PIN2 
#define DIO_PIN3          PIN3 
#define DIO_PIN4          PIN4 
#define DIO_PIN5          PIN5 
#define DIO_PIN6          PIN6 
#define DIO_PIN7          PIN7 
#define DIO_PIN8          PIN8 
#define DIO_PIN9          PIN9 
#define DIO_PIN10         PIN10
#define DIO_PIN11         PIN11
#define DIO_PIN12         PIN12
#define DIO_PIN13         PIN13
#define DIO_PIN14         PIN14
#define DIO_PIN15         PIN15
#define DIO_PIN16         PIN16
#define DIO_PIN17         PIN17
#define DIO_PIN18         PIN18
#define DIO_PIN19         PIN19
#define DIO_PIN20         PIN20
#define DIO_PIN21         PIN21
#define DIO_PIN22         PIN22
#define DIO_PIN23         PIN23
#define DIO_PIN24         PIN24
#define DIO_PIN25         PIN25
#define DIO_PIN26         PIN26
#define DIO_PIN27         PIN27
#define DIO_PIN28         PIN28
#define DIO_PIN29         PIN29
#define DIO_PIN30         PIN30
#define DIO_PIN31         PIN31

#define DIO_PORT_A         0
#define DIO_PORT_B         1
#define DIO_PORT_C         2
#define DIO_PORT_D         3

/****************************PORTS_HANDLING**************************/


#define DIO_PORTA      DIO_PORT_0_REG
#define DIO_DDRA       DIO_DDR_0_REG	
#define DIO_PINA       DIO_PIN_0_REG	


#define DIO_PORTB      DIO_PORT_1_REG
#define DIO_DDRB       DIO_DDR_1_REG	
#define DIO_PINB       DIO_PIN_1_REG	
      
      
#define DIO_PORTC      DIO_PORT_2_REG
#define DIO_DDRC       DIO_DDR_2_REG	
#define DIO_PINC       DIO_PIN_2_REG	
      
      
#define DIO_PORTD      DIO_PORT_3_REG
#define DIO_DDRD       DIO_DDR_3_REG	
#define DIO_PIND       DIO_PIN_3_REG	


/***************************************************************/

/*Description: Initialization all pins direction and value
 * Inputs : void
 * Outputs: void
 *
 * */


void DIO_u8Intialize(void);

/****************************************************************/

/****************************************************************/

/*Description: set pin Direction
 * Inputs : u8  Copy_u8PinNB     : pin Number
                                  Range PIN0 TO PIN31
 * 		  : u8  Copy_u8Direction : if it DIO_u8_PIN_INIT_INPUT mean that this pin is input ,
                                if it DIO_u8_PIN_INIT_OUTPUT mean that this pin is output
 * Outputs: Error state
 *
 * */
 
u8 DIO_u8SetPinDirection(u8 Copy_u8PinNB,u8 Copy_u8Direction);

/****************************************************************/

/****************************************************************/

/*Description: set pin value
 * Inputs : u8 u8PinNB : pin Number
                        Range PIN0 TO PIN31
 * 		  : u8 u8value :  if it DIO_u8_PIN_INIT_LOW mean that this pin is input ,
 *                      if it DIO_u8_PIN_INIT_HIGH mean that this pin is output
 * Outputs: Error state
 * */

u8 DIO_u8SetPinValue(u8 Copy_u8PinNB,u8 Copy_u8value);

/******************************************************************/

/****************************************************************/

/*Description: get pin value
 * Inputs : u8 u8PinNB   : pin Number
                           Range PIN0 TO PIN31
 * 		  : u8* pu8value : pointer to value which it may be high (1) or low (0)
 * Outputs: Error state
 *
 * */

u8 DIO_u8GetPinValue(u8 Copy_u8PinNB,u8* Copy_pu8value);

/****************************************************************/

/****************************************************************/

/*Description: set port value
 * Inputs : u8 u8PortNB     : port Number
                             Range PORTA TO PORTD
 * 		  : u8 u8Direction : if it DIO_u8_PORT_INIT_LOW mean that all pins of this port are zero ,
 * 		                    if it DIO_u8_PORT_INIT_HIGH mean that all pins of this port are one
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortValue(u8 Copy_u8PortNB,u8 Copy_u8Value);
/****************************************************************/

/****************************************************************/
/*Description: set port Direction
 * Inputs : u8 u8PortNB     : port Number
                             Range PORTA TO PORTD
 * 		  : u8 u8Direction : if it DIO_u8_PORT_INIT_INPUT mean that this port is input ,
 * 		                     if it DIO_u8_PORT_INIT_OUTPUT mean that this port is output
 * Outputs: Error state
 *
 * */
u8 DIO_u8SetPortDirection(u8 Copy_u8PortNB,u8 Copy_u8Direction);

/****************************************************************/

/****************************************************************/

/*Description: get port value
 * Inputs : u8 u8PinNB   :  port Number
                           Range PORTA TO PORTD
 * 		  : u8* pu8value : pointer to value which it may be high (1) or low (0)
 * Outputs: Error state
 *
 * */

u8 DIO_u8GetPortValue(u8 Copy_u8PortNB,u8* Copy_pu8value);
/****************************************************************/

#endif /* DIO_INTERFACE_H_ */
