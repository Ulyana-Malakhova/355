#include "System_t.h"
#include <iostream>
#include <string.h>
using namespace std;

System_t::System_t(string opersystem, int internalm, string card) {
	this->opersystem = opersystem;
	this->internalm = internalm;
	this->card = card;
}
System_t::System_t(string opersystem) {
	this->opersystem = opersystem;
	internalm = 0;
	card = "card";
}
System_t::System_t() {
	opersystem = "opersystem";
	internalm = 0;
	card = "card";
}
System_t::~System_t() {

}
void System_t::read() {
	cout << "������ ���������� � �������" << endl;
	cout << "������������ �������: ";
	cin >> opersystem;
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "���������� ������(��): ";
		cin >> internalm;
		try {
			if (internalm < 0)
				throw '0';
		}
		catch (char c) {
			p = 0;
			cout << "������������ ������, ���������� ������ ���������� ������" << endl;
		}
	}
	cout << "����� ������(yes/no): ";
	cin >> card;
}
void System_t::display() {
	cout << endl;
	cout << "�������:" << endl;
	cout << "-������������ �������:" << opersystem << endl;
	cout << "-���������� ������:" << internalm << endl;
	cout << "-����� ������:" << card << endl;
}