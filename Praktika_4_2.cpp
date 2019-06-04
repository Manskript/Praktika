#include <iostream>

using namespace std;

void pair_swap(double *n)
{
	for (int i = 0; i < 12; i += 2)
		swap(n[i], n[i + 1]);
}

int main()
{
	double n[12];

	for (int i = 0; i < 12; i++)
		cin >> n[i];

	pair_swap(n);

	for (int i = 0; i < 12; i++)
		cout << n[i] << ' ';

	system("pause");
	return 0;
}