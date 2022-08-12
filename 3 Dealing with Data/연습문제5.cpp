#include <iostream>
int main()
{
	using namespace std;
	long long world, us;
	double percent;
	cout << "Enter the world's population: ";
	cin >> world;
	cout << "Enter the population of the US: ";
	cin >> us;
	percent = double(us) / double(world) * 100;
	cout << "The population of the US is " << percent << "% of the world population." << endl;
	return 0;
}