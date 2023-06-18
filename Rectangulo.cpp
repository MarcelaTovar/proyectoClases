#include "Rectangulo.h"
Rectangulo::Rectangulo(){}
Rectangulo::Rectangulo(int ladoA, int ladoB) {
	this->a = ladoA;
	this->b = ladoB;
}
int Rectangulo::calcularArea() {
	return this->b * this->a;
}
int Rectangulo::calcularPerimetro() {
	return 2 * (this->b + this->a);
}
void Rectangulo::setA(int ladoA) {
	this->a = ladoA;
}
void Rectangulo::setB(int ladoB) {
	this->b = ladoB;
}
int Rectangulo::getA() {
	return this->a;
}
int Rectangulo::getB() {
	return this->b;
}
