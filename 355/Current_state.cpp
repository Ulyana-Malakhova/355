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
	cout << "Введем информацию о нынешнем состоянии" << endl;
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "Заряд(в процентах): ";
		cin >> charge;
		try {
			if (charge < 0)
				throw '0';
			if (charge > 100)
				throw 0;
		}
		catch (char c) {
			p = 0;
			cout << "Процент заряда меньше 0. Попробуйте ввести информацию заново" << endl;
		}
		catch (int c) {
			p = 0;
			cout << "Процент заряда больше 100. Попробуйте ввести информацию заново" << endl;
		}
	}
	p = 0;
	while (p == 0) {
		p = 1;
		cout << "Свободная память(Гб): ";
		cin >> memory;
		try {
			if (memory < 0)
				throw 0;
		}
		catch (int c) {
			p = 0;
			cout << "Объем памяти меньше 0. Попробуйте ввести информацию заново" << endl;
		}
	}
	cout << "Интернет: ";
	cin >> internet;
}
void Current_state::display() {
	cout << endl;
	cout << "Нынешнее состояние:" << endl;
	cout << "-заряд:" << charge << endl;
	cout << "-свободная память:" << memory << endl;
	cout << "-интернет:" << internet << endl;
}