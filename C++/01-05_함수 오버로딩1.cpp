#include <iostream>

void MyFunc()
{
	std::cout << "MyFunc() called" << std::endl;
}

void MyFunc(char c) {
	std::cout << "Myfunc(char c) called" << std::endl;
}

void MyFunc(int a, int b) {
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

/*
* C언어   : 함수 오버로딩 지원 X
* C++언어 : 함수 오버로딩 지원 O
*/

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);

	return 0;
}