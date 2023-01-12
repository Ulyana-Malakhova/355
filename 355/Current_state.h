#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Current_state {
public:
	int charge;
	int memory;
	string internet;
	Current_state(int charge, int memory, string internet);
	Current_state(int charge);
	Current_state();
	~Current_state();
	void read();
	void display();
};