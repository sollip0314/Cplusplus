#include <iostream> // c언어와는 달리 .h를 생략해서 사용할 수 있게 함

int main()
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	// c언어에서 줄 바꿈을 할려면 printf("\n") 을 사용해야 했지만 여기서는 std::endl;을 함.
	// 이때 버퍼 안의 값도 fflush 되어 입력에 오류를 방지함.
	// fflush 되는 대신 성능이 c언어보다는 느림.
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}