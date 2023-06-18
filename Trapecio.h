#pragma once
class Trapecio{
private:
	int B;
	int b;
	int a;
	int c;
	int h;
public:
	Trapecio();
	Trapecio(int,int,int,int,int);
	int calcularArea();
	int calcularPerimetro();
	void setB(int);
	void set_b(int);
	void setA(int);
	void setC(int);
	void setH(int);
	int getB();
	int get_b();
	int getA();
	int getC();
	int getH();
};

