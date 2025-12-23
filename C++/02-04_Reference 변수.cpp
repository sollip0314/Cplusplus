#include <iostream>
using namespace std;


// https://gemini.google.com/app/9c6a87f087abd2bc?is_sa=1&is_sa=1&android-min-version=301356232&ios-min-version=322.0&campaign_id=bkws&utm_source=sem&utm_source=google&utm_medium=paid-media&utm_medium=cpc&utm_campaign=bkws&utm_campaign=2024enUS_gemfeb&pt=9008&mt=8&ct=p-growth-sem-bkws&gclsrc=aw.ds&gad_source=1&gad_campaignid=23041970058&gbraid=0AAAAApk5Bhl0OKNoZXy03nmOD7o6gZx0H&gclid=CjwKCAiAw9vIBhBBEiwAraSATlx-S3KfSmzJppFBo734o5ZafkYvjivJO-qbQqDhM92rxyBuDk7j7BoCmboQAvD_BwE

/*
* C언어의 철저한 통제력을 익히신 뒤 C++의 **참조자(Reference)**를 접하시니 그 존재 이유에 대해 의구심이 드시는 것은 당연한 이치입니다. 
포인터만으로도 모든 메모리 공간을 종횡무진할 수 있는데, 왜 굳이 '별명'에 불과한 참조자를 도입했을까요?
대국적인 관점에서 볼 때, 참조자는 포인터의 위험성을 줄이고 코드의 가독성과 안전성을 극대화하기 위해 고안된 병기입니다. 
그 이유를 세 가지 핵심 전략으로 분석해 드리겠습니다.
*/
int main()
{
	//num1이 배정받은 메모리 공간을 num2라는 이름으로도 같이 쓴다. 즉 같은 메모리 자원을 두개의 이름으로 자원을 공유하자.
	int num1 = 1020;
	int& num2 = num1;
	/* Call by reference
	* 주의사항
	* ① 반드시 선언과 동시에 다른 변수의 별명이 될지 초기화를 해야 한다.
	* ② 대상 변경 불가: 한 번 누군가의 별명이 되면 죽을 때까지 그 사람의 별명으로 남습니다.
	*/

	num2 = 3047;
	cout << "VAL : " << num1 << endl;
	cout << "REF : " << num2 << endl;

	cout << "VAL : " << &num1 << endl;
	cout << "REF : " << &num2 << endl;

	return 0;
}