#include <iostream>

using namespace std; 

// ������ �迭 ���� �Ҵ� ��  ��ȯ 


int main(void) {
	cout << "�Է��� ������ ������ ? ";
	int n;
	cin >> n; 
	if (n <= 0) return 0; // ��ȿ�� �˻�

	int* ip = new int[n]; // n���� ���� �迭 ���� �Ҵ�
	

	if (!ip) {
		cout << "null���� �����Ƿ� ������ ���� �޸𸮸� �Ҵ���� �� ����. ";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> ip[i]; 

	}

	// ���� ��
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ip[i]; 
	}
	cout << "������ : " << sum << endl; 

	delete[] ip; // ���� �Ҵ�� �迭 ��ȯ 
	return 0;
}