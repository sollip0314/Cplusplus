#include "03-06_Car.h"

int main()
{
	Car myCar;
	myCar.InitMembers("sollip0314", 100);
	myCar.Accel();
	myCar.Accel();
	myCar.ShowCarState();
	myCar.Brake();
	myCar.ShowCarState();

	return 0;
}