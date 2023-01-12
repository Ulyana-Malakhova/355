#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Screen {
public:
	double diagonal;
	string pixel;
	Screen(double diagonal, string pixel);
	Screen(double diagonal);
	Screen();
	~Screen();
	void read();
	void display();
};