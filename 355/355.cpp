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
	int d, p, t;
	Telephone* spisok = new Telephone;
	*spisok = Telephone::Telephone(current_state, dimensions, system_t, screen, general_data);
	spisok->read();
	spisok->display();

	do {
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
			cout << "Вы действительно хотите выйти? (1-Да,2-Нет):";
			cin >> p;
			if (p == 1)
				return 0;
		}
		cout << "Хотите продолжить? Да - любая клавиша, Нет -ESC";
	} while (_getch() != 27);
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
