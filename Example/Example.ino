/*
 * Motor Driver Library for L293D Motor Drivers 
 * set your pwm pin, pin a and pin b
 * initialise motor driver eg Motor M(your pwm pin, your pin a, your pin b)
 * siddharthdeore@gmail.com 
 *
*/
#include <MotorDriver.h>

#define PIN_PWM 9
#define PIN_A 7
#define PIN_B 8

Motor DCMotor(PIN_PWM, PIN_A, PIN_B); // initialise the motor (pwm, pin A, pin B)
void setup() {
  DCMotor.stop(); //Stops the motor
}
void loop() {
  DCMotor.rotate(50); // rotate motor speed in one direction at 50% speed
  delay(1000);
  DCMotor.stop();
  delay(1000);
  DCMotor.rotate(-50); // rotate motor speed in other direction at 50% speed
  delay(1000);
}