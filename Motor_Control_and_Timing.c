/*
 * Motor_Control_and_Timing.c
 *
 * Created: 8/17/2015 4:47:12 PM
 *  Author: biocrede1
 */

#include <avr/io.h>
#include "Motor_Control_and_Timing.h"
#include <util/delay.h>
#include "PWM.h"
//Use a 12 MHz Clk!!

int main(void)
{
	//Activate motor logic output
	DDRC |= (1<<DDC0);
	
	//Power management
	PRR |= (1<<PRTWI) | (1<<PRUSART0) | (1<<PRSPI) | (1<<PRTIM1) | (1<<PRADC);
	
	//Activate all of portB as an output
	DDRB |= 0xFF;
	
	//PWM initialization
	PWM_TIM0_init();
	PWM_TIM2_init();
	
    while(1)
    {
        
    }
}