#include <iostream>

double calcAu(double);

int main()
{
	using namespace std;
	double ly;
	cout << "Enter the number of light years: ";
	cin >> ly;
	cout << ly << " light years = " << calcAu(ly) << " astronomical units." << endl;
}

double calcAu(double n)
{
	return n * 63240;
}