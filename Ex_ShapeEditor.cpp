#define ON_MAIN
#ifdef ON_MAIN
using namespace std;

#include <iostream>


/*
* ���� ������ ����
* -------------------------------
* 1.  �� ������ Ÿ������ ����� �����ϴ�(ĸ��ȭ)
*	ex) �簢���� int 4���� �����ϱ� ���ٴ� ĸ���� ����� ��
  2. ��� ������ ������ Ư¡�� ��� Ŭ����(Shape)���� �����Ѵ�(���: ����)
  -------------------------------
  4. ��� ������ ������ Ư¡(Draw)�� �ݵ�� ��� Ŭ����(Shape)���� �־�� �Ѵ�


*/
class Shape
{
public:
	int x, y;
	int color;
	virtual void Draw() 
	{ 
		cout << "Shape Draw" << endl; 
	}
};

class Rect : public Shape
{
public:
	int w, h;
	virtual void Draw() override
	{ 
		cout << "Rect Draw" << endl; 
	}
};

class Circle: public Shape
{
public:
	int r;
	virtual void Draw() override
	{ 
		cout << "Circle Draw" << endl; 
	}
};

class Triangle : public Shape
{
public:
	int a,b;
	virtual void Draw() override
	{
		cout << "Triangle Draw" << endl;
	}
};

#include <vector>	//���ӵ� �޸�
#include <list>		//�񿬼ӵ� �޸�
int main()
{
	cout << "-------------------------------------------" << endl;
	cout << "	����������" << endl;
	cout << "-------------------------------------------" << endl;
	//cout << "1.  Rect �׸���\t2. Circle �׸���\t9.All Draw" << endl;
	cout << "1.  Rect �׸���\t2. Circle �׸���\t3. Triangle �׸���\t9.All Draw" << endl;
	cout << "-------------------------------------------" << endl;

	//Rect v1[30]; //Rect�� �����Ѵ�
	//Circle v2[30]; //Circle�� �����Ѵ�

	//vector< Rect > v1;	//Rect�� �����Ѵ�
	//vector< Circle > v2;	//Circle�� �����Ѵ�


	vector< Shape* > v; //�θ��� �����ͷδ� �ڽ��� ����ų �� �ִ�(x error)
						//�ڽ��� �����ͷδ� �θ� ����ų �� ����(error)

	while (1)
	{
		int menu;
		cin >> menu;

		switch (menu)
		{
		case 1://Rect �׸���
			v.push_back(new Rect);
			break;

		case 2://Circle �׸���
			v.push_back(new Circle);
			break;

		case 3://Triangle �׸���
			v.push_back(new Triangle);
			break;

		case 9://All Draw
			for (auto& p : v)
			{
				p->Draw();//���� ���ε�(�⺻) ->����(����) ���ε�(virtual)

				//: OCP(Open Close Principle)
				/*

			}
			break;

		}
	}
	return 0;
}

#endif