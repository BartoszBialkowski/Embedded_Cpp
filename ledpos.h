#ifndef LEDPOS_H
#define LEDPOS_H

#include "led.h"

class LedPos : public Led{
	public:
		void virtual On(unsigned char ucLedIndex);
};

#endif

