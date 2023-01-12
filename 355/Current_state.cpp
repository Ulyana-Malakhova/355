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
	cout << "Заряд(в процентах): ";
	cin >> charge;
	cout << "Свободная память(Гб): ";
	cin >> memory;
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