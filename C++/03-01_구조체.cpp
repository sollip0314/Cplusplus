#include <iostream>
using namespace std;

#define ID_LEN	20
#define MAX_SPD	200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

typedef struct Car
{
	char gamerID[ID_LEN];	// 소유자 ID
	int fuelGauge;			// 연료량
	int curSpeed;			// 현재속도
} Car;

void ShowCarState(const Car& car)
{
	cout << "소유자ID : " << car.gamerID << endl;
	cout << "연료량 : " << car.fuelGauge << "%" << endl;
	cout << "현재속도 : " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car& car) {
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= ACC_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed += ACC_STEP;
}

void Break(Car& car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed -= BRK_STEP;
}

int main()
{
	Car myTesla = { "MODEL Y", 100, 40 };
	Accel(myTesla);
	ShowCarState(myTesla);
	Break(myTesla);
	ShowCarState(myTesla);

	Car yourTesla = { "MODEL X", 100, 50 };
	Accel(yourTesla);
	ShowCarState(yourTesla);
	Break(yourTesla);
	ShowCarState(yourTesla);

	return 0;
}
