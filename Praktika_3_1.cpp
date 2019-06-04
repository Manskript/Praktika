#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int num_pages = 0;
	string author;
	int price;

public:
	void set_num_pages(int num_pages)
	{
		this->num_pages = num_pages;
	}
	void set_author(string author)
	{
		this->author = author;
	}
	void set_price(int price)
	{
		this->price = price;
	}
	int get_num_pages()
	{
		return num_pages;
	}
	string get_author()
	{
		return author;
	}
	int get_price()
	{
		return price;
	}
	void calculate_real_price()
	{
		price = num_pages * 10;
	}
};

int main()
{
	Book I;

	I.set_author("Andrey");
	I.set_price(3);
	I.set_num_pages(10);

	cout << I.get_author() << ' ' << I.get_price() << '\n';

	I.calculate_real_price();

	cout << I.get_price() << '\n';

	system("pause");
	return 0;
}