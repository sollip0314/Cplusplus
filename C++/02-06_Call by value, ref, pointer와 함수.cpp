#include <iostream>
using namespace std;

void SwapByValue(int val1, int val2);
void SwapByRef(int& val1, int& val2);
void SwapByPointer(int* val1, int* val2);


int main()
{
	int a = 10, b = 20;
	SwapByValue(a, b);
	cout << "SwapByValue를 호출합니다." << endl;
	cout << "a : " << a << ", b : " << b << "\n\n";

	int c = 10, d = 20;
	SwapByRef(c, d);
	cout << "SwapByRef를 호출합니다." << endl;
	cout << "c : " << c << ", d : " << d << "\n\n";

	int e = 10, f = 20;
	SwapByPointer(&e, &f);
	cout << "SwapByRef를 호출합니다." << endl;
	cout << "e : " << e << ", f : " << f << "\n\n";

	return 0;

}

void SwapByValue(int val1, int val2)
{
	int temp;
	temp = val1;
	val1 = val2;
	val2 = temp;
}

void SwapByRef(int& val1, int& val2)
{
	int temp;
	temp = val1;
	val1 = val2;
	val2 = temp;
}

void SwapByPointer(int* val1, int* val2)
{
	int temp;
	temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}
