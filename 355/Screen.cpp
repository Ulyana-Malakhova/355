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
	cout << "Введем информацию об экране" << endl;
	cout << "Диагональ(дюйм): ";
	cin >> diagonal;
	cout << "Плотность пикселей(ppi): ";
	cin >> pixel;
}
void Screen::display() {
	cout << endl;
	cout << "Информация об экране:" << endl;
	cout << "-диагональ:" << diagonal << endl;
	cout << "-плотность пикселей:" << pixel << endl;
}