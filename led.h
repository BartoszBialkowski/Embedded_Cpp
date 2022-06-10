#ifndef LED_H
#define LED_H

class Led {		
	public:
		Led(void);
		void virtual On(unsigned char ucLedIndex) = 0;
};

#endif

