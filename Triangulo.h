#pragma once
class Triangulo{
private:
	int a;
	int b;
	int c;
	int h;
public:
	Triangulo();
	Triangulo(int,int,int,int);
	int calcularArea();
	int calcularPerimetro();
	void setA(int);
	void setB(int);
	void setC(int);
	void setH(int);
	int getA();
	int getB();
	int getC();
	int getH();
};

