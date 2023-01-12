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
	int p = 0;
	while (p == 0) {
		p = 1;
		cout << "������� ����� ��������� ������ �� ��������?";
		cin >> current_state.charge;
		try {
			if (current_state.charge < 0)
				throw '0';
			if (current_state.charge > 100)
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
}
void Telephone::change() {
	int i, t, j, k, p = 0;
	while (p == 0) {
		p = 1;
		cout << "��������� � ������� ������ ������� �:" << endl << "1.���������� ��������� ����� ������" << endl << "2.���������� ������ ����������" << endl;
		cin >> i;
		try {
			if (i < 1)
				throw '0';
			if (i > 2)
				throw 0;
		}
		catch (...) {
			p = 0;
			cout << "������������ ������, ���������� ������� �������� ������" << endl;
		}
	}
	if (i == 1) {
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "1.����� ������ ������ � �������" << endl << "2.����� ������ ������� �� ��������" << endl;
			cin >> j;
			try {
				if (j < 1)
					throw '0';
				if (j > 2)
					throw 0;
			}
			catch (...) {
				p = 0;
				cout << "������������ ������, ���������� ������� �������� ������" << endl;
			}
		}
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "����� ����� ������ � �����?";
			cin >> k;
			try {
				if (k < 0)
					throw '0';
			}
			catch (...) {
				p = 0;
				cout << "������������ ������, ���������� ������ ���������� ������" << endl;
			}
		}
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
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "1.� ������� ��������� ����������" << endl << "2.�� �������� ������� ����������" << endl;
			cin >> j;
			try {
				if (j < 1)
					throw '0';
				if (j > 2)
					throw 0;
			}
			catch (...) {
				p = 0;
				cout << "������������ ������, ���������� ������� �������� ������" << endl;
			}
		}
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "����� ����� ������ �������� ��� �������?";
			cin >> k;
			try {
				if (k < 0)
					throw '0';
			}
			catch (...) {
				p = 0;
				cout << "������������ ������, ���������� ������ ���������� ������" << endl;
			}
		}
		if (j == 1) {
			current_state.memory -= k;
		}
		if (j == 2) {
			current_state.memory += k;
		}
	}
}