#include <iostream>
#include <cstdlib>	// C Standard Library입니다. 난수를 생성하는 rand() 함수와 난수 생성기의 시드(seed)를 설정하는 srand() 함수가 이 헤더에 포함
#include <ctime>	// 시간 관련 라이브러리입니다. time(NULL) 함수를 사용해 현재 시스템 시간을 가져오기 위해 필요 
using namespace std;

int main()
{
	// time(NULL)은 1970년 1월 1일부터 현재까지 경과한 시간을 초 단위로 반환합니다.
	// srand(time(NULL)): 화살을 꺼내기 전, 현재 시간의 흐름을 이용하여 화살통을 무작위로 흔드는 행위입니다.
	// rand() : 주머니에서 화살을 하나 꺼내는 행위입니다.

	srand(time(NULL)); 
	for (int i = 0; i < 5; i++)
		printf("Random number #%d : %d\n", i, rand() % 100);

	return 0;
}