#include "Screen.h"
#include <iostream>
#include <string.h>
using namespace std;

Screen::Screen(double diagonal, string pixel) {
	this->diagonal = diagonal;
	this->pixel = pixel;
}
Screen::Screen(double diagonal) {
	this->diagonal = diagonal;
	pixel = "pixel";
}
Screen::Screen() {
	diagonal = 0;
	pixel = "pixel";
}
Screen::~Screen() {

}
void Screen::read() {
	cout << "������ ���������� �� ������" << endl;
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "���������(����): ";
		cin >> diagonal;
		try {
			if (diagonal < 0)
				throw '0';
		}
		catch (char c) {
			p = 0;
			cout << "������������ ������, ���������� ������ ���������� ������" << endl;
		}
	}
	cout << "��������� ��������(ppi): ";
	cin >> pixel;
}
void Screen::display() {
	cout << endl;
	cout << "���������� �� ������:" << endl;
	cout << "-���������:" << diagonal << endl;
	cout << "-��������� ��������:" << pixel << endl;
}