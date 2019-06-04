#include <iostream>
#include <math.h>;

const float B = -7.9, A = 4.8;

using namespace std;

int main()
{
	double n, m;

	cin >> n >> m;
	
	if (n < B)
		if (sin(A) * sin(A) - cos(n) > 0)
			m = (n + A) / -B + sqrt(sin(A) * sin(A) - cos(n));
		else
			cout << "ODZ!";
	else
		if (n - B < 0.000000001)
			m = B * B + tan(n * A);
		else
			m = pow(B, 3) + n * A * A;
	
	if (A < B)
		n = A * A + (A - B) / sin(A * B);
	else
		n = pow(A - B, 1 / 3);

	cout << A << ' ' << B << ' ' << n << ' ' << m << '\n';

	system("pause");
	return 0;
}