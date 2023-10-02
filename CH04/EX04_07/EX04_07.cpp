#include <iostream>

using namespace std;
class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int r);
	~Circle();
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * 3.14 * radius; }
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
	Circle* p, * q; // Circle 객체를 동적 생성했는데 다시 객체를 생성한다고? 
	p = new Circle; 
	q = new Circle(30);

	cout << p->getArea() << endl <<q->getArea() << endl;
	delete p;
	delete q;
	// 생성한 순서에 관계 없이 원하는 순서대로 delete 가능 
	return 0; 
}