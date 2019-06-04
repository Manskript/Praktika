#include <iostream>
#include <string>

using namespace std;

class Group
{
private:
	int num_peoples = 0;
	string name_of_group;
	int scholarship;

public:
	void set_num_peoples(int num_peoples)
	{
		this->num_peoples = num_peoples;
	}
	void set_name_of_group(string name_of_group)
	{
		this->name_of_group = name_of_group;
	}
	void set_scholarship(int scholarship)
	{
		this->scholarship = scholarship;
	}
	int get_num_peoples()
	{
		return num_peoples;
	}
	string get_name_of_group()
	{
		return name_of_group;
	}
	int get_scholarship()
	{
		return scholarship;
	}
	void calculate_wishful_scholarship()
	{
		scholarship = num_peoples * 15000;
	}
};

int main()
{
	Group I;

	I.set_name_of_group("Paupers");
	I.set_scholarship(1000);
	I.set_num_peoples(15);

	cout << I.get_name_of_group() << ' ' << I.get_scholarship() << '\n';

	I.calculate_wishful_scholarship();

	cout << I.get_scholarship() << '\n';

	system("pause");
	return 0;
}