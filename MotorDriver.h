#ifndef MotorDriver_h
#define MotorDriver_h

#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#include "WConstants.h"
#endif
class Motor
{
  public:
    Motor(int pin_pwm, int pin_A, int pin_B);
    Motor(HardwareSerial *serial);
    void rotate(int speed);
    void stop();
  private:
    int limiter(int val, int upper, int lower);
    int _pin_pwm, _pin_A, _pin_B, _speed;
    HardwareSerial * _HardSerial;
};

#endif
