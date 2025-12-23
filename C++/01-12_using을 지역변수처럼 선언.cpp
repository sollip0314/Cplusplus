#include <iostream>

namespace Hybrid
{
	void HybFunc()
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main()
{
	using Hybrid::HybFunc; // Hybrid 네임스페이스에 정의된 HybFunc를 이 지역(main) 내로 끌어온다.
	// 이제부터는 Hybrid:: 라는 접두사 없이 HybFunc() 이름만으로 호출이 가능하다.
	HybFunc();
	return 0;
}