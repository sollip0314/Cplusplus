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

	void ShowCarState()
	{
		cout << "소유자ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << "%" << endl;
		cout << "현재속도 : " << curSpeed << "km/s" << endl << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= ACC_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}

} Car;

int main()
{
	Car myCar = { "MODEL Y", 100, 40 };
	myCar.Accel();
	myCar.ShowCarState();
	myCar.Break();
	myCar.ShowCarState();

	Car yourCar = { "MODEL X", 100, 50 };
	yourCar.Accel();
	yourCar.ShowCarState();
	yourCar.Break();
	yourCar.ShowCarState();

	return 0;
}
