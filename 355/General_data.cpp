#include "General_data.h"
#include <iostream>
#include <string.h>
using namespace std;

General_data::General_data(string country, string model, int year) {
	this->country = country;
	this->model = model;
	this->year = year;
}
General_data::General_data(string model) {
	this->model = model;
	country = "country";
	year = 0;
}
General_data::General_data() {
	model = "model";
	country = "country";
	year = 0;
}
General_data::~General_data() {

}
void General_data::read() {
	int p = 0;
	cout << "������ ���������� �� ����� ������" << endl;
	cout << "������-�������������: ";
	cin >> country;
	cout << "������: ";
	cin >> model;
	while (p == 0) {
		p = 1;
		cout << "��� �������: ";
		cin >> year;
		try {
			if (year < 1876)
				throw '0';
			if (year > 2023)
				throw 0;
		}
		catch (char c) {
			p = 0;
			cout << "�������� ����������, � ���� ���� ��� �� ���� ���������. ���������� ������ ���������� ������" << endl;
		}
		catch (int c) {
			p = 0;
			cout << "�������� ����������, ���� ��� ��� �� ��������. ���������� ������ ���������� ������" << endl;
		}
	}
}
void General_data::display() {
	cout << endl;
	cout << "����� ������:" << endl;
	cout << "-������-�������������:" << country << endl;
	cout << "-������:" << model << endl;
	cout << "-��� �������:" << year << endl;
}