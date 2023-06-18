#pragma once
class Cometa{
private:
	int d;
	int b;
	int a;
	int D;
public:
	Cometa();
	Cometa(int, int, int, int);
	int calcularArea();
	int calcularPerimetro();
	void set_d(int);
	void setB(int);
	void setA(int);
	void setD(int);
	int get_d();
	int getB();
	int getA();
	int getD();
};

