/*
* 1. C언어 방식 (이중 포인터)
주소의 주소를 넘겨야 하므로, 코드가 기호들로 뒤덮여 읽기 매우 까다롭습니다.
문제점: **pp, *pp, &p 등 기호가 중첩되어 로직이 한눈에 들어오지 않습니다. 실수로 *를 하나 빼먹으면 바로 시스템 오류로 이어집니다.
*/
#include <stdio.h>

void ChangePointer(int** pp) { // 포인터의 주소를 받음 (이중 포인터)
    static int target = 2000;
    *pp = &target;             // 역참조를 통해 원본 포인터의 값을 수정
}

int main() {
    int num = 10;
    int* p = &num;

    // 호출 시 주소 연산자(&)를 붙여야 함
    ChangePointer(&p);

    printf("값: %d\n", *p); // 결과: 2000
    return 0;
}