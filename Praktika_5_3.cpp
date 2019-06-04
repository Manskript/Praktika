#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;
void sort(int *arr, int size)
{

	for (int i = 0; i < size - 1; i++)//���������� ���������
	{
		int key = i + 1;
		int temp = arr[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (temp < arr[j - 1])
			{
				arr[j] = arr[j - 1];
				key = j - 1;
			}
		}
		arr[key] = temp;
	}
	for (int i = 0; i < size; i++) {// ����� ���������������� ������� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;// ������������ ������;
}

void sort(double *arr, int size)
{
	for (int i = 0; i < size - 1; i++)//���������� ���������
	{
		int key = i + 1;
		double temp = arr[key];
		for (int j = i + 1; j > 0; j--)
		{
			if (temp < arr[j - 1])
			{
				arr[j] = arr[j - 1];
				key = j - 1;
			}
		}
		arr[key] = temp;
	}
	for (int i = 0; i < size; i++) {// ����� ���������������� ������� �� �����
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;// ������������ ������;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	int type;
	cout << "������� ������ �������(���� ������ �����,�� ������� 0):";	// ���� ���������� ��������� �������
	cin >> size;

	while (size > 0)
	{

		cout << "������� ��� ������(int=0;double=1):";
		cin >> type;
		if (type == 0)
		{
			int *arr = new int[size]; // ��������� ������ ��� ������
			for (int i = 0; i < size; i++) // ���������� �������
			{
				cout << "arr[" << i << "] = ";
				cin >> arr[i];
			}
			sort(arr, size);
		}
		if (type == 1)
		{
			double*arr = new double[size]; // ��������� ������ ��� ������
			for (int i = 0; i < size; i++) // ���������� �������
			{
				cout << "arr[" << i << "] = ";
				cin >> arr[i];
			}
			sort(arr, size);
		}
		cout << "������� ������ �������(���� ������ �����,�� ������� 0):";
		cin >> size;
	}
	system("pause");
	return 0;
}