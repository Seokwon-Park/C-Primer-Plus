#include <iostream>
int main()
{
	const int ftoi = 12;
	const double itom = 0.0254;
	const double ptok = 2.2;
	using namespace std;

	int feet, inch, pound;
	cout << "Enter your height in feet: ";
	cin >> feet;
	cout << "Enter your height in inches: ";
	cin >> inch;
	double height = (feet * ftoi + inch) * itom;
	cout << "Enter your weight in pounds: ";
	cin >> pound;
	double weight = pound / ptok;
	double BMI = weight / sqrt(height);
	cout << "your BMI is " << BMI << "." << endl;
	return 0;
}