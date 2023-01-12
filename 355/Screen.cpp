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
	cout << "���������(����): ";
	cin >> diagonal;
	cout << "��������� ��������(ppi): ";
	cin >> pixel;
}
void Screen::display() {
	cout << endl;
	cout << "���������� �� ������:" << endl;
	cout << "-���������:" << diagonal << endl;
	cout << "-��������� ��������:" << pixel << endl;
}