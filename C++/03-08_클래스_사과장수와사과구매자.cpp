#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult()
	{
		cout << "사과 판매자" << endl;
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;		// private : 클래스 안에는 기본적으로 private로 선언된다.
	int numOfApples;	// private : 클래스 안에는 기본적으로 private로 선언된다.
public:
	void InitMembers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}
	// ★ (암기) 객체지향 처리의 핵심 !!
	void BuyApples(FruitSeller& seller, int money)
	{		
		// 하나의 독립된 클래스를 정의하는 것은 쉽다. 그러나 독립된 클래스들이 서로 상호작용하도록 만드는 것이 진정한 객체지향 프로그래밍의 핵심이다.
		// 하나의 객체가 다른 하나의 객체에게 메시지를 전달하는 방법은(어떠한 행위의 요구를 위한 메시지 전달) 함수호출을 기반으로 한다.
		numOfApples += seller.SaleApples(money); 
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "사과 구매자" << endl;
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	
	cout << "구매 전 상태" << endl;
	seller.ShowSalesResult();
	buyer.ShowBuyResult();
	
	cout << "사과 구매" << endl;
	buyer.BuyApples(seller, 2000);
	cout << endl;


	cout << "구매 후 상태" << endl;
	seller.ShowSalesResult();
	buyer.ShowBuyResult();
	return 0;
}