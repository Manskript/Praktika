#include "pch.h"
#include <iostream>
#include "windows.h"
using namespace std;
void sort(int *arr, int size)
{
	for (int i = 0; i < size - 1; i++) {//Сортировка выбором
		int min = arr[i];
		int buff = i;
		for (int j = i; j < size; j++)
			if (arr[j] < min) {
				min = arr[j];
				buff = j;
			}
		arr[buff] = arr[i];
		arr[i] = min;
	}
	for (int i = 0; i < size; i++) {// Вывод отсортированного массива на экран
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;// освобождение памяти;
}

void sort(double *arr, int size)
{
	for (int i = 0; i < size - 1; i++) {//Сортировка выбором
		double min = arr[i];
		int buff = i;
		for (int j = i; j < size; j++)
			if (arr[j] < min) {
				min = arr[j];
				buff = j;
			}
		arr[buff] = arr[i];
		arr[i] = min;
	}
	for (int i = 0; i < size; i++) {// Вывод отсортированного массива на экран
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;// освобождение памяти;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	int type;
	cout << "Введите размер массива(если хотите выйти,то введите 0):";	// Ввод количества элементов массива
	cin >> size;

	while (size > 0)
	{

		cout << "Введите тип данных(int=0;double=1):";
		cin >> type;
		if (type == 0)
		{
			int *arr = new int[size]; // выделение памяти под массив
			for (int i = 0; i < size; i++) // заполнение массива
			{
				cout << "arr[" << i << "] = ";
				cin >> arr[i];
			}
			sort(arr, size);
		}
		if (type == 1)
		{
			double*arr = new double[size]; // выделение памяти под массив
			for (int i = 0; i < size; i++) // заполнение массива
			{
				cout << "arr[" << i << "] = ";
				cin >> arr[i];
			}
			sort(arr, size);
		}
		cout << "Введите размер массива(если хотите выйти,то введите 0):";
		cin >> size;
	}
	system("pause");
	return 0;
}