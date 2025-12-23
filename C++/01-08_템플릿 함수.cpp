/*
* inline 함수는 파라미터로 static inline int SQUARE(int x){return x*x;} 이렇게 파라미터 타입이 고정되어 있으므로
* 함수를 오버라이딩해서 사용해야 하는 불편함이 발생한다.
* SQUARE(5);
* SQUARE(1.2);
* 
* 자료형에 의존적이지 않은 함수로서 템플릿이 등장한다.
*/

#include <iostream>

template <typename T>
inline T SQUARE(T x)
{
	return x * x;
}

int main()
{
	std::cout << SQUARE(1) << std::endl;
	std::cout << SQUARE(1.414) << std::endl;

	return 0;
}