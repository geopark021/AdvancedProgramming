#include <iostream>

using namespace std;

class Student {
private:
	int num; //학생 수
public:
	Student() { num = 123456; }
	Student(int n) { num = n; }
	int getNum() { return num;  }
};

int main(void) {

	// 정적 생성. 객체배열 각 원소 마다 초기화 및 생성 
	Student aClass[3] = { Student(), Student(11), Student(22) };
	for (int i = 0; i < 3; i++) {
		cout << aClass[i].getNum() << endl;

	}
	return 0;
}