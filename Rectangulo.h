#pragma once
class Rectangulo{
private:
	int a;
	int b;
public:
	Rectangulo();
	Rectangulo(int, int);
	int calcularArea();
	int calcularPerimetro();
	void setA(int);
	void setB(int);
	int getA();
	int getB();
};

