#include <iostream>
int main()
{
	using namespace std;
	int chest = 42;//decimal
	int waist = 0x42;//hexadecimal
	int inseam = 042;//octal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0;
}