#include <iostream>
using namespace std;

int main(void)
{
	int* p; // ������ ������ ����Ű�� ������ ���� p
	p = new int; // int �� �ڷ����� ����Ű�� ���� �ڷ��� ���� �� �ּ� ��ȯ
	if (!p) {
		cout << "�޸𸮸� �Ҵ��� �� ����.";
		return 0; //null�ϰ�� �� �޸� �������� �Ҵ� �Ұ�
	}
	*p = 5; // �Ҵ���� ���� ������ 5���. ������. �����Ͱ� ����Ű�� �޸� ������ ����(��)
	int n = *p; //�� ����
	cout << " *p =  " << *p << endl;
	cout << " n = " << n << endl; 
	
	
	delete p; 

	return 0; 
}