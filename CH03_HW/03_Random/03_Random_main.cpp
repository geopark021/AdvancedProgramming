#include <iostream>
#include <cstdlib> // rand(), srand() 
#include <ctime> // time() 
using namespace std;

class Random {
public:
	int next();	// Ư�� �����ȿ� ���ϴ� ���� int ���ڸ� ��ȯ 
	int nextInRange(int start, int end);
	Random(unsigned seed);
};

// * �Ű������� ���� ������ ��� - ���ڷ� ����ð��� �޴´� 
Random::Random(unsigned seed ){
	srand(seed); // �����ڿ��� �õ� ���� 
	// ��ü ���� �ٸ� �õ尪�� ������, main�Լ������� ������ �õ庸�� ���� ��ü���� �������� �������� ���� �� �ִ�. 
}

// 0���� 32767 ������ ���� ���� ��ȯ
int Random::next() {
	
	int num = rand(); // ���� ���� ���� 
	return num;
}


// �־��� ���������� ���� ���� ��ȯ 
int Random::nextInRange(int start, int end) {
	
	int range = end - start; // 80 - 20 = 60 
	int num = rand() % range + start;

	return num;
}



int main(void) {
	Random random_num(time(NULL));

	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 15��--" << endl;
	for (int i = 0; i < 15; i++) {
		int n = random_num.next();  // 0d���� RAND_MAX(326767) ������ ������ ����
		cout << n << ' '; 
	}

	cout << endl << endl << " --20���� " << "80������ ���� ���� 23�� -- " << endl;
	for (int i = 0; i < 23; i++) {
		int n = random_num.nextInRange(20, 80); // 20���� 80������ ������ ���� 
		cout << n << ' ';
	}
	cout << endl << endl;
	return 0;
}