#include "stepper.h"

enum Step{LEFT,RIGHT};

void Stepper::SetLed(Led *LedFunction){

		pMyLed = LedFunction;
}


void Stepper::Step(enum Step eStep){
	if(eStep == LEFT){
		LedCtr--;
		LedCtr = LedCtr % 4;
		pMyLed->On(LedCtr);
	}
		
	else if(eStep == RIGHT){
		LedCtr++;
		LedCtr = LedCtr % 4;
		pMyLed->On(LedCtr);
	}else{
	}
}

void Stepper::StepLeft(void){
	Step(LEFT);
}


void Stepper::StepRight(void){
	Step(RIGHT);
}

