#include <iostream>
#include <ctime>

using namespace std;

void allocate(double *&p, int n)
{
	p = new double[n];
}

void fill(double *p, int n)
{
	for (int i = 0; i < n; i++)
		p[i] = rand() % 10;
}

void print(double *p, int n)
{
	for (int i = 0; i < n; i++)
		cout << p[i] << ' ';
	cout << '\n';
}

void free(double* p)
{
	delete[] p;
}

int main()
{
	double* p = 0;
	int n; 
	int can;

	srand(time(NULL));

	cin >> can;

	while (can != 0)
	{
		cin >> n;
		allocate(p, n);
		fill(p, n);
		print(p, n);
		free(p);
		cin >> can;
	}

	system("pause");
	return 0;
}