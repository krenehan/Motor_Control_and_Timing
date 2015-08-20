/*
 * PWM.c
 *
 * Created: 8/19/2015 7:16:39 PM
 *  Author: biocrede1
 */ 

#include <avr/io.h>

void PWM_TIM0_init(void)
{
	DDRD |= (1<<DDD5) | (1<<DDD6);
	OCR0A = 0x7F;
	OCR0B = 0x7F;
	TCCR0B |= (1<<CS00); //No prescaler for 46,875 Hz input
	TCCR0A |= (1<<WGM01) | (1<<WGM00); //Fast PWM
	TCCR0A |= (1<<COM0A1) | (1<<COM0B1) | (1<<COM0B0); //Set OC0A in non-inverting mode and OC0B in inverting mode for CLK and CLK_Bar
}

void PWM_TIM2_init(void)
{
	DDRD |= (1<<DDD5) | (1<<DDD6);
	OCR2A = 0x7F;
	OCR2B = 0x7F;
	TCCR2B |= (1<<CS00); //No prescaler for 46,875 Hz input
	TCCR2A |= (1<<WGM01) | (1<<WGM00); //Fast PWM
	TCCR2A |= (1<<COM2A1) | (1<<COM2B1) | (1<<COM2B0); //Set OC0A in non-inverting mode and OC0B in inverting mode for CLK and CLK_Bar
}
