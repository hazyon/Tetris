#ifndef _INTAKELIFT_H_
#define _INTAKELIFT_H_

void lift(int vel);
void liftOp();

bool liftTooHigh();

void liftAsync(int dir);

void liftUpAsync();

void liftDownAsync();

void liftTask(void* parameter);

double liftHeight();
#endif
