#include <iostream>
// 인라인 함수를 이용한 최소값 구하기 
using namespace std;

// 2개 값 중 최솟값을 구한다.
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

	// 삼항 연산자를 출력할 때 괄호로 묶어 출력한다. 
	cout << (91 > 52 ? 52 : 91) << endl; // 52
	cout << (67 > 34 ? 34 : 67) << endl;	//34


	return 0;
}