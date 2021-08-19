//#define ON_MAIN //#=조교

#ifdef ON_MAIN

#include <stdio.h>	//C header
#include <iostream>	//C++ header

using namespace std;

int x;

int main()
{
	//생성자와 소멸자
	if (1)
	{
		//클래스 정의(데이터 타입)
		class CTest
		{
		public:
			/*
			CTest()
			{
			}

			~CTest()
			{
			}
			*/

			
			CTest()
			{
				cout << "CTest::CTest()" << endl;
			}

			~CTest()
			{
				cout << "~CTest::CTest()" << endl;
			}
		};

		//1.객체생성
		cout << "--시작" << endl;
		int x;//4B 메모리 할당
		CTest a;//??B 메모리 할당 --> a의 생성자 불림
		cout << "--끝" << endl;

		/*
		//2.객체의 동적생성
		cout << "--동적 시작" << endl;
		CTest* p = new CTest;
		//...
		delete p;
		cout << "-- 동적 끝" << endl;
		*/
	}//x메모리 해제
	//a의 소멸자 불림 --> a메모리 해제

	//디폴트 생성자
	if (0)
	{
		class CTest
		{
		public:
			CTest(void) { m_nData = 10; }
			int m_nData;
			//int m_nData = 10; C++11컴파일러 이후 가능
		};
		CTest a;
		cout << a.m_nData << endl;
	}

	//생성자와 초기화 목록
	if (0)
	{
		class CTest
		{
			int m_nData; // 기본 접근 지시자는 private

		public:
			CTest(void) : m_nData(20)//초기화 목록
			{
				//m_nData = 20;
				cout << "CTest()" << endl;
			}
			CTest(int nParam): m_nData(nParam)//초기화 목록
			{
				//m_nData = nParam;
				cout << "CTest(int nParam)" << endl;
			}
			~CTest() 
			{
				cout << "~CTest()" << endl;
			}
		};
		cout << "main 시작" << endl;
		CTest a;		// int a;
		CTest b(100);	// int a = 100;
		cout << "main 끝" << endl;

	}
	//생성자 오버로딩
	if (0)
	{
		class CTest
		{
		public: 
			CTest(void)			: m_nData(-1)	{ cout << "0" << endl; };
			CTest(int a)		: m_nData(a)	{ cout << "1" << endl; };
			CTest(int a, int b)	: m_nData(a+b)  { cout << "2" << endl; };
			// argument, 매개변수, 인자:는 괄호 안에 있는것 
			// 괄호는 함수
			
			
			//getter 함수
			int GetData(void) const
			{ 
				return m_nData; 
			}
			//setter 함수
			int SetData(int a) 
			{ 
				m_nData = a; 
			}

		private:
			int m_nData;
			int ccc;
			int ddd;
		};
		
		int a = 10;

		CTest x(10);//1번 생성자
		CTest y(10, 20);//2번 생성자
		//CTest z;//error : 해당 생성자가 없기 때문

		cout << sizeof(int) << endl;//4B
		cout << sizeof(CTest) << endl;//20B

		cout << sizeof(a) << endl;//4B
		cout << sizeof(x) << endl;//20B

		cout << x.GetData() << endl;//10
		cout << y.GetData() << endl;//30


	}//소멸자 불림
	return 0;
}


#endif