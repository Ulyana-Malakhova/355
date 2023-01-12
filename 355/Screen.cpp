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
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "Диагональ(дюйм): ";
		cin >> diagonal;
		try {
			if (diagonal < 0)
				throw '0';
		}
		catch (char c) {
			p = 0;
			cout << "Неправильные данные, попробуйте ввести информацию заново" << endl;
		}
	}
	cout << "Плотность пикселей(ppi): ";
	cin >> pixel;
}
void Screen::display() {
	cout << endl;
	cout << "Информация об экране:" << endl;
	cout << "-диагональ:" << diagonal << endl;
	cout << "-плотность пикселей:" << pixel << endl;
}