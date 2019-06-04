#include <iostream>

using namespace std;

int main()
{
	double a, b;
	int c, d;

	cin >> a >> b >> c >> d;

	if (b == 0)
		cout << "wrong argument" << '\n';
	else
		cout << a + b << ' ' << a - b << ' ' << a * b << ' ' << a / b << '\n';
	if (d == 0)
		cout << "wrong argument" << '\n';
	else
		cout << c + d << ' ' << c - d << ' ' << c * d << ' ' << c / d << '\n';

	system("pause");
	return 0;
}