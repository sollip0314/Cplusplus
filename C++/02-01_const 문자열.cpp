#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char* str1 = "ABC 123";
    const char* str2 = "DEF 456";
    char str3[50];

    cout << strlen(str1) << endl;
    cout << strlen(str2) << endl;

    // strcpy 대신 strcpy_s 사용 (목적지, 목적지 크기, 복사할 원본)
    strcpy_s(str3, sizeof(str3), str1);

    // strcat 대신 strcat_s 사용 (목적지, 목적지 크기, 이어붙일 원본)
    strcat_s(str3, sizeof(str3), str2);

    cout << str3 << endl;

    if (strcmp(str1, str2) == 0)
        cout << "문자열이 같다." << endl;
    else
        cout << "문자열이 같지 않다." << endl;

    return 0;
}