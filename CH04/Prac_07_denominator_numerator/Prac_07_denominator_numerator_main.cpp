#include <iostream>
using namespace std;
class Fraction {
private:
	int m_numerator; //멤버변수, 분자
	int m_denominator; //멤버변수, 분모
public:
	Fraction() {
		//기본생성자
		m_numerator = 0; // 분자
		m_denominator = 1; // 분모
	}
	~Fraction() {
		cout << "분자 반환 " << m_numerator << endl;
		cout << "분모 반환 " << m_denominator << endl;
	}
	int getNumerator() { return m_numerator; }
	int getDenominator() { return m_denominator; }
	double getValue() { return m_numerator / m_denominator;  }
};


// fraction : 분수 
int main(void)
{
	Fraction frac;
	//  분자, 분모
	cout << frac.getNumerator() << "/ " << frac.getDenominator() << endl; 
	cout << frac.getValue() << endl; 

	// new를 통한 동적생성을 안했으므로 힙으로부터 메모리를 반환할 필요가 없다. 
	return 0;
}