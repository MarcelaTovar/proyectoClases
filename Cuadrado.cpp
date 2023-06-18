#include "Cuadrado.h"
Cuadrado::Cuadrado(){}
Cuadrado::Cuadrado(int ladoA) {
	this->a = ladoA;
}
int Cuadrado::calcularArea() {
	return pow(this->a, 2);
}
int Cuadrado::calcularPerimetro() {
	return 4 * a;
}
void Cuadrado::setA(int ladoA) {
	this->a = ladoA;
}
int Cuadrado::getA() {
	return this->a;
}