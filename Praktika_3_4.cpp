#include <iostream>

using namespace std;

class Vector
{
private:
	int x, y;
	double length;
public:
	void set_x(int x)
	{
		this-> x = x;
	}
	void set_y(int y)
	{
		this->y = y;
	}
	void set_length()
	{
		length = sqrt(x * x + y * y);
	}
	int get_x()
	{
		return x;
	}
	int get_y()
	{
		return y;
	}
	double get_length()
	{
		return length;
	}
	void reflect()
	{
		x = -x;
		y = -y;
	}
};

int main()
{
	Vector I;

	I.set_x(5);
	I.set_y(3);

	cout << I.get_x() << I.get_y();

	I.reflect();

	cout << I.get_x() << I.get_y();

	I.set_length();

	cout << I.get_length();

	system("pause");
	return 0;
}