#include <iostream>
using namespace std;
class Fraction {
private:
	int m_numerator; //�������, ����
	int m_denominator; //�������, �и�
public:
	Fraction() {
		//�⺻������
		m_numerator = 0; // ����
		m_denominator = 1; // �и�
	}
	~Fraction() {
		cout << "���� ��ȯ " << m_numerator << endl;
		cout << "�и� ��ȯ " << m_denominator << endl;
	}
	int getNumerator() { return m_numerator; }
	int getDenominator() { return m_denominator; }
	double getValue() { return m_numerator / m_denominator;  }
};


// fraction : �м� 
int main(void)
{
	Fraction frac;
	//  ����, �и�
	cout << frac.getNumerator() << "/ " << frac.getDenominator() << endl; 
	cout << frac.getValue() << endl; 

	// new�� ���� ���������� �������Ƿ� �����κ��� �޸𸮸� ��ȯ�� �ʿ䰡 ����. 
	return 0;
}