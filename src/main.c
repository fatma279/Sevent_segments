/***************************************************/
/* Author  : fatma                                 */
/* Date    : 2 august 2021                         */
/* version : V01                                   */
/***************************************************/


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "RCC_interface.h"
#include "DIO_interface.h"
#include "STK_interface.h"
#include "7SEG_interface.h"


void main(void)
{
	// initiate system clock
	RCC_voidInitSysClock();

	// Enable PORTA
	RCC_voidEnablePeripheralClock(RCC_APB2, RCC_PORTA );

	// SET pins direction for seven segment
	GPIO_voidSetPinDirection(GPIOA, PIN0, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN1, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN2, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN3, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN4, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN5, OUTPUT_SPEED_2MHZ_PP);
	GPIO_voidSetPinDirection(GPIOA, PIN6, OUTPUT_SPEED_2MHZ_PP);

  // Infinite loop
  while (1)
    {
      /* Display 7-segment from 0 to 9 */
	  SevenSeg_voidSevenDisplay();

	  /* Delay 1s */
	  STK_voidSetBusyWait(1000000);

      /* Display specific number on 7-segment */
	  SevenSeg_voidSevenDisplayNumber(5);

	  /* Delay 1s */
	  STK_voidSetBusyWait(1000000);



    }
}

