#include <iostream>
#include <string>
// p 11 객체 이름으로 접근하기 
// 객체 배열 생성 - 각 원소가 객체를 생성한다.
// 객체 배열은 생성자에 매개변수를 둘 수 없음
using namespace std;
class TestResult {
private:
	int num, score; // 학번, 점수 - 동일한 자료형은 콤마로 한번에 작성
	string name; // 이름
public:
	TestResult();
	void printAll();
	void setInfo(int _score, int _num, string _name);
};

TestResult::TestResult() {

}
void TestResult::setInfo(int _score, int _num, string _name) {
	score = _score;
	num = _num;
	name = _name;
	return;
}

void TestResult::printAll()
{
	// * this 는 주소를 저장하나? Yes instance pointer

	// this 없이 멤버 변수만 적은 경우. 
	cout << "이름 : " << name << endl;
	cout << "점수 : " << score << endl;
	cout << num << endl; 
	return;
}
int main(void)
{
	TestResult student[3]; //시험결과 3명 학생 객체 배열 생성
	int num, score; // 학번, 점수
	string name; // 학생이름

	for (int i = 0; i <3; i++)
	{
		cout << "학번 :";
		cin >> num;
		cout << "이름: ";
		cin >> name;
		cout << "점수: ";
		cin >> score;
		// 한번에 인자로 전달해 저장 
		student[i].setInfo(score, num, name);

	}
	// (1) 객체 이름으로 멤버함수 접근

	for (int i = 0; i < 3; i++)
	{
		student[i].printAll();
	}

	// (2) 객체 포인터로 멤버 접근
	TestResult* pstudent = student;
	for (int i = 0; i < 3; i++)
	{
		//pstudent[i]->printAll(); // student[i]-> printAll()은 student[i]는 포인터 변수 아님. 출력방식 정의되지 않아 출력불가 
		pstudent->printAll();  // -> 연산자는 앞에 포인터 변수가 와야 사용가능 
		pstudent++; // 포인터 변수가 가리키는 원소를 옆으로 하나씩 이동 
		//(&student[i])->printAll(); // student[i]-> printAll()은 student[i]는 포인터 변수 아님. 출력방식 정의되지 않아 출력불가 
	}
	return 0;
}