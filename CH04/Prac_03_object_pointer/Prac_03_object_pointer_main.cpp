#include <iostream>
using namespace std;

// ��ü�� '�̸�'���� ���� ��(.) ������ �̿�
// ��ü�� '������ ����'�� ���� ȭ��ǥ(->) �̿�
//	- ����� ���� �� �������� �Ұ�
//  - ��ü�� �������� ����. &�����ڷ� �̹� ������ ��ü �Ҵ簡�� 
// Student *s;
class Student {
private:
	int num;
public:
	Student() { num = 1; }
	Student(int n) { num = n; }
	int getNum() { return num; }
};

int main(void)
{
	// ��ü�� '�̸�'���� �����ϱ�
	Student aClass(30); // ��ü ����
	cout << aClass.getNum() << endl;

	// ��ü �����ͷ� �����ϱ�
	Student* s; 
	s = &aClass; // aClass ��ü�� �ּҸ� ������ ���� s�� ����
	//cout << "aClass ��ü �̸��� ���: "<< aClass << endl;
	cout << "s��ü ������ �̸��� ���: " << s << endl; // ��ü ���� �ּ� 012FFC08
	//cout << "*s : " << (*s) << endl; // ����  ������ ������ ����Ű�� ��ü�� ����� ����
	//cout <<"s.getNumber() "<<  s.getNum() << endl; // ����  ������ ������ ����Ű�� ��ü�� ��� ���� �� �� ������ �Ұ�.
	cout << "(*s).getNumber() "<< (*s).getNum() << endl;
	cout << "s->getNumber() " << s->getNum() << endl;

	return 0;
}