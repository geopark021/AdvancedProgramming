#include <iostream>
using namespace std;

class Student {
private:
	int num; //�л� ��
public:
	Student() { num = 123456; }
	Student(int n) { num = n; }
	int getNum() { return num; }
	void setNum(int n) { num = n; }
};
int main(void)
{
	//0���� 4�� ��� 111,222,333,444 ������ ��.
	// 1���� ������ � ������ �ʱ�ȭ? 123456
	Student aClass[2][4] = { Student(111), Student(222), Student(333), Student(444) };


	// 2���� �迭 �ʱ�ȭ ����Լ� Ȱ��
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