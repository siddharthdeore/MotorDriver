#include "Arduino.h"
#include "MotorDriver.h"
Motor::Motor(int pin_pwm, int pin_A, int pin_B)
{
  pinMode(pin_pwm, OUTPUT);
  pinMode(pin_A, OUTPUT);
  pinMode(pin_B, OUTPUT);
  _pin_pwm = pin_pwm;
  _pin_A = pin_A;
  _pin_B = pin_B;
}

void Motor::rotate(int speed)
{
  if (speed > 0)
  {
    digitalWrite(_pin_A, HIGH);
    digitalWrite(_pin_B, LOW);
    analogWrite(_pin_pwm, map(speed, 1, 100, 1, 255));
  }
  else
  {
    digitalWrite(_pin_B, HIGH);
    digitalWrite(_pin_A, LOW);
    analogWrite(_pin_pwm, map(-speed, 0, 100, 0, 255));
  }
}
void Motor::stop()
{
  digitalWrite(_pin_A, HIGH);
  digitalWrite(_pin_B, HIGH);
}
int Motor::limiter(int val,int upper,int  lower)
{
	limiter=
	return val;
}
