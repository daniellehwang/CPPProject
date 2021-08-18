#define ON_MAIN //#=����

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

void Swap3(int& a, int& b)//����
{
	int temp;

	temp = a;
	a = b;
	b = temp;

	cout << "SWAP3: " << "a=" << a << "b=" << b << endl;
}

int main() 
{
	//cout ��ü
	if (0)
	{
		printf("Hello World Dokyung\n"); //printf �Լ�
		std::cout << "Hello World Dokyung\n"; //<<������

		//a =10, b = 20 ���
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
	//cin ��ü
	if (0) 
	{
		int nAge;
		cout << "���̸� �Է��ϼ��� : " << endl;
		cin >> nAge;
		//scanf("%d", &nAge);

		std::string strName;
		cout << "�̸��� �Է��ϼ��� : " << endl;
		cin >> nAge;

		char strJob[30];
		cout << "������ �Է��ϼ��� : " << endl;
		cin >> strJob;

		cout << "�̸� : " << strName << endl;
		cout << "���� : " << nAge << endl;
		cout << "���� : " << strJob << endl;
	}
	//auto
	if (0)
	{
		int a = 10;
		int b(a);
		auto c(a);//a�� ���� type���� �޾ƶ�

		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}

	//���ӽ����̽�
	if (0)
	{
		::Gugudan();
		TEST::Gugudan();

		using namespace TEST;
		//Gugudan(); //����
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
		cout << sizeof(p2) << endl;//4byte ��� �ּҴ� 4byte�̴�

		//Reference(CPP)----------
		int nData = 10;
		int& ref = nData; //reference(����)
		//int& ref2; //��ü�� ���µ� ������ ����� �� ����.

		nData++;//11
		cout << nData << endl;
		cout << ref << endl;

		ref++;//?
		cout << nData << endl;
		cout << ref << endl;
	}
	//�Լ� ȣ�� ���
	if (0)
	{
		int a = 10;
		int b = 20;
		cout << "a=" << a << "b=" << b << endl;

		//c���
		//1. call by value(���� ����)		-> ����̽���. ������ ���� ����.
		a = 10; b = 20;
		Swap(a, b);
		cout << "a=" << a << "b=" << b << endl;

		//2. call by Address(�ּҸ� ����)	-> ����� ��ƴ�. ������ ����.
		a = 10; b = 20;
		Swap2(&a, &b);
		cout << "a=" << a << "b=" << b << endl;

		//c++���
		//3. call by Reference -> ����� ����. ������ ����.
		a = 10; b = 20;
		Swap3(a, b);
		cout << "a=" << a << "b=" << b << endl;
	}

	//�Լ� �����ε�(��������; �������� ����� ���ÿ� �����ϵ���)---by Name Mangling
	if (1)
	{

	}
	return 0; //0=��������
}

#endif