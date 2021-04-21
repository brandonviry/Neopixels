/*
 * CFile5.c
 *
 * Created: 23/03/2021 16:51:40
 *  Author: Brandon viry (HSK)
 */ 
#include <avr/io.h>
#define F_CPU 16000000000UL
#include <util/delay.h>

 uint8_t ledNeo = 0xf0;
 uint8_t bits ;
 uint8_t LED[15]={0x00,0x00,0xf0,
				0x00,0x00,0xf0,
				0xf0,0xf0,0xf0,
				0x00,0xf0,0x00,
				0x00,0xf0,0x00};
	

		

void init()
{
 DDRC|=(1<<5);
 PORTC &=~(1<<5);

}
void cycle(uint8_t ledC[])
{
			 PORTC &=~(1<<5);
			 _delay_us(400);
			 for (uint8_t i =0;i<15;i++)
			 {
				 ledNeo=ledC[i];
				 
				 for (bits =0 ; bits<=7; bits++)
				 {
					 if ((ledNeo & (1<<bits))!= 0)
					 {
						 PORTC |=(1<<5);
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 
						 PORTC &=~(1<<5);

						 
					 }
					 else
					 {
						 PORTC |=(1<<5);
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 
						 
						 
						 PORTC &=~(1<<5);
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 asm("NOP");
						 
					 }
				 }
				 

			 }
}
int main(void)
{
	init();
	//
		uint8_t time =300;
		
		uint8_t seq0[15]={0x00,0x00,0x00,
			0x00,0x00,0x00,
			0xf0,0xf0,0xf0,
			0x00,0x00,0x00,
		0x00,0x0,0x00};
		
		uint8_t seq1[15]={0x00,0x00,0xf0,
			0x00,0x00,0xf0,
			0xf0,0xf0,0xf0,
			0x00,0xf0,0x00,
		0x00,0xf0,0x00};
		
		uint8_t seq2[15]={0x00,0xf0,0x00,
					0x00,0xf0,0x00,
					0xf0,0xf0,0xf0,
					0x00,0x00,0x00,
				0x00,0x0,0x00};
				
		uint8_t seq3[15]={0x00,0x00,0x00,
							0x00,0x00,0x00,
							0xf0,0xf0,0xf0,
							0x00,0x00,0xf0,
						0x00,0x0,0xf0};
	
	//
	while(1)
	{
		cycle(seq0);
		
		_delay_us(time);
		
		cycle(seq2);
		_delay_us(time);
		cycle(seq3);
		_delay_us(time);

	}
}