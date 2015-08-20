/*
 * Motor_Control_and_Timing.h
 *
 * Created: 8/19/2015 7:15:10 PM
 *  Author: biocrede1
 */ 


#ifndef MOTOR_CONTROL_AND_TIMING_H_
#define MOTOR_CONTROL_AND_TIMING_H_

#define F_CPU 12000000
#define fifteen_minutes 900000
#define channels_one_through_eight_on PORTB |= (1<<PORTB0)
#define channels_one_through_eight_off PORTB &= ~(1<<PORTB0)
#define motor_on PORTC |= (1<<PORTC0)
#define motor_off PORTC &= ~(1<<PORTC0)



#endif /* MOTOR_CONTROL_AND_TIMING_H_ */