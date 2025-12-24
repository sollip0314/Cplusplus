#include <cstring>
#include "03-07_Carinline.h"
using namespace std;

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelGauge = fuel;
	curSpeed = 0;
};

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	fuelGauge -= CAR_CONST::FUEL_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPEED)
	{
		curSpeed = CAR_CONST::MAX_SPEED;
	}
	else
	{
		curSpeed += CAR_CONST::ACC_STEP;
	}
};

