#include <iostream>
#include <string>
using namespace std;
class Count {	// 클래스 선언부 : 클래스 재사용성 목적
public:
	string str; // 입력받은 문자열
	int capitalNumber;	// 대문자 개수
	int smallLetterNumber; // 소문자 개수 
	int numNumber; // 숫자 개수
	int strLength; // 문자열 길이 
	int getCapitalNumber(); // 대문자 개수 세기
	int getSmallLetterNumber(); // 소문자 개수 세기
	int getNumNumber(); // 숫자 개수 세기
	int getStrLength(); // 문자열 개수세기
	Count();
};
// 생성자 : 초기화
Count::Count() : numNumber(0), strLength(0), capitalNumber(0), smallLetterNumber(0) {
	// 숫자 개수, 문자열 개수, 대문자 개수, 소문자 개수 멤버변수 0으로 초기화
	cout << "문자열 입력 : ";
	getline(cin, str);  // string 헤더파일의 getline 전역함수 이용
}

// 문자열 길이 구하는 함수
int Count::getStrLength() {	// 클래스 구현부 범위지정연산자 사용::

	strLength = str.length(); // length()는 <string>  헤더파일 안에 있음. null포함 개수 반환 
	cout << "문자열 길이: " << strLength << endl;
	return strLength; // 문자열 길이 반환
}
// 대문자 개수 구함 
int Count::getCapitalNumber() {
	for (int i = 0; i < str.length(); i++) { // 입력받은 전체 문자열의 개수만큼 반복
		if (str[i] >= 65 && str[i] <= 90) { // 대문자 A아스키코드 65, Z 90 범위에 있으면 대문자 인정
			capitalNumber++; // 대문자 개수 1씩 누적해 개수를 센다.
		}
	}
	cout << "알파벳 대문자의 개수: " << capitalNumber << endl;
	return capitalNumber; // 대문자 개수 반환
}
// 소문자 개수 구함
int Count::getSmallLetterNumber() {
	for (int i = 0; i < str.length(); i++) { // 입력받은 전체 문자열의 개수만큼 반복
		if (str[i] >= 97 && str[i] <= 122) { // 소문자 a 아스키코드 97, z 122 범위에 있는 아스키 코드이면 소문자 개수를 누적시킨다. 
			smallLetterNumber++;
		}
	}
	cout << "알파벳 소문자의 개수: " << smallLetterNumber << endl;
	return smallLetterNumber; // 소문자 개수 반환
}
// 숫자 개수 구함 
int Count::getNumNumber() {
	for (int i = 0; i < str.length(); i++) { // 입력받은 전체 문자열의 개수만큼 반복 
		if (str[i] >= 48 && str[i] <= 57) { //  숫자0~9의 아스키코드 범위 48~57
			numNumber++; // 숫자 개수 누적
		}
	}
	cout << "숫자의 개수 : " << numNumber << endl;
	return numNumber; // 숫자 개수 반환
}
int main(void) {
	Count myInput; // 객체 생성
	myInput.getCapitalNumber(); // 대문자 개수세기 함수 호출
	myInput.getSmallLetterNumber(); // 소문자 개수세기 함수 호출
	myInput.getNumNumber(); // 숫자 개수 세기 함수 호출
	myInput.getStrLength(); // 문자열 길이 세기 함수 호출
	return 0;
}