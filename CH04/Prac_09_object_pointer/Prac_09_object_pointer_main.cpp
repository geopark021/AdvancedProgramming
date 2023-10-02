#include <iostream>
using namespace std;

class Box {
private:
	double length; // 세로 길이
	double breadth;  // 너비
	double height; // 높이 
public:
	Box(double _length, double _breath, double _height){
		cout << "Constructor called. " << endl;
		length = _length;
		breadth = _breath;
		height = _height;
	}
	double Volume() {
		return length * breadth * height; 
	}
};
// 객체 포인터 사용 예시
int main(void) {
	Box  Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);

	// 객체 이름으로 멤버함수 접근
	cout << "Volume of Box1: " << Box1.Volume() << endl;
	cout << "Volume of Box2: " << Box2.Volume() << endl;

	// 객체 포인터로 멤버함수 접근 

	Box* p1 = &Box1;
	Box* p2 = &Box2;
	cout << "Volume of Box1: " << p1->Volume() << endl;
	cout << "Volume of Box2: " << p2->Volume() << endl;

	return 0; 
}