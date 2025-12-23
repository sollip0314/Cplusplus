#include <iostream>
int Addr(int num1 = 1, int num2 = 2);
// 함수의 매개변수에 디폴트값 지정은 함수의 선언 부분에만 표현한다. 정의부분에는 하면 안된다.
// 함수의 선언부분에 디폴트값이 지정되지 않았다면 아래 코드의 7행과 8행은 컴파일 되지 않는다.
int main()
{
	std::cout << Addr() << std::endl;
	std::cout << Addr(5) << std::endl;
	std::cout << Addr(3, 5) << std::endl;

	return 0;
}

int Addr(int num1, int num2) {
	return num1 + num2;
}