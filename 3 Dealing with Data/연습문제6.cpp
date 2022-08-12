#include <iostream>
int main()
{
	using namespace std;
	double gal = {};
	double mile = { 0 };
	double kilo(0);
	double liter = 0;
	double report;
	cout << "Driven miles: ";
	cin >> mile;
	cout << "Used Gallons: ";
	cin >> gal;
	report = double(mile) / double(gal);
	cout << "Miles per gallon: " << report << endl;

	cout << "Driven Kilometers: ";
	cin >> kilo;
	cout << "Used Liters: ";
	cin >> liter;
	report = liter / kilo * 100;
	cout << "Liters Per 100 Kilometers:" << report << endl;

	return 0;
}