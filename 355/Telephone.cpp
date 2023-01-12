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
		cout << "Сколько стало процентов заряда на телефоне?";
		cin >> current_state.charge;
		try {
			if (current_state.charge < 0)
				throw '0';
			if (current_state.charge > 100)
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
}
void Telephone::change() {
	int i, t, j, k, p = 0;
	while (p == 0) {
		p = 1;
		cout << "Изменения с объемом памяти связаны с:" << endl << "1.Изменением состояния карты памяти" << endl << "2.Изменением объема информации" << endl;
		cin >> i;
		try {
			if (i < 1)
				throw '0';
			if (i > 2)
				throw 0;
		}
		catch (...) {
			p = 0;
			cout << "Неправильные данные, попробуйте выбрать действие заново" << endl;
		}
	}
	if (i == 1) {
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "1.Карту памяти ставят в телефон" << endl << "2.Карту памяти убирают из телефона" << endl;
			cin >> j;
			try {
				if (j < 1)
					throw '0';
				if (j > 2)
					throw 0;
			}
			catch (...) {
				p = 0;
				cout << "Неправильные данные, попробуйте выбрать действие заново" << endl;
			}
		}
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "Какой объем памяти у карты?";
			cin >> k;
			try {
				if (k < 0)
					throw '0';
			}
			catch (...) {
				p = 0;
				cout << "Неправильные данные, попробуйте ввести информацию заново" << endl;
			}
		}
		if (j == 1) {
			if (system_t.card == "no") {
				current_state.memory += k;
				system_t.card = "yes";
			}
			else
				cout << "Карта или уже находится в телефоне, или информация о ней неверна" << endl;
		}
		if (j == 2) {
			if (system_t.card == "yes") {
				current_state.memory -= k;
				system_t.card = "no";
			}
			else
				cout << "Карты или нет в телефоне, или информация о ней неверна" << endl;
		}
	}
	if (i == 2) {
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "1.В телефон добавляют информацию" << endl << "2.Из телефона удаляют информацию" << endl;
			cin >> j;
			try {
				if (j < 1)
					throw '0';
				if (j > 2)
					throw 0;
			}
			catch (...) {
				p = 0;
				cout << "Неправильные данные, попробуйте выбрать действие заново" << endl;
			}
		}
		p = 0;
		while (p == 0) {
			p = 1;
			cout << "Какой объем памяти добавили или удалили?";
			cin >> k;
			try {
				if (k < 0)
					throw '0';
			}
			catch (...) {
				p = 0;
				cout << "Неправильные данные, попробуйте ввести информацию заново" << endl;
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