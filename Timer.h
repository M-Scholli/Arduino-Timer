/*
 * Timer.h
 *
 *  Created on: 23.06.2015
 *      Author: Moritz Scholjegerdes
 */

#ifndef TIME_H_
#define TIME_H_

class Timer
{
public:
  Timer (void);
  unsigned long
  since_seconds (void);
  unsigned long
  t_since_start (void);
  void
  restart (void);
private:
  unsigned long t_start;
};

#endif /* TIMER_H_ */
