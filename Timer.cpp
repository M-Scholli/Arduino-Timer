/*
 * Timer.cpp
 *
 *  Created on: 23.06.2015
 *      Author: Moritz Scholjegerdes
 */

#include "Timer.h"
#include "Arduino.h"

Timer::Timer (void)
{
  t_start = millis ();
}

unsigned long
Timer::since_seconds (void)
{
  unsigned long seconds;
  seconds = t_since_start () / 1000;
  return seconds;
}

unsigned long
Timer::t_since_start (void)
{
  unsigned long t;
  t = millis ();
  if (t < t_start) // detect overflow of millis ()
    {
      unsigned int t2;
      t2 = 4294967295 - t_start; // time from t_start to overflow of millis ()
      t = t + t2;
    }
  else
    {
      t = t - t_start;
    }
  return t;
}

void
Timer::restart (void)
{
  t_start = millis ();
}

