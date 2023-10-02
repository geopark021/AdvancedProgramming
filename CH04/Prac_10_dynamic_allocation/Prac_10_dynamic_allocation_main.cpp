#include <iostream>
// 연습4 : 동적할당 빈칸 채우기
using namespace std;

int main(void) {
	int* pointInt;
	float* pointFloat;

	// 동적 할당 
	pointInt = new int;
	pointFloat = new float; 

	*pointInt = 95;
	*pointFloat = 95.45f;

	cout << *pointInt << endl;
	cout << *pointFloat << endl;

	// 동적 할당 해제
	delete pointInt;
	delete pointFloat; 
	return 0;
}