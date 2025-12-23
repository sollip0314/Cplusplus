//#define _CRT_SECURE_NO_WARNINGS // 이후에 나오는 보안경고 (CTR Secure warnings)를 표시하지 마라.
#include <iostream>
#include <string> // C++ 표준 문자열 라이브러리
#include <cstring> // strcpy 사용 시 필요

using namespace std;

// 1. C++ 방식을 유지하며 예외 처리를 추가한 경우
char* MakeStrArr(int len) {
    char* str = new char[len];
    return str;
}

int main() {
    int len = 20;
    char* str = MakeStrArr(len);

    if (str != nullptr) {
        strncpy_s(str, len, "I am so happy~!", _TRUNCATE); // _TRUNCATE를 사용하면 버퍼 크기에 맞춰 안전하게 자르고 마지막에 '\0'을 자동으로 붙여준다.
        cout << "출력 결과: " << str << endl;
        delete[] str; // 할당된 배열 형태의 메모리 해제
    }
    else {
        cerr << "메모리 할당에 실패하였습니다." << endl;
    }

    return 0;
}