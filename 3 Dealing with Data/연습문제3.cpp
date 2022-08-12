#include <iostream>
int main()
{
	using namespace std;

	const double minute = 60;
	const double second = 3600;

	double deg, min, sec;
	cout << "Enter a latitude in degrees, minutes, and seconds:" << endl
		<< "First, enter the degrees: ";
	cin >> deg;
	cout << "Next, enter the minutes of arc: ";
	cin >> min;
	cout << "Finally, enter the seconds of arc: ";
	cin >> sec;
	cout << deg << " degrees, " << min << " minutes, " << sec << " seconds = "
		<< deg + min / minute + sec / second << " degrees";

	return 0;
	
}