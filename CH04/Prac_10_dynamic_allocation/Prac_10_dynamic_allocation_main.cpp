#include <iostream>
// ����4 : �����Ҵ� ��ĭ ä���
using namespace std;

int main(void) {
	int* pointInt;
	float* pointFloat;

	// ���� �Ҵ� 
	pointInt = new int;
	pointFloat = new float; 

	*pointInt = 95;
	*pointFloat = 95.45f;

	cout << *pointInt << endl;
	cout << *pointFloat << endl;

	// ���� �Ҵ� ����
	delete pointInt;
	delete pointFloat; 
	return 0;
}