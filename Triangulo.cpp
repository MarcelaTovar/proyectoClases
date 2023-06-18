#include "Triangulo.h"
Triangulo::Triangulo(){}
Triangulo::Triangulo(int ladoA, int ladoB, int ladoC, int altura) {
	this->a = ladoA;
	this->b = ladoB;
	this->c = ladoC;
	this->h = altura;
}
int Triangulo::calcularArea() {
	return (this->b*this->h)/2;
}
int Triangulo::calcularPerimetro() {
	return this->a + this->b + this->c;
}
void Triangulo::setA(int ladoA) {
    this->a = ladoA;
}
void Triangulo::setB(int ladoB) {
    this->b = ladoB;
}
void Triangulo::setC(int ladoC) {
    this->c = ladoC;
}
void Triangulo::setH(int altura) {
    this->h = altura;
}
int Triangulo::getA() {
    return this->a;
}
int Triangulo::getB() {
    return this->b;
}
int Triangulo::getC() {
    return this->c;
}
int Triangulo::getH() {
    return this->h;
}

