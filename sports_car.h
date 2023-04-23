#pragma once
#include "car.h"

class Sportscar :public Car {
public: 
	bool bTurbo;
	Sportscar() {}
	~Sportscar(){}
	void setTurbo(bool bTur) {
		bTurbo = bTur;
	}
	void speedUp() {
		if (bTurbo) {
			speed += 20;
		}
		else {
			Car::speedUp();
		}
	}
};