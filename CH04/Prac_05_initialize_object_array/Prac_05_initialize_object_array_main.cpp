#include <iostream>

using namespace std;

class Student {
private:
	int num; //�л� ��
public:
	Student() { num = 123456; }
	Student(int n) { num = n; }
	int getNum() { return num;  }
};

int main(void) {

	// ���� ����. ��ü�迭 �� ���� ���� �ʱ�ȭ �� ���� 
	Student aClass[3] = { Student(), Student(11), Student(22) };
	for (int i = 0; i < 3; i++) {
		cout << aClass[i].getNum() << endl;

	}
	return 0;
}