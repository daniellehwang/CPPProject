#define ON_MAIN //#=����

#ifdef ON_MAIN

#include <stdio.h>	//C header
#include <iostream>	//C++ header

using namespace std;

class CTest
{
public:
	int m_nData;
	int m_nData2;

	CTest() : m_nData(10), m_nData2(20)
	{
		cout << "CTest()�� ������" << endl;
		//m_nData = 10;
		//m_nData2 = 20;

	}
	~CTest()
	{
		cout << "~CTest()�� �Ҹ���" << endl;
	}
	int m_nData;
	void PrintData(void)
	{
		cout << m_nData << endl;
		cout << m_nData2 << endl;
	}
};
int main()
{
	//��������� �ʱ�ȭ
	if (1)
	{
		cout << "���ν���" << endl;
		int a; //4B �޸� �Ҵ�
		CTest b;//20B �޸� �Ҵ� -> b�� ������ ȣ���
		
		b.PrintData();//10���

		cout << "���γ�" << endl;

	}//-> 1)a�� �޸� ����
	//-> 2)b�� �Ҹ��� ȣ��
	//-> 3)b�� �޸� ����

	//Static ���
	if (1)
	{
		class CTest
		{
		public:
		
			CTest(int a)
			{
				m_nData = a;
				m_nCount++;//�����ڰ� �Ҹ� Ƚ��
			}

			int m_nData; //��ü���� ���� ������

			//���� ��� ���� ����(���Ǵ� �ƴϴ�)
			static int m_nCount;//���ݱ��� CTest��ü�� ������ Ƚ��
			
			int GetCount()
			{
				return m_nCount;
			}
		};

		//���� ��� ���� ����
		int CTest::m_nCount = 0;

		CTest a(5);
		CTest b(10);
		CTest c(100);

		cout << a.m_nData() << endl;
		cout << b.m_nData() << endl;
		cout << c.m_nData() << endl;

		cout << a.GetCount() << endl;//3
	}
	return 0;
}

#endif
