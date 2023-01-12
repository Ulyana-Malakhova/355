#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class General_data {
public:
	string country;
	string model;
	int year;
	General_data(string country, string model, int year);
	General_data(string model);
	General_data();
	~General_data();
	void read();
	void display();
};