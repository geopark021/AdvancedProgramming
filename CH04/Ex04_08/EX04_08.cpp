#include <iostream>
using namespace std;

// 입력: 정수형 반지름
// - 음수 입력시 프로그램 종료
// - circle 객체 동적 생성
// 출력: 면적 
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }

};

Circle::Circle() {
	radius = 1;
	cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "생성자 실행 radius = " << radius << endl; 
}

Circle::~Circle() {
	cout << "소멸자 실행 radius = " << radius << endl;
}

int main(void) {
	int radius;
	while (true) {
		cout << "정수의 반지름을 입력하세요>> ";
		cin >> radius;

		if (radius < 0) {
			cout << "음수를 입력했습니다. 프로그램을 종료합니다. ";
			break; // while문 종료
			
		}
		Circle* p = new Circle(radius); // 객체 동적 생성 및 초기화   
		cout << "면적 : " << p->getArea() << endl;
		delete  p; // 단일 객체 반환 포인
		
	}
	return 0;
}