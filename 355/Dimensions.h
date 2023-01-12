#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Dimensions {
public:
	int width;
	int height;
	int thickness;
	int weight;
	Dimensions(int width, int height, int thickness, int weight);
	Dimensions(int weight);
	Dimensions();
	~Dimensions();
	void read();
	void display();
};