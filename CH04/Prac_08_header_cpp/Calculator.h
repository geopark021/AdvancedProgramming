#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H
// Ŭ������ ����� �� ��� 
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