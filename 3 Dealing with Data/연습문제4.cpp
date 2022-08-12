#include <iostream>

int main()
{
	using namespace std;

	const int minute = 60;
	const int hour = minute * 60;
	const int day = hour * 24;

	int sec, min, hr, d;
	cout << "Enter the number of seconds: ";
	cin >> sec;
	cout << sec << " seconds = ";

	d = sec / day;
	sec = sec % day;
	cout << d << "days, ";

	hr = sec / hour;
	sec = sec % hour;
	cout << hr << " hours, ";

	min = sec / minute;
	sec = sec % minute;
	cout << min << " minutes, " << sec << " seconds" << endl;
	return 0;
}