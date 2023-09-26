#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Calculator {
public:
	string buf; //사용자로부터 입력받을 문자열을 저장함
	int operand1, operand2; // 사용자로부터 입력받는 피연산자 2개
	char operation; // + - * / % 연산자 저장 
	int plus(); // 더하기
	int substract(); // 빼기 
	int multiply();	// 곱하기
	int divide();	// 몫 연산자
	int modulo();	// 나머지 연산자
	void extractOperand();	// 피연산자 추출
	void selectOperation(); // 연산자 기호 호출 정하는 함수 
	Calculator(); // 생성자
};
Calculator::Calculator() { // 생성자 구현 시 :: 범위 지정 연산자 주의 
	cout << "^ ";
	getline(cin, buf);
	extractOperand(); // 피연산자, 연산자 추출
};
// 입력받은 값에서 피연산자, 연산자 추출함수
void Calculator::extractOperand() {
	char delimitChar = ' '; // 공백
	string temp;	// 문자열에서 값을 공백 단위로 잠시 추출해 저장할 변수 
	istringstream iss(buf); // 사용자로부터 입력받은 문자열이 저장된 buf에서 문자열 입력스트림을 생성한다. 그 후 iss를 통해 buf 문자열에서 데이터를 읽을 수 있다. getline으로 공백 기준으로 문자열을 추출함.
	getline(iss, temp, delimitChar); // 첫 피연산자(숫자)를 가져와 저장
	operand1 = stoi(temp); // 문자열을 int 형으로 변환 <string> 헤더 파일의 함수 
	operation = iss.get(); // 연산자를 가져와 저장. 연산자는 char 타입이므로 get()함수 이용
	getline(iss, temp, delimitChar);

	getline(iss, temp, delimitChar); // 두번째 피연산자(숫자)를 가져와 저장
	operand2 = stoi(temp); // 문자열을 int 형으로 변환 <string> 헤더 파일의 함수 
	selectOperation();	// operation 변수에 저장된 operation 기호를 판별하기 
	return;
};
void Calculator::selectOperation() // 연산자 기호에 맞는 함수 호출
{
	if (operation == '+') { cout << buf << " = " << plus() << endl; }
	else if (operation == '-') { cout << buf << " = " << substract() << endl; }
	else if (operation == '*') { cout << buf << " = " << multiply() << endl; }
	else if (operation == '/') { cout << buf << " = " << divide() << endl; }
	else if (operation == '%') { cout << buf << " = " << modulo() << endl; }
	else { cout << "Error: 연산자가 잘못 저장되었습니다. " << endl; }
	return;
}
// 덧셈
int Calculator::plus() { return operand1 + operand2; }
// 뺄셈
int Calculator::substract() { return operand1 - operand2; }
// 곱셈
int Calculator::multiply() { return operand1 * operand2; }
// 몫 나누기 
int Calculator::divide() { return (operand1 / operand2); }
// 나머지 연산 -나누기
int Calculator::modulo() { return (operand1 % operand2); }
int main(void)
{        // 객체 1번 생성으로 연산을 무한정 반복
	while (1) { Calculator cal; }
	return 0;
}