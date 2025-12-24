#ifndef __CAR_H__	// 헤더 가드 If Not Defined : 만약 __CAR_H__라는 이름의 매크로가 정의되어 있지 않다면
#define __CAR_H__

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

#endif
