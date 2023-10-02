#include <iostream>
using namespace std;

class Student {
private:
	int num; //학생 수
public:
	Student() { num = 123456; }
	Student(int n) { num = n; }
	int getNum() { return num; }
	void setNum(int n) { num = n; }
};
int main(void)
{
	//0행의 4열 모두 111,222,333,444 설정될 것.
	// 1행의 값들은 어떤 값으로 초기화? 123456
	Student aClass[2][4] = { Student(111), Student(222), Student(333), Student(444) };


	// 2차원 배열 초기화 멤버함수 활용
	/*aClass[1][0].setNum(55);
	aClass[1][1].setNum(66);
	aClass[1][2].setNum(77);
	aClass[1][3].setNum(88);*/

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 4; j++) {
			cout << aClass[i][j].getNum() << '\t';
		}
	}

	return 0;
}