/***************************************************/
/* Author  : fatma                                 */
/* Date    : 2 august 2021                         */
/* version : V01                                   */
/***************************************************/

#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "STK_interface.h"
#include "7SEG_interface.h"
#include "7SEG_private.h"
#include "7SEG_config.h"

/* Display 7-segment from 0 to 9 */
void SevenSeg_voidSevenDisplay(void)
{
if (SEG_TYPE == SEG_COMMON_ANOD)
{
for(int i=0;i<10;i++)
		{
	        GPIO_voidSetPortValue(SEG_PORT, ANOD_SEG[i]);
			 //delay 800ms
			 STK_voidSetBusyWait(800000);

		}
}
else if(SEG_TYPE == SEG_COMMON_CATHOD)
{

for(u8 i=0;i<10;i++)
		{
	          GPIO_voidSetPortValue(SEG_PORT, CATHOD_SEG[i]);

			 //delay 800ms
			 STK_voidSetBusyWait(800000);

		}

}
}

/* Display specific number on 7-segment */
void SevenSeg_voidSevenDisplayNumber(u8 Copy_u8Number){
	if (SEG_TYPE == SEG_COMMON_ANOD)
	{
	for(u8 i=0;i<10;i++)
	{
		if (Copy_u8Number==i)
			GPIO_voidSetPortValue(SEG_PORT, ANOD_SEG[i]);
	}
}
	else if (SEG_TYPE == SEG_COMMON_CATHOD)
	{
	for(u8 i=0;i<10;i++)
	{
		if (Copy_u8Number==i)
		GPIO_voidSetPortValue(SEG_PORT, CATHOD_SEG[i]);

	}
}
}
