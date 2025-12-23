#include <iostream>

int main()
{
	char name[6];

	std::cout << "이름을 입력하세요 :  ";
	std::cin >> name;

	std::cout << name << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << name[i] << std::endl;
	}

	return 0;
}
