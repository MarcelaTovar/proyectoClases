#pragma once
#include <math.h>
class Cuadrado{
private:
	int a;
public:
	Cuadrado();
	Cuadrado(int);
	int calcularArea();
	int calcularPerimetro();
	void setA(int);
	int getA();
};

