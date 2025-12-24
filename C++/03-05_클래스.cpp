#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}


// (암기) private의 변수들은 public의 함수들을 통해서만 접근이 가능하다.
// (암기) 키워드 class를 이용해서 정의한 클래스에 선언된 변수와 함수에 별도의 접근제어 지시자를 선언하지 않으면, 모든 변수와 함수는 private으로 선언된다.
class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void Initmembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

// (암기) 함수의 정의를 클래스 밖으로 빼도, 이는 클래스의 일부이기 때문에, 함수 내에서는 private으로 선언된 변수에 접근이 가능하다.
void Car::Initmembers(const char* ID, int fuel)
{
	strcpy_s(gamerID, sizeof(gamerID), ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "소유자 : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << "%" << endl;
	cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car ModelY;
	ModelY.Initmembers("sollip0314", 100);

	ModelY.Accel();
	ModelY.Accel();
	ModelY.Accel();
	ModelY.ShowCarState();
	
	ModelY.Break();
	ModelY.ShowCarState();

	return 0;
}

