#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
// 클래스의 선언부 만 기록 
class Calculator {
private:
	int a;
	int b;
	int result;
public:
	Calculator();
	~Calculator();
	void Add(int x, int y);
	void Substract(int x, int y);
	void ShowResult();
};
#endif