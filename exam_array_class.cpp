#include "sports_car.h"

int main(void) {
	Car yourCar(100, 4, "yourCar");
	yourCar.display();
	yourCar.whereAmI();
	yourCar.gear = 5;
	yourCar.display();
	yourCar.changeGear(3);
	yourCar.display();

	Sportscar myCar;
	myCar.setTurbo(true);
	myCar.speedUp();
	myCar.display();
	myCar.whereAmI();
}