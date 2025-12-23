#include <iostream>
using namespace std;

int& RefReturn(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int a = 1;
	int b = RefReturn(a); // 함수에서 반환형은 Reference(&) 형태이지만 실제 반환은 변수를 생성해서 값(Value)으로 받았다.

	a += 1;
	b += 100;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}