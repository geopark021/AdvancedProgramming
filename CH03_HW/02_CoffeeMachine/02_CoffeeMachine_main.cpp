#include <iostream>
using namespace std;

class CoffeeMachine {

public:
	int coffee, water, sugar; // 커피, 물, 설탕 
	CoffeeMachine(int _coffee, int _water, int _sugar);
	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee(); 
	void fill();
};
// 생성자 - 처음 입력받은 값으로 멤버변수 초기화 
CoffeeMachine::CoffeeMachine(int _coffee, int _water, int _sugar) {
	// 예외 처리- 입력받은 값이 0이거나 음수일때 출력
	if (_coffee <= 0 || _water <= 0 || _sugar <= 0) {
		cout << "입력한 값은 0이거나 음수입니다. 잘못 입력했습니다. " << endl;
	}
	coffee = _coffee;
	water = _water;
	sugar = _sugar;
}

// 커피머신 상태 보여주는 함수 
void CoffeeMachine::show() {
	cout << "커피 머신 상티, 커피 :" << coffee << " 물 : " << water << " 설탕 : " << sugar << endl;
	return;
}

// 커피머신 재고 모두 10으로 채우는 함수
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}

// 에스프레소 마시기 함수 호출 
void CoffeeMachine::drinkEspresso() {
	// 재료 없는 경우 함수 종료 
	if ((coffee >= 1) && (water <= 0)) { // 두 재료중 한 재료가 부족한 경우
		cout << "물 재료가 부족하여 에스프레소를 마실 수 없습니다." << endl;
		return;
	} else if ((coffee <= 0) && (water >= 1)) {
		cout << "커피 재료가 부족하여 에스프레소를 마실 수 없습니다." << endl;
		return;
	} else if ((coffee <= 0) && (water <= 0)) {// 두 재료 모두 없으면 함수 종료
		cout << "커피, 물 재료 모두 부족하여 에스프레소를 마실 수 없습니다." << endl;
		return;
	}

	// 재료가 있는 경우
	if ((coffee >= 1) && (water >= 1)) {
		coffee -= 1;
		water -= 1;
	}
	return;
}


// 아메리카노 마시기 함수 호출 
void CoffeeMachine::drinkAmericano() {

	// 재료 없는 경우 함수 종료 
	if ((coffee >= 1) && (water <= 1)) { // 두 재료중 한 재료가 부족한 경우
		cout << "물 재료가 부족하여 아메리카노를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee <= 0) && (water >= 2)) {
		cout << "커피 재료가 부족하여 아메리카노를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1)) {// 두 재료 모두 없으면 함수 종료
		cout << "커피, 물 재료 모두 부족하여 아메리카노를 마실 수 없습니다." << endl;
		return;
	}

	// 재료가 있는 경우
	if ((coffee >= 1) && (water >= 2)) {
		coffee -= 1;
		water -= 2;
	}
	return;

}

// 설탕 커피 마시기 함수 호출 
void CoffeeMachine::drinkSugarCoffee() {

	// 재료 없는 경우 함수 종료 
	if ((coffee >= 1) && (water <= 1) && (sugar>=1)) { // 3개 재료중 1 재료가 부족한 경우
		cout << "물 재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	} 
	else if ((coffee <= 0) && (water >= 2) && (sugar>=1)) {
		cout << "커피 재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	} 
	else if ((coffee >= 1) && (water >= 2) && (sugar <= 0)) {
		cout << "설탕 재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1) && (sugar >= 1)) { // 3개 재료 중 2 재료 부족한 경우
		cout << "커피, 물 재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee <= 0) && (water >= 2) && (sugar <= 0)) {
		cout << "커피, 설탕재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee >= 1) && (water <= 1) && (sugar <= 0)) {
		cout << "물, 설탕재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	}
	else if ((coffee <= 0) && (water <= 1) && (sugar <= 0)) {
		cout << "커피, 물, 설탕 모든 재료가 부족하여 설탕커피를 마실 수 없습니다." << endl;
		return;
	}
	

	// 재료가 있는 경우
	if ((coffee >= 1) && (water >= 2) && (sugar >=1)) {
		coffee -= 1;
		water -= 2;
		sugar -=1;
	}
	return;
}

int main(void)
{
	// 객체 생성
	CoffeeMachine java(7, 17, 5);
	java.drinkEspresso(); // 에스프레소 함수 호출
	java.show(); // 재고 보여주기 

	java.drinkAmericano(); // 아메리카노 함수 호출
	java.show(); // 재고 보여주기 
	
	java.drinkSugarCoffee(); // 설탕커피 함수 추출
	java.show(); // 재고 보여주기
	
	java.fill(); // 재고 모두 10으로 채우기 
	java.show(); // 재고 보여주기 
	return 0;
}