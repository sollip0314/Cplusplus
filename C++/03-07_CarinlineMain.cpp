#include "03-07_Carinline.h"
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