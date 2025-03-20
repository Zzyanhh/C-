/*
#include <iostream>
using namespace std;

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	inflatable* ps = new inflatable;
	cout << "enter name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "enter price: $";
	cin >> ps->price;
	cout << "name: " << (*ps).name << endl;
	cout << "volume: " << ps->volume << " cubic feet\n";
	cout << "price: $" << ps->price << endl;
	delete ps;

	return 0;
}
*/