#include <iostream>

namespace BestComp
{
	void SimpleFunc();
}

namespace BestComp
{
	void BestFunc();
}

namespace PrettyComp
{
	void SimpleFunc();
}

int main()
{
	BestComp::SimpleFunc();
	return 0;
}

void BestComp::SimpleFunc()
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	BestFunc();					// 동일 이름공간
	PrettyComp::SimpleFunc();	// 다른 이름 공간
}

void BestComp::BestFunc()
{
	std::cout << "So Pretty!!" << std::endl;
}

void PrettyComp::SimpleFunc()
{
	std::cout << "PrettyComp가 정의한 함수" << std::endl;
}

