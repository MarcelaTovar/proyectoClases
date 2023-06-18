#include "Paralelograma.h"
Paralelograma::Paralelograma(){}
Paralelograma::Paralelograma(int ladoA, int ladoB, int altura) {
	this->a = ladoA;
	this->b = ladoB;
	this->h = altura;
}
int Paralelograma::calcularArea() {
	return this->b * this->h;
}
int Paralelograma::calcularPerimetro() {
	return 2 * (this->a + this->b);
}
void Paralelograma::setA(int ladoA) {
    this->a = ladoA;
}
void Paralelograma::setB(int ladoB) {
    this->b = ladoB;
}
void Paralelograma::setH(int altura) {
    this->h = altura;
}
int Paralelograma::getA() {
    return this->a;
}
int Paralelograma::getB() {
    return this->b;
}
int Paralelograma::getH() {
    return this->h;
}

