#include <iostream>
// �ζ��� �Լ��� �̿��� �ּҰ� ���ϱ� 
using namespace std;

// 2�� �� �� �ּڰ��� ���Ѵ�.
//int min(int x, int y) {
//	return (x > y) ? y : x;
//}

// inline
inline int min(int x, int y) {
	return (x > y) ? y : x;
}

int main(void)
{
	cout << min(91, 52) << endl;
	cout << min(67, 34) << endl;

	// ���� �����ڸ� ����� �� ��ȣ�� ���� ����Ѵ�. 
	cout << (91 > 52 ? 52 : 91) << endl; // 52
	cout << (67 > 34 ? 34 : 67) << endl;	//34


	return 0;
}