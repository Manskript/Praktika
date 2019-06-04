#include <iostream>
#include <string>

using namespace std;

class Avto
{
private:
	int cost_price = 0;
	string name_of_brand;
	int price;

public:
	void set_cost_price(int cost_price)
	{
		this->cost_price = cost_price;
	}
	void set_name_of_brand(string name_of_brand)
	{
		this->name_of_brand = name_of_brand;
	}
	void set_price(int price)
	{
		this->price = price;
	}
	int get_cost_price()
	{
		return cost_price;
	}
	string get_name_of_brand()
	{
		return name_of_brand;
	}
	int get_price()
	{
		return price;
	}
	void calculate_real_price()
	{
		price = cost_price * 1.5;
	}
};

int main()
{
	Avto I;

	I.set_name_of_brand("Lastochka");
	I.set_price(350000);
	I.set_cost_price(100000);

	cout << I.get_name_of_brand() << ' ' << I.get_price() << '\n';

	I.calculate_real_price();

	cout << I.get_price() << '\n';

	system("pause");
	return 0;
}