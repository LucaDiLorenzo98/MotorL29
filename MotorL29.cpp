/*
  Motor.cpp - Library for using DC motor with l293d or l298n.
  Created by Luca Di Lorenzo, May 19, 2019.
  Released into the public domain.
*/

#include "Arduino.h"
#include "MotorL29.h"

MotorL29::MotorL29(int en, int pin_fw, int pin_bk)
{
  pinMode(en, OUTPUT);
  pinMode(pin_fw, OUTPUT);
  pinMode(pin_bk, OUTPUT);
  _en = en;
  _pin_fw = pin_fw;
  _pin_bk = pin_bk;

}

void MotorL29::forward(int v)
{
  analogWrite(_en,v);
  digitalWrite(_pin_fw,HIGH);
  digitalWrite(_pin_bk,LOW);
}

void MotorL29::back(int v)
{
  analogWrite(_en,v);
  digitalWrite(_pin_fw,LOW);
  digitalWrite(_pin_bk,HIGH);
}

void MotorL29::stand()
{
  digitalWrite(_en,LOW);
  digitalWrite(_pin_fw,LOW);
  digitalWrite(_pin_bk,LOW);
}
