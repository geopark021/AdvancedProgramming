#include <iostream>
using namespace std;

// �Է�: ������ ������
// - ���� �Է½� ���α׷� ����
// - circle ��ü ���� ����
// ���: ���� 
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
	int radius;
	while (true) {
		cout << "������ �������� �Է��ϼ���>> ";
		cin >> radius;

		if (radius < 0) {
			cout << "������ �Է��߽��ϴ�. ���α׷��� �����մϴ�. ";
			break; // while�� ����
			
		}
		Circle* p = new Circle(radius); // ��ü ���� ���� �� �ʱ�ȭ   
		cout << "���� : " << p->getArea() << endl;
		delete  p; // ���� ��ü ��ȯ ����
		
	}
	return 0;
}