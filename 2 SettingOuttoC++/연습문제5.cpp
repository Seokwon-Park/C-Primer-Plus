#include <iostream>

double calcTemp(double);

int main()
{
	using namespace std;
	double celc;
	cout << "Please enter a Celsius value: ";
	cin >> celc;
	cout << celc << " degrees Celsius is " << calcTemp(celc) << " degrees Fahrenheit." << endl;
	return 0;
}

double calcTemp(double n)
{
	return n * 1.8 + 32.0;
}