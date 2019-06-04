#include <iostream>
#include <math.h>;

const float B = 1.5, A = 4.6;

using namespace std;

int main()
{
	double y, t;

	cin >> y >> t;

	if (y < B)
		if (tan(A-B) != 0)
			t = sin(y)*sin(y) + 1/tan(A-B);
		else
			cout << "ODZ!";
	else
		if (y - B < 0.000000001)
			if ((y*y - A > 0) && (A*A - y > 0))
				t = (2 * y + sqrt(y*y - A)) / (2 * B - sqrt(A*A - y));
			else
				cout << "ODZ!";
		else
			if ((y * sin(A) > 0) && (y * cos(B) > 0))
				t = pow(y * sin(A), 1/3) + 1/sqrt(y*cos(B));
			else
				cout << "ODZ!";
	if (A > B)
		y = A + log(B*B);
	else
		if (A*A - A * B + B * B != 0)
			y = (A - B) / (A*A - A * B + B * B);
		else
			cout << "ODZ!";

	cout << A << ' ' << B << ' ' << y << ' ' << t << '\n';

	system("pause");
	return 0;
}