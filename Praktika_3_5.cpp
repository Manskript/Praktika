#include <iostream>
#include <string>

using namespace std;

class Book
{
private:
	int num_books = 0;
	string more_popular_author;
	int price;

public:
	void set_num_books(int num_books)
	{
		this->num_books = num_books;
	}
	void set_more_popular_author(string more_popular_author)
	{
		this->more_popular_author = more_popular_author;
	}
	void set_price(int price)
	{
		this->price = price;
	}
	int get_num_books()
	{
		return num_books;
	}
	string get_more_popular_author()
	{
		return more_popular_author;
	}
	int get_price()
	{
		return price;
	}
	void calculate_real_price()
	{
		price = num_books * 350 + 1500000;
	}
};

int main()
{
	Book I;

	I.set_more_popular_author("Tanya");
	I.set_price(1000000);
	I.set_num_books(1000);

	cout << I.get_more_popular_author() << ' ' << I.get_price() << '\n';

	I.calculate_real_price();

	cout << I.get_price() << '\n';

	system("pause");
	return 0;
}