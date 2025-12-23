#include <iostream>


/*
* 함수는 보통 선언과 정의를 분리하여 사용한다.
* 함수의 선언은 헤더파일에 저장하고, 함수의 정의는 소스파일에 저장하는 것이 보통이다.
*/
namespace BestComImpl
{
	void SimpleFunc();
}

namespace ProgComImpl
{
	void SimpleFunc();
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc()
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc()
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}