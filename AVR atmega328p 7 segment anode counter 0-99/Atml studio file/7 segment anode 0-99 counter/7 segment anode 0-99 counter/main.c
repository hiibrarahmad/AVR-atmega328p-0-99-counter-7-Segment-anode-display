/*
 * learn 2.c
 *
 * Created: 10/29/2021 6:57:12 AM
 * Author : AEGON
 */ 



#include <avr/io.h>
#define F_CPU 1600000UL
#include<util/delay.h>
int main(void)
{
	char seven_seg_array[] = {0x01,0x4F,0x12,0x06,0x4C,0x24,0x20,0x0F,0x00,0x04};
 	char seven_seg_array1[] = {0x00,0x09,0x02,0x00,0x09,0x04,0x04,0x01,0x00,0x00};
	char seven_seg_array2[] = {0x01,0x07,0x02,0x06,0x04,0x04,0x00,0x07,0x00,0x04};
		
		int i,j;
		DDRB=0xFF;
		DDRD=0xFF;
		DDRC=0XFF;
		while(1)
		{
			for(i=0;i<=9;i++)
			{
				PORTB=seven_seg_array1[i];
				for(j=0;j<=9;j++)
				PORTC=seven_seg_array2[i];
				for(j=0;j<=9;j++)
				{
					PORTD=seven_seg_array[j];
					_delay_ms(5000);
				}
			}
		}
	}