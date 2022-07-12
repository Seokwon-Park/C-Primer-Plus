// myfirst.cpp -- diplays message

#include <iostream>							//전처리기
int main()									//함수 헤더
{											//function body 시작
	using namespace std;					//std를 visible로 
	cout << "Come up and C++ me some time.";//메세지
	cout << endl;							//새로운 라인 시작
	cout << "You won't regret it!" << endl;	//추가 결과물
	cin.get();
	return 0;								//main()종료
}											//function body 종료