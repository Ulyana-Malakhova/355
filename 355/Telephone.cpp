#include "Telephone.h"
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

Telephone::Telephone(Current_state current_state, Dimensions dimensions, System_t system_t, Screen screen, General_data general_data) {
	this->current_state = current_state;
	this->dimensions = dimensions;
	this->system_t = system_t;
	this->screen = screen;
	this->general_data = general_data;
}
Telephone::Telephone(Current_state current_state) {
	this->current_state = current_state;
}
Telephone::Telephone() {

}
Telephone::~Telephone() {

}
void Telephone::read() {
	current_state.read();
	dimensions.read();
	system_t.read();
	screen.read();
	general_data.read();
}
void Telephone::display() {
	current_state.display();
	dimensions.display();
	system_t.display();
	screen.display();
	general_data.display();
}
void Telephone::zaryad() {
	cout << "������� ����� ��������� ������ �� ��������?";
	cin >> current_state.charge;
}
void Telephone::change() {
	int i, t, j, k;
	cout << "��������� � ������� ������ ������� �:" << endl << "1.���������� ��������� ����� ������" << endl << "2.���������� ������ ����������" << endl;
	cin >> i;
	if (i == 1) {
		cout << "1.����� ������ ������ � �������" << endl << "2.����� ������ ������� �� ��������" << endl;
		cin >> j;
		cout << "����� ����� ������ � �����?";
		cin >> k;
		if (j == 1) {
			if (system_t.card == "no") {
				current_state.memory += k;
				system_t.card = "yes";
			}
			else
				cout << "����� ��� ��� ��������� � ��������, ��� ���������� � ��� �������" << endl;
		}
		if (j == 2) {
			if (system_t.card == "yes") {
				current_state.memory -= k;
				system_t.card = "no";
			}
			else
				cout << "����� ��� ��� � ��������, ��� ���������� � ��� �������" << endl;
		}
	}
	if (i == 2) {
		cout << "1.� ������� ��������� ����������" << endl << "2.�� �������� ������� ����������" << endl;
		cin >> j;
		cout << "����� ����� ������ �������� ��� �������?";
		cin >> k;
		if (j == 1) {
			current_state.memory -= k;
		}
		if (j == 2) {
			current_state.memory += k;
		}
	}
}