#include <iostream>

int main()
{
	using namespace std;

	const double MilesPer100KM = 62.14;
	const double LiterPerGallon = 3.875;
	cout << "Enter an automobile gasoline consumption figure in the European style: ";
	float LiterPer100KM;
	cin >> LiterPer100KM;

	cout << "Your gasoline consumption figure in the European style is "
		<< LiterPer100KM
		<< "\nConverted mpg(Miles per Gallon) is " << (1 / (LiterPer100KM / LiterPerGallon)) * MilesPer100KM
		<< endl;
	return 0;

}