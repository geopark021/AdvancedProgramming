#include <iostream>
#include <cstdlib> // rand(), srand() 
#include <ctime> // time() 
using namespace std;

class Random {
public:
	int next();	// 특정 범위안에 속하는 랜덤 int 숫자를 반환 
	int nextInRange(int start, int end);
	Random(unsigned seed);
};

// * 매개변수를 가진 생성자 사용 - 인자로 현재시각을 받는다 
Random::Random(unsigned seed ){
	srand(seed); // 생성자에서 시드 설정 
	// 객체 마다 다른 시드값을 설정해, main함수내에서 생성한 시드보다 각각 객체별로 독립적인 난수들을 얻을 수 있다. 
}

// 0부터 32767 범위의 랜덤 숫자 반환
int Random::next() {
	
	int num = rand(); // 랜덤 숫자 생성 
	return num;
}


// 주어진 범위에서의 랜덤 숫자 반환 
int Random::nextInRange(int start, int end) {
	
	int range = end - start; // 80 - 20 = 60 
	int num = rand() % range + start;

	return num;
}



int main(void) {
	Random random_num(time(NULL));

	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 15개--" << endl;
	for (int i = 0; i < 15; i++) {
		int n = random_num.next();  // 0d에서 RAND_MAX(326767) 사이의 랜덤한 정수
		cout << n << ' '; 
	}

	cout << endl << endl << " --20에서 " << "80까지의 랜덤 정수 23개 -- " << endl;
	for (int i = 0; i < 23; i++) {
		int n = random_num.nextInRange(20, 80); // 20에서 80사이의 랜덤한 정수 
		cout << n << ' ';
	}
	cout << endl << endl;
	return 0;
}