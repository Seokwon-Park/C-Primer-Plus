#include <iostream>

void display(int, int);

int main()
{
	using namespace std;
	int hour;
	int min;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> min;
	display(hour, min);
	return 0;
}

void display(int hour, int min)
{
	using namespace std;
	cout <<"Time: " << hour << ":" << min << endl;
}