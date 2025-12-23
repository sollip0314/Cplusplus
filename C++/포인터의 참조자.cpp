/*
* 2. C++ 방식 (포인터의 참조자)
참조자를 사용하면 함수 내부에서 포인터를 마치 일반 변수처럼 다룰 수 있습니다.
* 장점: 함수 내부의 refP = &target; 부분을 보십시오. 복잡한 역참조(*) 없이 아주 직관적입니다. 호출할 때도 &를 붙일 필요가 없어 코드가 매우 정갈합니다.
*/
#include <iostream>
using namespace std;

void ChangePointer(int*& refP) { // 포인터의 별명(참조자)을 받음
    static int target = 2000;
    refP = &target;              // 그냥 대입해도 원본 포인터가 바뀜!
}

int main() {
    int num = 10;
    int* p = &num;

    // 호출 시 평범하게 변수명만 적으면 됨
    ChangePointer(p);

    cout << "값: " << *p << endl; // 결과: 2000
    return 0;