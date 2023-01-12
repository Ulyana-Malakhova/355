#include "Current_state.h"
#include <iostream>
#include <string.h>
using namespace std;

Current_state::Current_state(int charge, int memory, string internet) {
	this->charge = charge;
	this->memory = memory;
	this->internet = internet;
}
Current_state::Current_state(int charge) {
	this->charge = charge;
	memory = 0;
	internet = "internet";
}
Current_state::Current_state() {
	charge = 0;
	memory = 0;
	internet = "internet";
}
Current_state::~Current_state() {

}
void Current_state::read() {
	cout << "������ ���������� � �������� ���������" << endl;
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "�����(� ���������): ";
		cin >> charge;
		try {
			if (charge < 0)
				throw '0';
			if (charge > 100)
				throw 0;
		}
		catch (char c) {
			p = 0;
			cout << "������� ������ ������ 0. ���������� ������ ���������� ������" << endl;
		}
		catch (int c) {
			p = 0;
			cout << "������� ������ ������ 100. ���������� ������ ���������� ������" << endl;
		}
	}
	p = 0;
	while (p == 0) {
		p = 1;
		cout << "��������� ������(��): ";
		cin >> memory;
		try {
			if (memory < 0)
				throw 0;
		}
		catch (int c) {
			p = 0;
			cout << "����� ������ ������ 0. ���������� ������ ���������� ������" << endl;
		}
	}
	cout << "��������: ";
	cin >> internet;
}
void Current_state::display() {
	cout << endl;
	cout << "�������� ���������:" << endl;
	cout << "-�����:" << charge << endl;
	cout << "-��������� ������:" << memory << endl;
	cout << "-��������:" << internet << endl;
}