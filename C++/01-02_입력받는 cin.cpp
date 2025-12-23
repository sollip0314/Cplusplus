#include <iostream>

int main()
{
	int val1;
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1;
	// C++에서는 데이터의 입력도 데이터의 출려고가 마찬가지로 별도의 포맷 지정이 필요 없어졌다.

	/*
	* C언어
	* char str[100]
	* scanf("%s", str)
	* 
	* C++언어
	* char str[100];
	* std::cin>>str;
	* 
	*/
	int val2;
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl;

	return 0;
}