#include <iostream>

#define SQUARE(x) ((x) * (x))

/*
* 매크로 함수
* - 장점 : 일반적인 함수에 비해서 실행속도가 빠르다.
* - 단점 : 정의하기가 어렵다. 복잡한 함수를 매크로의 형태로 정의하는데 한계가 있다.
* 
*/


int main()
{
	std::cout << SQUARE(5) << std::endl;

	return 0;
}
