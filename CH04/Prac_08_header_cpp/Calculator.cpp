#include <iostream>
#include "Calculator.h"

using namespace std;

Calculator::Calculator() {
	a = 0;
	b = 0;
	result = 0;
	cout << "���� ����" << endl;
}
Calculator::~Calculator() {}
void Calculator::Add(int x, int y) {
	a = x;
	b = y;
	result = a + b;
}
void Calculator::Substract(int x, int y) {
	a = x;
	b = y;
	result = a - b;
}
void Calculator::ShowResult() {
	cout << "result : " << result << endl; 
}

