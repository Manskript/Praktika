#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;
void calc(int a, int b)
{
	cout << "Сумма чисел = " << a + b << endl;
	cout << "Разность чисел = " << a - b << endl;
	cout << "Произведение чисел = " << a * b << endl;
	cout << "Разность чисел = " << a / b << endl;

}

void calc(double a, double b)
{
	cout << "Сумма чисел = " << a + b << endl;
	cout << "Разность чисел = " << a - b << endl;
	cout << "Произведение чисел = " << a * b << endl;
	cout << "Разность чисел = " << a / b << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int type;
	int z = 1;

	while (z > 0)
	{
		cout << "Введите тип данных(int=0;double=1):";
		cin >> type;
		if (type == 0)
		{
			int a, b;
			cout << "Введите 2 числа:" << endl;
			cin >> a >> b;
			calc(a, b);
		}
		else
		{
			double a, b;
			cout << "Введите 2 числа:" << endl;
			cin >> a >> b;
			calc(a, b);
		}
		cout << "Чтобы закрыть программу введите 0:";
		cin >> z;
	}
	system("pause");
	return 0;
}