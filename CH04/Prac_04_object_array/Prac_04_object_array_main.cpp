#include <iostream>
#include <string>
// p 11 ��ü �̸����� �����ϱ� 
// ��ü �迭 ���� - �� ���Ұ� ��ü�� �����Ѵ�.
// ��ü �迭�� �����ڿ� �Ű������� �� �� ����
using namespace std;
class TestResult {
private:
	int num, score; // �й�, ���� - ������ �ڷ����� �޸��� �ѹ��� �ۼ�
	string name; // �̸�
public:
	TestResult();
	void printAll();
	void setInfo(int _score, int _num, string _name);
};

TestResult::TestResult() {

}
void TestResult::setInfo(int _score, int _num, string _name) {
	score = _score;
	num = _num;
	name = _name;
	return;
}

void TestResult::printAll()
{
	// * this �� �ּҸ� �����ϳ�? Yes instance pointer

	// this ���� ��� ������ ���� ���. 
	cout << "�̸� : " << name << endl;
	cout << "���� : " << score << endl;
	cout << num << endl; 
	return;
}
int main(void)
{
	TestResult student[3]; //������ 3�� �л� ��ü �迭 ����
	int num, score; // �й�, ����
	string name; // �л��̸�

	for (int i = 0; i <3; i++)
	{
		cout << "�й� :";
		cin >> num;
		cout << "�̸�: ";
		cin >> name;
		cout << "����: ";
		cin >> score;
		// �ѹ��� ���ڷ� ������ ���� 
		student[i].setInfo(score, num, name);

	}
	// (1) ��ü �̸����� ����Լ� ����

	for (int i = 0; i < 3; i++)
	{
		student[i].printAll();
	}

	// (2) ��ü �����ͷ� ��� ����
	TestResult* pstudent = student;
	for (int i = 0; i < 3; i++)
	{
		//pstudent[i]->printAll(); // student[i]-> printAll()�� student[i]�� ������ ���� �ƴ�. ��¹�� ���ǵ��� �ʾ� ��ºҰ� 
		pstudent->printAll();  // -> �����ڴ� �տ� ������ ������ �;� ��밡�� 
		pstudent++; // ������ ������ ����Ű�� ���Ҹ� ������ �ϳ��� �̵� 
		//(&student[i])->printAll(); // student[i]-> printAll()�� student[i]�� ������ ���� �ƴ�. ��¹�� ���ǵ��� �ʾ� ��ºҰ� 
	}
	return 0;
}