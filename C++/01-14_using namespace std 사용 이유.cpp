#include <iostream>
/*
* using std::cin;
* using std::cout;
* using std::endl;
* 
* 위 처럼 일일이 using 선언을 하는 것이 귀찮다면, 그리고 꼭 그렇게 해야만 하는 상황이 아니라면
* 아래와 같이 선언을 통해서 '이름공간 std에 선언된 모든 것에 대해 이름공간 지정의 생략'을 명령할 수 있다.
*/

using namespace std;

int main()
{
	int num = 20;
	cout << "Hello World!" << endl;
	cout << "Hello " << "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}