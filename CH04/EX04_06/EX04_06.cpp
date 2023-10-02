#include <iostream>

using namespace std; 

// 정수형 배열 동적 할당 및  반환 


int main(void) {
	cout << "입력할 정수의 개수는 ? ";
	int n;
	cin >> n; 
	if (n <= 0) return 0; // 유효성 검사

	int* ip = new int[n]; // n개의 정수 배열 동적 할당
	

	if (!ip) {
		cout << "null값을 가지므로 힙으로 부터 메모리를 할당받을 수 없다. ";
		return 0;
	}

	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 정수 입력: ";
		cin >> ip[i]; 

	}

	// 누적 합
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ip[i]; 
	}
	cout << "누적합 : " << sum << endl; 

	delete[] ip; // 동적 할당된 배열 반환 
	return 0;
}