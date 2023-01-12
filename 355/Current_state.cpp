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
	cout << "�����(� ���������): ";
	cin >> charge;
	cout << "��������� ������(��): ";
	cin >> memory;
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