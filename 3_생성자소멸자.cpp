//#define ON_MAIN //#=����

#ifdef ON_MAIN

#include <stdio.h>	//C header
#include <iostream>	//C++ header

using namespace std;

int x;

int main()
{
	//�����ڿ� �Ҹ���
	if (1)
	{
		//Ŭ���� ����(������ Ÿ��)
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

		//1.��ü����
		cout << "--����" << endl;
		int x;//4B �޸� �Ҵ�
		CTest a;//??B �޸� �Ҵ� --> a�� ������ �Ҹ�
		cout << "--��" << endl;

		/*
		//2.��ü�� ��������
		cout << "--���� ����" << endl;
		CTest* p = new CTest;
		//...
		delete p;
		cout << "-- ���� ��" << endl;
		*/
	}//x�޸� ����
	//a�� �Ҹ��� �Ҹ� --> a�޸� ����

	//����Ʈ ������
	if (0)
	{
		class CTest
		{
		public:
			CTest(void) { m_nData = 10; }
			int m_nData;
			//int m_nData = 10; C++11�����Ϸ� ���� ����
		};
		CTest a;
		cout << a.m_nData << endl;
	}

	//�����ڿ� �ʱ�ȭ ���
	if (0)
	{
		class CTest
		{
			int m_nData; // �⺻ ���� �����ڴ� private

		public:
			CTest(void) : m_nData(20)//�ʱ�ȭ ���
			{
				//m_nData = 20;
				cout << "CTest()" << endl;
			}
			CTest(int nParam): m_nData(nParam)//�ʱ�ȭ ���
			{
				//m_nData = nParam;
				cout << "CTest(int nParam)" << endl;
			}
			~CTest() 
			{
				cout << "~CTest()" << endl;
			}
		};
		cout << "main ����" << endl;
		CTest a;		// int a;
		CTest b(100);	// int a = 100;
		cout << "main ��" << endl;

	}
	//������ �����ε�
	if (0)
	{
		class CTest
		{
		public: 
			CTest(void)			: m_nData(-1)	{ cout << "0" << endl; };
			CTest(int a)		: m_nData(a)	{ cout << "1" << endl; };
			CTest(int a, int b)	: m_nData(a+b)  { cout << "2" << endl; };
			// argument, �Ű�����, ����:�� ��ȣ �ȿ� �ִ°� 
			// ��ȣ�� �Լ�
			
			
			//getter �Լ�
			int GetData(void) const
			{ 
				return m_nData; 
			}
			//setter �Լ�
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

		CTest x(10);//1�� ������
		CTest y(10, 20);//2�� ������
		//CTest z;//error : �ش� �����ڰ� ���� ����

		cout << sizeof(int) << endl;//4B
		cout << sizeof(CTest) << endl;//20B

		cout << sizeof(a) << endl;//4B
		cout << sizeof(x) << endl;//20B

		cout << x.GetData() << endl;//10
		cout << y.GetData() << endl;//30


	}//�Ҹ��� �Ҹ�
	return 0;
}


#endif