#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;
void calc(int a, int b)
{
	cout << "����� ����� = " << a + b << endl;
	cout << "�������� ����� = " << a - b << endl;
	cout << "������������ ����� = " << a * b << endl;
	cout << "�������� ����� = " << a / b << endl;

}

void calc(double a, double b)
{
	cout << "����� ����� = " << a + b << endl;
	cout << "�������� ����� = " << a - b << endl;
	cout << "������������ ����� = " << a * b << endl;
	cout << "�������� ����� = " << a / b << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int type;
	int z = 1;

	while (z > 0)
	{
		cout << "������� ��� ������(int=0;double=1):";
		cin >> type;
		if (type == 0)
		{
			int a, b;
			cout << "������� 2 �����:" << endl;
			cin >> a >> b;
			calc(a, b);
		}
		else
		{
			double a, b;
			cout << "������� 2 �����:" << endl;
			cin >> a >> b;
			calc(a, b);
		}
		cout << "����� ������� ��������� ������� 0:";
		cin >> z;
	}
	system("pause");
	return 0;
}