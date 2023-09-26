#include <iostream>
#include <string>
using namespace std;

class YoutubeSize {

public:
	int width;	// �ʺ�
	int height;	// ����
	YoutubeSize();
	void ResizeWindow(int _width, int _height);	// �ػ� ���� �Լ� 
	int getWidth();	// �ʺ� ��ȯ �Լ�
	int getHeight(); // ���� ��ȯ �Լ�
};

// ������ - ������� �ʱ�ȭ
YoutubeSize::YoutubeSize(): width(0), height(0) {}

// ��������� �����ؼ� ���� �����Ѵ�. 
void YoutubeSize::ResizeWindow(int _width, int _height)
{
	float ratio = (float)_width /_height; // �ʺ�� ������ ����

	// 16: 9 ���� 1.7�� �� �ػ� ���� 
	if ((ratio >= 1.7) && (ratio < 1.8)) {
		if (_height == 480) {
			_height = 600;
		}
		width = _width;
		height = _height;
	}
	
	return; 
}
// �ʺ� ��ȯ 
inline int YoutubeSize::getWidth() {
	return this->width;
}

// ���� ��ȯ
inline int YoutubeSize::getHeight() {
	return this->height;
}
int main(void)
{
	YoutubeSize mainWindow; // ��ü ����
	mainWindow.ResizeWindow(854, 480);
	cout<< mainWindow.getWidth() << "x "  << mainWindow.getHeight()<< endl;

	mainWindow.ResizeWindow(1920, 1080);
	cout << mainWindow.getWidth() << " x " << mainWindow.getHeight() << endl;

	mainWindow.ResizeWindow(3840, 2160);
	cout << mainWindow.getWidth() << " x " << mainWindow.getHeight() << endl;

	return 0;
}