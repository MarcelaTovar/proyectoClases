#pragma once
class Paralelograma{
private:
	int a;
	int b;
	int h;
public:
	Paralelograma();
	Paralelograma(int, int, int);
	int calcularArea();
	int calcularPerimetro();
	void setA(int);
	void setB(int);
	void setH(int);
	int getA();
	int getB();
	int getH();
};

