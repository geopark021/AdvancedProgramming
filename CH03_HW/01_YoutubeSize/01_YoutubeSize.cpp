#include <iostream>
#include <string>
using namespace std;

class YoutubeSize {

public:
	int width;	// 너비
	int height;	// 높이
	YoutubeSize();
	void ResizeWindow(int _width, int _height);	// 해상도 조절 함수 
	int getWidth();	// 너비 반환 함수
	int getHeight(); // 높이 반환 함수
};

// 생성자 - 멤버변수 초기화
YoutubeSize::YoutubeSize(): width(0), height(0) {}

// 멤버변수에 접근해서 값을 변경한다. 
void YoutubeSize::ResizeWindow(int _width, int _height)
{
	float ratio = (float)_width /_height; // 너비와 높이의 비율

	// 16: 9 비율 1.7일 때 해상도 저장 
	if ((ratio >= 1.7) && (ratio < 1.8)) {
		if (_height == 480) {
			_height = 600;
		}
		width = _width;
		height = _height;
	}
	
	return; 
}
// 너비 반환 
inline int YoutubeSize::getWidth() {
	return this->width;
}

// 높이 반환
inline int YoutubeSize::getHeight() {
	return this->height;
}
int main(void)
{
	YoutubeSize mainWindow; // 객체 생성
	mainWindow.ResizeWindow(854, 480);
	cout<< mainWindow.getWidth() << "x "  << mainWindow.getHeight()<< endl;

	mainWindow.ResizeWindow(1920, 1080);
	cout << mainWindow.getWidth() << " x " << mainWindow.getHeight() << endl;

	mainWindow.ResizeWindow(3840, 2160);
	cout << mainWindow.getWidth() << " x " << mainWindow.getHeight() << endl;

	return 0;
}