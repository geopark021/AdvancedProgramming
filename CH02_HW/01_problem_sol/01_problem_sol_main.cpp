#include <iostream>
#include <string> // �迭�� ũ�� ������ ���� ����
using namespace std;

int main(void)
{
	// ���� �����Ͽ� �Է°���, enter �Է������� �ϳ��� ���ڿ� ���
	string name; //�̸� 
	getline(cin, name);

	string classNumber; // �й�
	getline(cin, classNumber);

	string date;  // ��¥ 
	getline(cin, date);

	string greeting; // �λ�
	getline(cin, greeting);

	int i;
	for (i = 0; i < 10; i++) {
		cout << name << classNumber << date << greeting << endl;
	}



	return 0;

}