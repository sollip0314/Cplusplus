#include <iostream>
using namespace std;

#ifndef __CARINLINE_H__
#define __CARINLINE_H__

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPEED = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Brake();
};


// inline 함수는 헤더파일에 구현부(정의)를 작성해야 한다.   (cpp 파일에 inline 함수 구현 시 링크 에러 발생)
inline void Car::ShowCarState()
{
	cout << "소유자 : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
};

inline void Car::Brake()
{
	if (curSpeed - CAR_CONST::BRK_STEP <= 0)
	{
		curSpeed = 0;
	}
	else
	{
		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

#endif