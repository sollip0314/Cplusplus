#include <iostream>
#include <cstring>
using namespace std;

class Printer
{
private:
	char str[30];
public:
	void SetString(const char* s);
	void ShowString();
};

void Printer::SetString(const char* s)
{
	strcpy_s(str, sizeof(str), s);
}

void Printer::ShowString()
{
	cout << str << endl;
}

int main()
{
	Printer pnt;
	pnt.SetString("Hello World!");
	pnt.ShowString();

	pnt.SetString("Goodbye World!");
	pnt.ShowString();

	return 0;
}