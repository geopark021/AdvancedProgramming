#include <iostream>
using namespace std;

int main(void)
{
	int* p; // 정수형 변수를 가리키는 포인터 변수 p
	p = new int; // int 형 자료형을 가리키는 동적 자료형 생성 후 주소 반환
	if (!p) {
		cout << "메모리를 할당할 수 없다.";
		return 0; //null일경우 힙 메모리 부족으로 할당 불가
	}
	*p = 5; // 할당받은 정수 공간에 5기록. 역참조. 포인터가 가리키는 메모리 공간의 내용(값)
	int n = *p; //값 저장
	cout << " *p =  " << *p << endl;
	cout << " n = " << n << endl; 
	
	
	delete p; 

	return 0; 
}