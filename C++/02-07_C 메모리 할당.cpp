#define _CRT_SECURE_NO_WARNINGS // 이후에 나오는 보안경고 (CTR Secure warnings)를 표시하지 마라.
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;



char* MakeStrArr(int len)
{
	char* str = (char*)malloc(sizeof(char) * len);
	return str;
}

int main()
{
	char* str = MakeStrArr(20);
	strcpy(str, "I am so happy.");
	//strcpy_s(str, 20, "I am so happy.");
	cout << str << endl;
	free(str);
	
	return 0;
}

