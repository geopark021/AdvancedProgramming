#include <iostream>
using namespace std;

// 객체를 '이름'으로 접근 점(.) 연산자 이용
// 객체를 '포인터 변수'로 접근 화살표(->) 이용
//	- 멤버에 접근 시 점연산자 불가
//  - 객체가 생성되지 않음. &연산자로 이미 생성된 객체 할당가능 
// Student *s;
class Student {
private:
	int num;
public:
	Student() { num = 1; }
	Student(int n) { num = n; }
	int getNum() { return num; }
};

int main(void)
{
	// 객체의 '이름'으로 접근하기
	Student aClass(30); // 객체 생성
	cout << aClass.getNum() << endl;

	// 객체 포인터로 접근하기
	Student* s; 
	s = &aClass; // aClass 객체의 주소를 포인터 변수 s에 저장
	//cout << "aClass 객체 이름만 출력: "<< aClass << endl;
	cout << "s객체 포인터 이름만 출력: " << s << endl; // 객체 시작 주소 012FFC08
	//cout << "*s : " << (*s) << endl; // 오류  포인터 변수가 가리키는 객체의 멤버의 참조
	//cout <<"s.getNumber() "<<  s.getNum() << endl; // 오류  포인터 변수가 가리키는 객체의 멤버 접근 시 점 연산자 불가.
	cout << "(*s).getNumber() "<< (*s).getNum() << endl;
	cout << "s->getNumber() " << s->getNum() << endl;

	return 0;
}