#include <iostream>
#include <string> // 배열의 크기 유동적 선언 가능
using namespace std;

int main(void)
{
	// 공백 포함하여 입력가능, enter 입력전까지 하나의 문자열 취급
	string name; //이름 
	getline(cin, name);

	string classNumber; // 학번
	getline(cin, classNumber);

	string date;  // 날짜 
	getline(cin, date);

	string greeting; // 인삿말
	getline(cin, greeting);

	int i;
	for (i = 0; i < 10; i++) {
		cout << name << classNumber << date << greeting << endl;
	}



	return 0;

}