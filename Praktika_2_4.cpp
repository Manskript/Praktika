#include <iostream>
#include <math.h>;

const float X = -0.7, A = 3.5;

using namespace std;

int main()
{
	double y, t;

	cin >> y >> t;

	if (A > y)
		t = y / (A - X);
	else
		if (A - y < 0.000000001)
			t = y / (A - X) + (A + X) / y * y;
		else
			t = tan(A * X) + cos(2 * A * y);
	if (A > X)
		if (sin(A * X) > 0)
			y = sqrt(sin(A * X));
		else cout << "ODZ!";
	else
		y = A + log(X + A);

	cout << A << ' ' << X << ' ' << y << ' ' << t << '\n';

	system("pause");
	return 0;
}