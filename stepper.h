#ifndef STEPPER_H
#define STEPPER_H

#include "led.h"

class Stepper{	
	private:
		Led *pMyLed;
		unsigned char LedCtr;

		void Step(enum Step eStep);
	
	public:
		void SetLed(Led *LedFunction);
		void StepLeft(void);
		void StepRight(void);
};

#endif

