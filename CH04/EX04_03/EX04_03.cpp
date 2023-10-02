#include <iostream>

using namespace std; 

class Circle {
private:
	int radius; 
public:
	Circle() { radius = 1; }
	Circle(int r) { setRadius(r); }
	void setRadius(int r) { radius = r; }
	double getArea();
};

double Circle::getArea() {
	return 3.14 * 3.14 * radius; 
}
int main(void) {

	Circle circleArray[3] = { Circle(10), Circle(20), Circle(30) };// 첫번째 배열객체 생성, 


	for (int i = 0; i < 3; i ++)
	{
		cout << "Circle" << i << "의 면적은 " << circleArray[i].getArea() << endl; 
	}
	return 0;


}