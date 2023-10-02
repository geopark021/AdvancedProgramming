#include <iostream>
using namespace std;

class Box {
private:
	double length; // ���� ����
	double breadth;  // �ʺ�
	double height; // ���� 
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
// ��ü ������ ��� ����
int main(void) {
	Box  Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);

	// ��ü �̸����� ����Լ� ����
	cout << "Volume of Box1: " << Box1.Volume() << endl;
	cout << "Volume of Box2: " << Box2.Volume() << endl;

	// ��ü �����ͷ� ����Լ� ���� 

	Box* p1 = &Box1;
	Box* p2 = &Box2;
	cout << "Volume of Box1: " << p1->Volume() << endl;
	cout << "Volume of Box2: " << p2->Volume() << endl;

	return 0; 
}