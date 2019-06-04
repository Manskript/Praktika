#include <iostream>
#include <ctime>

using namespace std;

void fill(int** &arr, int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = rand() % 40 + 10;
}

void print(int** &arr, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arr[i][j] << ' ';
		cout << '\n';
	}
}

int main()
{
	int n, m;
	cin >> n >> m;
	
	int** arr = new int* [n];
	for (int i = 0; i < n; i++)
		arr[i] = new int[m];

	fill(arr, n, m);
	print(arr, n, m);

	system("pause");
	return 0;
}