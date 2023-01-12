#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class System_t {
public:
	string opersystem;
	int internalm;
	string card;
	System_t(string opersystem, int internalm, string card);
	System_t(string opersystem);
	System_t();
	~System_t();
	void read();
	void display();
};