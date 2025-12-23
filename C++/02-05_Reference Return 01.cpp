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
	int& b = RefReturn(a);

	a++, b++;

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;

	return 0;
}