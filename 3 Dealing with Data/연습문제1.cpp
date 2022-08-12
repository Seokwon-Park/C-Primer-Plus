#include <iostream>
int main()
{
	using namespace std;
	const int feet(12);
	int inch;
	cout << "Enter your height in inches:__\b\b";
	cin >> inch;
	cout << "Your height is " << inch / feet << " feet " << inch % feet << " inches." << endl;

	return 0;	
}