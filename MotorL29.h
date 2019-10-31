/*
  MotorL29.h - Library for using DC motor with l293d or l298n.
  Created by Luca Di Lorenzo, May 19, 2019.
  Released into the public domain.
*/

#ifndef MotorL29_h
#define MotorL29_h

#include "Arduino.h"

class MotorL29
{
  public:
    MotorL29(int en, int pin_fw, int pin_bk);
    void forward(int v);
    void back(int v);
    void stand();
  private:
    int _en;
    int _pin_fw;
    int _pin_bk;
    int _v;
};

#endif
