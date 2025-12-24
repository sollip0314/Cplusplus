#include <iostream>
#include <cstring>
#include "03-06_Car.h"
using namespace std;

// 클래서의 선언은 클래스명.h
// 클래스의 구현은 클래스명.cpp
// 실행은 main.cpp
void Car::InitMembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "소유자 ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재 속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPEED)
	{
		curSpeed = CAR_CONST::MAX_SPEED;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Brake()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}