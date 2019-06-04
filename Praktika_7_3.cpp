#include <iostream>
using namespace std;

class Transport {	// ������� ����������� ����� "���������"
protected:
	double maxVelocity;	// ������������ ��������
public:
	Transport(double maxVelocity) { this->maxVelocity = maxVelocity; }

	double getMaxVelocity() { return maxVelocity; }

	virtual void showAdvantages() = 0;	// ����������� �����, ��������� ����������� ����������
};

class Car : public Transport {	// ����� "����������"
public:
	Car(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages();	// ����������� �����, ��������� ����������� ����������
};

class Bus : public Transport {	// ����� "�������"
public:
	Bus(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages();	// ����������� �����, ��������� ����������� ��������
};

class Bicycle : public Transport {	// ����� "���������"
public:
	Bicycle(int maxVelocity) : Transport(maxVelocity) {};

	void showAdvantages();	// ����������� �����, ��������� ����������� ����������
};

int main() {
	double a, b, c;
	cout << "Enter max speed of a car: ";
	cin >> a;
	cout << "Enter max speed of a bus: ";
	cin >> b;
	cout << "Enter max speed of a bicycle: ";
	cin >> c;

	Car car(a);
	Bus bus(b);
	Bicycle bicycle(c);

	car.showAdvantages();
	bus.showAdvantages();
	bicycle.showAdvantages();

	system("pause");
	return 0;
}

void Car::showAdvantages() {
	cout << "Car:" << endl;
	cout << "Can park in the yard" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}

void Bus::showAdvantages() {
	cout << "Bus:" << endl;
	cout << "Has a big size" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}

void Bicycle::showAdvantages() {
	cout << "Bicycle:" << endl;
	cout << "Can ride everywhere" << endl;
	cout << "Max speed: " << maxVelocity << endl;
}