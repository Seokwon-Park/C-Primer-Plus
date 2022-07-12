// carrots.cpp -- food processing program
// uses and displays a variable

#include <iostream>

int main()
{
	using namespace std;

	int carrots;			//정수형 변수 선언

	carrots = 25;			//당근 개수 설정
	cout << "I have ";
	cout << carrots;		//당근 개수 표시
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}