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
	cout << "������ ���� radius = " << radius << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}
int main(void) {
	Circle* p, * q; // Circle ��ü�� ���� �����ߴµ� �ٽ� ��ü�� �����Ѵٰ�? 
	p = new Circle; 
	q = new Circle(30);

	cout << p->getArea() << endl <<q->getArea() << endl;
	delete p;
	delete q;
	// ������ ������ ���� ���� ���ϴ� ������� delete ���� 
	return 0; 
}