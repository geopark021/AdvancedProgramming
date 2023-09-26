#include <iostream>
using namespace std;

class CoffeeMachine {

public:
	int coffee, water, sugar; // Ŀ��, ��, ���� 
	CoffeeMachine(int _coffee, int _water, int _sugar);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee(); 
	void fill();
};
// ������ - ó�� �Է¹��� ������ ������� �ʱ�ȭ 
CoffeeMachine::CoffeeMachine(int _coffee, int _water, int _sugar) {
	// ���� ó��- �Է¹��� ���� 0�̰ų� �����϶� ���
	if (_coffee <= 0 || _water <= 0 || _sugar <= 0) {
		cout << "�Է��� ���� 0�̰ų� �����Դϴ�. �߸� �Է��߽��ϴ�. " << endl;
	}
	coffee = _coffee;
	water = _water;
	sugar = _sugar;
}

// Ŀ�Ǹӽ� ���� �����ִ� �Լ� 
void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ��Ƽ, Ŀ�� :" << coffee << " �� : " << water << " ���� : " << sugar << endl;
	return;
}

// Ŀ�Ǹӽ� ��� ��� 10���� ä��� �Լ�
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

// ���������� ���ñ� �Լ� ȣ�� 
void CoffeeMachine::drinkEspresso() {
	// ��� ���� ��� �Լ� ���� 
	if ((coffee >= 1) && (water <= 0)) { // �� ����� �� ��ᰡ ������ ���
		cout << "�� ��ᰡ �����Ͽ� ���������Ҹ� ���� �� �����ϴ�." << endl;
		return;
	} else if ((coffee <= 0) && (water >= 1)) {
		cout << "Ŀ�� ��ᰡ �����Ͽ� ���������Ҹ� ���� �� �����ϴ�." << endl;
		return;
	} else if ((coffee <= 0) && (water <= 0)) {// �� ��� ��� ������ �Լ� ����
		cout << "Ŀ��, �� ��� ��� �����Ͽ� ���������Ҹ� ���� �� �����ϴ�." << endl;
		return;
	}

	// ��ᰡ �ִ� ���
	if ((coffee >= 1) && (water >= 1)) {
		coffee -= 1;
		water -= 1;
	}
	return;
}


// �Ƹ޸�ī�� ���ñ� �Լ� ȣ�� 
void CoffeeMachine::drinkAmericano() {

	// ��� ���� ��� �Լ� ���� 
	if ((coffee >= 1) && (water <= 1)) { // �� ����� �� ��ᰡ ������ ���
		cout << "�� ��ᰡ �����Ͽ� �Ƹ޸�ī�븦 ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee <= 0) && (water >= 2)) {
		cout << "Ŀ�� ��ᰡ �����Ͽ� �Ƹ޸�ī�븦 ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1)) {// �� ��� ��� ������ �Լ� ����
		cout << "Ŀ��, �� ��� ��� �����Ͽ� �Ƹ޸�ī�븦 ���� �� �����ϴ�." << endl;
		return;
	}

	// ��ᰡ �ִ� ���
	if ((coffee >= 1) && (water >= 2)) {
		coffee -= 1;
		water -= 2;
	}
	return;

}

// ���� Ŀ�� ���ñ� �Լ� ȣ�� 
void CoffeeMachine::drinkSugarCoffee() {

	// ��� ���� ��� �Լ� ���� 
	if ((coffee >= 1) && (water <= 1) && (sugar>=1)) { // 3�� ����� 1 ��ᰡ ������ ���
		cout << "�� ��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	} 
	else if ((coffee <= 0) && (water >= 2) && (sugar>=1)) {
		cout << "Ŀ�� ��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	} 
	else if ((coffee >= 1) && (water >= 2) && (sugar <= 0)) {
		cout << "���� ��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1) && (sugar >= 1)) { // 3�� ��� �� 2 ��� ������ ���
		cout << "Ŀ��, �� ��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee <= 0) && (water >= 2) && (sugar <= 0)) {
		cout << "Ŀ��, ������ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee >= 1) && (water <= 1) && (sugar <= 0)) {
		cout << "��, ������ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1) && (sugar <= 0)) {
		cout << "Ŀ��, ��, ���� ��� ��ᰡ �����Ͽ� ����Ŀ�Ǹ� ���� �� �����ϴ�." << endl;
		return;
	}
	

	// ��ᰡ �ִ� ���
	if ((coffee >= 1) && (water >= 2) && (sugar >=1)) {
		coffee -= 1;
		water -= 2;
		sugar -=1;
	}
	return;
}

int main(void)
{
	// ��ü ����
	CoffeeMachine java(7, 17, 5);
	java.drinkEspresso(); // ���������� �Լ� ȣ��
	java.show(); // ��� �����ֱ� 

	java.drinkAmericano(); // �Ƹ޸�ī�� �Լ� ȣ��
	java.show(); // ��� �����ֱ� 
	
	java.drinkSugarCoffee(); // ����Ŀ�� �Լ� ����
	java.show(); // ��� �����ֱ�
	
	java.fill(); // ��� ��� 10���� ä��� 
	java.show(); // ��� �����ֱ� 
	return 0;
}