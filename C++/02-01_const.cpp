/*
https://gemini.google.com/app/649d966c0fcf0251?is_sa=1&is_sa=1&android-min-version=301356232&ios-min-version=322.0&campaign_id=bkws&utm_source=sem&utm_source=google&utm_medium=paid-media&utm_medium=cpc&utm_campaign=bkws&utm_campaign=2024enUS_gemfeb&pt=9008&mt=8&ct=p-growth-sem-bkws&gclsrc=aw.ds&gad_source=1&gad_campaignid=23041970058&gbraid=0AAAAApk5Bhl0OKNoZXy03nmOD7o6gZx0H&gclid=CjwKCAiAw9vIBhBBEiwAraSATlx-S3KfSmzJppFBo734o5ZafkYvjivJO-qbQqDhM92rxyBuDk7j7BoCmboQAvD_BwE


const int num = 10;

int val = 20;

const int* ptr1 = &val;

val = 30;

int* const ptr2 = &val;

const int* const ptr3 = &val;

① const int* ptr1 = &val; (상수 지시 포인터)
의미: "내가 가리키는 값을 바꾸지 않겠다."
특징 : ptr1이 가리키는 주소는 바꿀 수 있지만(ptr1 = &other;), 그 주소에 있는 값을 직접 수정하는 것(*ptr1 = 30;)은 금지됩니다.

int val = 20;            // 1. 일반 변수 선언 (수정 가능)
const int* ptr1 = &val;  // 2. ptr1을 통해 val을 '읽기 전용'으로 보겠다고 선언
val = 30;                // 3. 가능! 변수 자신이 직접 값을 바꿈
// *ptr1 = 40;           // 4. 불가능! ptr1을 통해서 값을 바꾸려 하면 컴파일 에러 발생

② int* const ptr2 = &val; (상수 포인터)
의미 : "한번 정한 주소를 바꾸지 않겠다."
특징 : ptr2가 가리키는 값을 수정하는 것(*ptr2 = 30;)은 가능하지만, ptr2가 다른 주소를 가리키게 하는 것(ptr2 = &other;)은 금지됩니다.

③ const int* const ptr3 = &val; (상수 지시 상수 포인터)
의미 : "주소도, 값도 아무것도 바꾸지 마라."
특징 : *ptr3 = 30; 도 안 되고, ptr3 = &other; 도 안 됩니다.가장 강력한 제약입니다.

*/

/*
#include <iostream>
using namespace std;
int main()
{
	const int num = 20;
	const int& ref = num;		// 정상
	//int& ref = num;			// const(상수화)를 한 것을 변경할 수도 있기 때문에 int& ref = num는 컴파일 에러를 발생한다.
	//ref += 10;				// ref와 num은 동일 메모리를 공유하므로 const num을 먼저 선언했기 때문에 이 라인의 코드는 에러를 발생한다.

	cout << num << endl;
}
*/