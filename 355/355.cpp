// 355.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "Current_state.h"
#include "Dimensions.h"
#include "System_t.h"
#include "Screen.h"
#include "General_data.h"
#include "Telephone.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	Current_state current_state = Current_state::Current_state(0, 0, "internet");
	Dimensions dimensions = Dimensions::Dimensions(0, 0, 0, 0);
	System_t system_t = System_t::System_t("opersystem", 0, "card");
	Screen screen = Screen::Screen(0, "pixel");
	General_data general_data = General_data::General_data("country", "model", 0);
	int d, p, t, c, i, object;
	c = 0;
	while (c == 0) {
		c = 1;
		cout << "Вы хотите работать 1 - с одномерным массивом, 2 - с двумерным массивом, 3 - с одним объектом" << endl;
		cin >> object;
		try {
			if (object < 1)
				throw '0';
			if (object > 3)
				throw 0;
		}
		catch (...) {
			c = 0;
			cout << "Неправильные данные, попробуйте выбрать действие заново" << endl;
		}
	}
	if (object == 1) {
		Telephone spisok1[2];
		for (i = 0; i < 2; i++) {
			spisok1[i].read();
			spisok1[i].display();
		}
		do {
			cout << endl << "Выберите с каким объектом хотите работать" << endl;
			cin >> i;
			i--;
			cout << endl << "Выберите действие, которое хотите совершить:" << endl << "1.Вывод информации" << endl << "2.Зарядить телефон" << endl << "3.Изменить данные памяти" << endl << "4.Ввод новых данных" << endl << "5.Выход" << endl;
			cin >> d;
			if (d == 1)
				spisok1[i].display();
			if (d == 2)
			{
				spisok1[i].zaryad();
			}
			if (d == 3)
				spisok1[i].change();
			if (d == 4) {
				spisok1[i].read();
				spisok1[i].display();
			}
			if (d == 5) {
				cout << "Вы действительно хотите выйти? (1-Да,Любая другая клавиша-Нет):";
				cin >> p;
				if (p == 1)
					return 0;
			}
			cout << "Хотите продолжить? Да - любая клавиша, Нет -ESC";
		} while (_getch() != 27);
	}
	if (object == 3) {
		Telephone* spisok = new Telephone;
		*spisok = Telephone::Telephone(current_state, dimensions, system_t, screen, general_data);
		spisok->read();
		spisok->display();
		do {
			c = 0;
			cout << endl << "Выберите действие, которое хотите совершить:" << endl << "1.Вывод информации" << endl << "2.Зарядить телефон" << endl << "3.Изменить данные памяти" << endl << "4.Ввод новых данных" << endl << "5.Выход" << endl;
			cin >> d;
			if (d == 1)
				spisok->display();
			if (d == 2)
			{
				spisok->zaryad();
			}
			if (d == 3)
				spisok->change();
			if (d == 4) {
				spisok->read();
				spisok->display();
			}
			if (d == 5) {
				cout << "Вы действительно хотите выйти? (1-Да,Любая другая клавиша-Нет):";
				cin >> p;
				if (p == 1)
					return 0;
			}
			cout << "Хотите продолжить? Да - любая клавиша, Нет -ESC";
		} while (_getch() != 27);
	}
	if (object == 2) {
		int j, k, g;
		Telephone spisok2[2][2];
		for (i = 0; i < 2; i++) {
			for (j = 0; j < 2; j++) {
				spisok2[i][j].read();
				spisok2[i][j].display();
			}
		}
		do {
			cout << endl << "Выберите с каким объектом хотите работать" << endl;
			cin >> i;
			i--;
			k = i / 2;
			if (k == 1)
				i = i - 2;
			g = i % 2;
			c = 0;
			cout << endl << "Выберите действие, которое хотите совершить:" << endl << "1.Вывод информации" << endl << "2.Зарядить телефон" << endl << "3.Изменить данные памяти" << endl << "4.Ввод новых данных" << endl << "5.Выход" << endl;
			cin >> d;
			if (d == 1)
				spisok2[k][g].display();
			if (d == 2)
			{
				spisok2[k][g].zaryad();
			}
			if (d == 3)
				spisok2[k][g].change();
			if (d == 4) {
				spisok2[k][g].read();
				spisok2[k][g].display();
			}
			if (d == 5) {
				cout << "Вы действительно хотите выйти? (1-Да,Любая другая клавиша-Нет):";
				cin >> p;
				if (p == 1)
					return 0;
			}
			cout << "Хотите продолжить? Да - любая клавиша, Нет -ESC";
		} while (_getch() != 27);
	}
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
