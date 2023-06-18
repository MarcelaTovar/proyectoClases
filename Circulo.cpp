#include "Circulo.h"
Circulo::Circulo(){}
Circulo::Circulo(int Radio) {
	this->r = Radio;
}
int Circulo::calcularArea() {
	int temp = (pow(this->r, 2));
	return M_PI * temp;
}
int Circulo::calcularPerimetro() {
	return 2 * M_PI * this->r;
}
void Circulo::setR(int Radio) {
	this->r = Radio;
}
int Circulo::getR() {
	return this->r;
}
