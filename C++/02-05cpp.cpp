// p.74 볼차례
// 윤성우 ++
// 참조자(Reference)와 함수

#include <iostream>
using namespace std;

int main()
{
	int b = 20;

	int* c = &b;

	*c = 30; // 정상
	cout << *c;
}
