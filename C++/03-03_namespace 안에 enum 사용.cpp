#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD	= 200,
		FUEL_STEP =	2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}


typedef struct Car
{
	char gamerID[CAR_CONST::ID_LEN];	// 소유자 ID
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
			fuelGauge -= CAR_CONST::ACC_STEP;

		if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
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
