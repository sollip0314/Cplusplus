/*
* C++을 공부하면서 가장 어려움을 겪는 부분은 문법의 이해가 아닌 구현이다.
* C++은 C언어와 달라서 활용하는데 있어 더 많은 시간과 노력이 요구된다.
* 무엇보다도 경험이 없다면, 어떻게 시작을 해야 할지 막막하기만 하다.
* 따라서 많은 연습이 필요하다.
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu();			// 메뉴출력
void MakeAccount();			// 계좌개설을 위한 함수
void DepositMoney();		// 입	 금
void WithdrawMoney();		// 출    금
void ShowAllAccInfo();		// 잔액조회

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct {
	int accID;				// 계좌번호
	int balance;			// 잔    액
	char cusName[NAME_LEN]; // 고객이름
} Account;

Account accArr[100];		// Account 저장을 위한 배열
int totAccNum = 0;			// 저장된 총 계좌 수


//const a = "hello";
// C언어에서 "hello"와 같은 문자열 리터럴은 메모리의 *코드 영역(Read - Only Data) * *에 저장됩니다.
// 이곳은 이름 그대로 "읽기만 가능"하고 "수정은 불가능"한 성역과 같습니다.

// 데이터를 수정할 의도가 없다면, 포인터 역시 '읽기 전용'임을 명확히 선언해야 합니다.현대 C++나 최신 C 표준에서는 이 방식이 정석입니다.
const char* b = "hello";

char c[] = "hello";



int main()
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "선택 : ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
			case MAKE:
				MakeAccount();
				break;
			case DEPOSIT:
				DepositMoney();
				break;
			case WITHDRAW:
				WithdrawMoney();
				break;
			case INQUIRE:
				break;
			case EXIT:
				return 0;
			default:
				cout << "Illegal selection.." << endl;
		}
		
	}
}

void ShowMenu()
{
	cout << "---- Menu ----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입     금" << endl;
	cout << "3. 출     금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : "; cin >> id;				// 고객이 원하는 계좌 ID를 직접 입력
	cout << "이름 : "; cin >> name;
	cout << "입금액 : "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney()
{
	int money;
	int id;
	cout << "[입   금]" << endl;
	cout << "계좌ID : "; cin >> id;
	cout << "입금액 : "; cin >> money;

	for (int i = 0; i < totAccNum; i++)					// 생성된 계좌 index를 for문으로 0 ~ 끝까지 돌려보면서
	{
		if (accArr[i].accID == id)						// 계좌[index ] == 고객이 입력한 계좌ID 인 경우
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void WithdrawMoney()
{
	int money;
	int id;
	cout << "[출    금]" << endl;
	cout << "계좌ID : ";	cin >> id;
	cout << "출금액 : ";	cin >> money;
	
	for (int i = 0; i < totAccNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "잔액부족" << endl << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void ShowAllAccInfo()
{
	for (int i = 0; i < totAccNum; i++)
	{
		cout << "계좌ID : " << accArr[i].accID << endl;
		cout << "이  름 : " << accArr[i].cusName << endl;
		cout << "잔  액 : " << accArr[i].balance << endl << endl;
	}
}




