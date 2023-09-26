#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Calculator {
public:
	string buf; //����ڷκ��� �Է¹��� ���ڿ��� ������
	int operand1, operand2; // ����ڷκ��� �Է¹޴� �ǿ����� 2��
	char operation; // + - * / % ������ ���� 
	int plus(); // ���ϱ�
	int substract(); // ���� 
	int multiply();	// ���ϱ�
	int divide();	// �� ������
	int modulo();	// ������ ������
	void extractOperand();	// �ǿ����� ����
	void selectOperation(); // ������ ��ȣ ȣ�� ���ϴ� �Լ� 
	Calculator(); // ������
};
Calculator::Calculator() { // ������ ���� �� :: ���� ���� ������ ���� 
	cout << "^ ";
	getline(cin, buf);
	extractOperand(); // �ǿ�����, ������ ����
};
// �Է¹��� ������ �ǿ�����, ������ �����Լ�
void Calculator::extractOperand() {
	char delimitChar = ' '; // ����
	string temp;	// ���ڿ����� ���� ���� ������ ��� ������ ������ ���� 
	istringstream iss(buf); // ����ڷκ��� �Է¹��� ���ڿ��� ����� buf���� ���ڿ� �Է½�Ʈ���� �����Ѵ�. �� �� iss�� ���� buf ���ڿ����� �����͸� ���� �� �ִ�. getline���� ���� �������� ���ڿ��� ������.
	getline(iss, temp, delimitChar); // ù �ǿ�����(����)�� ������ ����
	operand1 = stoi(temp); // ���ڿ��� int ������ ��ȯ <string> ��� ������ �Լ� 
	operation = iss.get(); // �����ڸ� ������ ����. �����ڴ� char Ÿ���̹Ƿ� get()�Լ� �̿�
	getline(iss, temp, delimitChar);

	getline(iss, temp, delimitChar); // �ι�° �ǿ�����(����)�� ������ ����
	operand2 = stoi(temp); // ���ڿ��� int ������ ��ȯ <string> ��� ������ �Լ� 
	selectOperation();	// operation ������ ����� operation ��ȣ�� �Ǻ��ϱ� 
	return;
};
void Calculator::selectOperation() // ������ ��ȣ�� �´� �Լ� ȣ��
{
	if (operation == '+') { cout << buf << " = " << plus() << endl; }
	else if (operation == '-') { cout << buf << " = " << substract() << endl; }
	else if (operation == '*') { cout << buf << " = " << multiply() << endl; }
	else if (operation == '/') { cout << buf << " = " << divide() << endl; }
	else if (operation == '%') { cout << buf << " = " << modulo() << endl; }
	else { cout << "Error: �����ڰ� �߸� ����Ǿ����ϴ�. " << endl; }
	return;
}
// ����
int Calculator::plus() { return operand1 + operand2; }
// ����
int Calculator::substract() { return operand1 - operand2; }
// ����
int Calculator::multiply() { return operand1 * operand2; }
// �� ������ 
int Calculator::divide() { return (operand1 / operand2); }
// ������ ���� -������
int Calculator::modulo() { return (operand1 % operand2); }
int main(void)
{        // ��ü 1�� �������� ������ ������ �ݺ�
	while (1) { Calculator cal; }
	return 0;
}