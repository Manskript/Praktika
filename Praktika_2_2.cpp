#include <iostream>
#include <math.h>;

const float B = 5.3, A = -0.6;

using namespace std;

int main()
{
	double z, t;

	cin >> z >> t;

	if (z < B)
		if (z + A * A*B > 0)
			pow(z + A * A*B, 1 / 3);
		else
			cout << "ODZ!";
	else
		if (z - B < 0.000000001)
			t = 1 - log10(z) + cos(A*A*B);
		else
			if (cos(z*A) != 0)
				t = 1 / cos(z*A);
			else
				cout << "ODZ!";
	if (A < B)
		z = sqrt(abs(A*A - B*B));
	else
		z = 1 - 2*cos(A)*sin(B);

	cout << A << ' ' << B << ' ' << z << ' ' << t << '\n';

	system("pause");
	return 0;
}