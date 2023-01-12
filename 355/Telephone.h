#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include "Current_state.h"
#include "Dimensions.h"
#include "System_t.h"
#include "Screen.h"
#include "General_data.h"
using namespace std;

class Telephone {
private:
	Current_state current_state;
	Dimensions dimensions;
	System_t system_t;
	Screen screen;
	General_data general_data;
public:
	Telephone(Current_state current_state, Dimensions dimensions, System_t system_t, Screen screen, General_data general_data);
	Telephone(Current_state current_state);
	Telephone();
	~Telephone();
	void read();
	void display();
	void zaryad();
	void change();
};