#pragma once
class Rombo{
private:
	int a;
	int d;
	int D;
public:
	Rombo();
	Rombo(int,int,int);
	int calcularArea();
	int calcularPerimetro();
	int getA();
	int get_d();
	int getD();
	void setA(int);
	void setD(int);
	void set_d(int);
};

