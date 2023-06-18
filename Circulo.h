#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
class Circulo{
private:
	int r;
public:
	Circulo();
	Circulo(int);
	int calcularArea();
	int calcularPerimetro();
	void setR(int);
	int getR();
};

