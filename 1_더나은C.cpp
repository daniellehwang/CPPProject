#define ON_MAIN //#=조교

#ifdef ON_MAIN

#include <stdio.h>	//C header
#include <iostream>	//C++ header

using namespace std;

int g_nData = 10; //g_n: global number
void Gugudan(void)
{
	cout << "Global::Gugudan()" << endl;
}

namespace TEST 
{
	int g_nData = 100;
	void Gugudan(void)
	{
		cout << "TEST::Gugudan()" << endl;
	}
}

void Swap(int a, int b)
{
	int temp;
	
	temp = a;
	a = b;
	b = temp;

	cout << "SWAP: " << "a=" << a << "b=" << b << endl;
}

void Swap2(int* a, int* b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	cout << "SWAP2: " << "a=" << *a << "b=" << *b << endl;
}

void Swap3(int& a, int& b)//별명
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "SWAP3: " << "a=" << a << "b=" << b << endl;
}

int main() 
{
	//cout 객체
	if (0)
	{
		printf("Hello World Dokyung\n"); //printf 함수
		std::cout << "Hello World Dokyung\n"; //<<연산자

		//a =10, b = 20 출력
		int a = 10;
		int b = 20;

		printf("a%d, b=%d\n", a, b);
		std::cout << "a=" << a << ", b=" << b << "\n";

		cout << a << endl;//"\n"
		std::cout << &a << std::endl;//"\n"
		std::cout << sizeof(a) << std::endl;//"\n"
		std::cout << printf << std::endl;//"\n"
		std::cout << main << std::endl;//"\n"



		cout << "Bye" << "\n";
	}
	//cin 객체
	if (0) 
	{
		int nAge;
		cout << "나이를 입력하세요 : " << endl;
		cin >> nAge;
		//scanf("%d", &nAge);

		std::string strName;
		cout << "이름을 입력하세요 : " << endl;
		cin >> nAge;

		char strJob[30];
		cout << "직업을 입력하세요 : " << endl;
		cin >> strJob;

		cout << "이름 : " << strName << endl;
		cout << "나이 : " << nAge << endl;
		cout << "직업 : " << strJob << endl;
	}
	//auto
	if (0)
	{
		int a = 10;
		int b(a);
		auto c(a);//a와 같은 type으로 받아라

		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}

	//네임스페이스
	if (0)
	{
		::Gugudan();
		TEST::Gugudan();

		using namespace TEST;
		//Gugudan(); //에러
		::Gugudan();
	}
	//Pointer(c) vs Reference(c++)
	if (0)
	{
		//Pointer(c) -----------------------
		int a = 10;
		int* p1 = &a;

		cout << sizeof(a) << endl;
		cout << sizeof(p1) << endl;

		char b = 'a';
		char* p2 = &b;

		cout << sizeof(b) << endl; //1byte
		cout << sizeof(p2) << endl;//4byte 모든 주소는 4byte이다

		//Reference(CPP)----------
		int nData = 10;
		int& ref = nData; //reference(별명)
		//int& ref2; //실체가 없는데 별명을 잡아줄 수 없다.

		nData++;//11
		cout << nData << endl;
		cout << ref << endl;

		ref++;//?
		cout << nData << endl;
		cout << ref << endl;
	}
	//함수 호출 방식
	if (0)
	{
		int a = 10;
		int b = 20;
		cout << "a=" << a << "b=" << b << endl;

		//c방식
		//1. call by value(값의 복사)		-> 사용이쉽다. 영향을 받지 않음.
		a = 10; b = 20;
		Swap(a, b);
		cout << "a=" << a << "b=" << b << endl;

		//2. call by Address(주소를 전달)	-> 사용이 어렵다. 영향을 받음.
		a = 10; b = 20;
		Swap2(&a, &b);
		cout << "a=" << a << "b=" << b << endl;

		//c++방식
		//3. call by Reference -> 사용이 쉽다. 영향을 받음.
		a = 10; b = 20;
		Swap3(a, b);
		cout << "a=" << a << "b=" << b << endl;
	}

	//함수 오버로딩(다중정의; 여러개의 기능이 동시에 가능하도록)---by Name Mangling
	if (1)
	{

	}
	return 0; //0=정상종료
}

#endif