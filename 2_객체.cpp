//#define ON_MAIN //#=조교

#ifdef ON_MAIN

#include <stdio.h>	//C header
#include <iostream>	//C++ header

using namespace std;

typedef struct USERDATA
{
	int nAge;
	char szName[32];

	void PrintData()
	{
		printf("%d, %s\n", nAge, szName);
	}

} USERDATA;// int, char '이형'의 데이터를 USERDATA로 묶은것

void PrintData(USERDATA* p)
{
	printf("%d, %s\n", p->nAge, p->szName);
}
int main()
{
	//구조체(=사용자정의 데이터타입)
	if (0)
	{
		//typedef int NUMBER;
		//int a;
		//NUMBER b;

		USERDATA kim = {20, "김철수"};
		PrintData(&kim);
		//printf("%d, %s\n", kim.nAge, kim.szName);
	}

	//객체
	if (1)
	{
		class Human
		{
		public:
			Human() { ; }//생성자
			~Human() { ; }//소멸자

			int nAge;
			char szName[32];// 이걸 쓰지 않으면 private로 되어 있기 때문에, 50~줄이 접근 할수가 없다.

			void PrintData()
			{
				printf("%d, %s\n", nAge, szName);
			}
		};

		Human lee = { 33, "이길동"};
		lee.PrintData();
	}
	return 0;
}

#endif