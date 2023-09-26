#include <iostream>
#include <string>
using namespace std;
class Count {	// Ŭ���� ����� : Ŭ���� ���뼺 ����
public:
	string str; // �Է¹��� ���ڿ�
	int capitalNumber;	// �빮�� ����
	int smallLetterNumber; // �ҹ��� ���� 
	int numNumber; // ���� ����
	int strLength; // ���ڿ� ���� 
	int getCapitalNumber(); // �빮�� ���� ����
	int getSmallLetterNumber(); // �ҹ��� ���� ����
	int getNumNumber(); // ���� ���� ����
	int getStrLength(); // ���ڿ� ��������
	Count();
};
// ������ : �ʱ�ȭ
Count::Count() : numNumber(0), strLength(0), capitalNumber(0), smallLetterNumber(0) {
	// ���� ����, ���ڿ� ����, �빮�� ����, �ҹ��� ���� ������� 0���� �ʱ�ȭ
	cout << "���ڿ� �Է� : ";
	getline(cin, str);  // string ��������� getline �����Լ� �̿�
}

// ���ڿ� ���� ���ϴ� �Լ�
int Count::getStrLength() {	// Ŭ���� ������ �������������� ���::

	strLength = str.length(); // length()�� <string>  ������� �ȿ� ����. null���� ���� ��ȯ 
	cout << "���ڿ� ����: " << strLength << endl;
	return strLength; // ���ڿ� ���� ��ȯ
}
// �빮�� ���� ���� 
int Count::getCapitalNumber() {
	for (int i = 0; i < str.length(); i++) { // �Է¹��� ��ü ���ڿ��� ������ŭ �ݺ�
		if (str[i] >= 65 && str[i] <= 90) { // �빮�� A�ƽ�Ű�ڵ� 65, Z 90 ������ ������ �빮�� ����
			capitalNumber++; // �빮�� ���� 1�� ������ ������ ����.
		}
	}
	cout << "���ĺ� �빮���� ����: " << capitalNumber << endl;
	return capitalNumber; // �빮�� ���� ��ȯ
}
// �ҹ��� ���� ����
int Count::getSmallLetterNumber() {
	for (int i = 0; i < str.length(); i++) { // �Է¹��� ��ü ���ڿ��� ������ŭ �ݺ�
		if (str[i] >= 97 && str[i] <= 122) { // �ҹ��� a �ƽ�Ű�ڵ� 97, z 122 ������ �ִ� �ƽ�Ű �ڵ��̸� �ҹ��� ������ ������Ų��. 
			smallLetterNumber++;
		}
	}
	cout << "���ĺ� �ҹ����� ����: " << smallLetterNumber << endl;
	return smallLetterNumber; // �ҹ��� ���� ��ȯ
}
// ���� ���� ���� 
int Count::getNumNumber() {
	for (int i = 0; i < str.length(); i++) { // �Է¹��� ��ü ���ڿ��� ������ŭ �ݺ� 
		if (str[i] >= 48 && str[i] <= 57) { //  ����0~9�� �ƽ�Ű�ڵ� ���� 48~57
			numNumber++; // ���� ���� ����
		}
	}
	cout << "������ ���� : " << numNumber << endl;
	return numNumber; // ���� ���� ��ȯ
}
int main(void) {
	Count myInput; // ��ü ����
	myInput.getCapitalNumber(); // �빮�� �������� �Լ� ȣ��
	myInput.getSmallLetterNumber(); // �ҹ��� �������� �Լ� ȣ��
	myInput.getNumNumber(); // ���� ���� ���� �Լ� ȣ��
	myInput.getStrLength(); // ���ڿ� ���� ���� �Լ� ȣ��
	return 0;
}