#include "Cometa.h"
Cometa::Cometa(){}
Cometa::Cometa(int ladoA, int diagonal_menor, int diagonalMayor, int ladoB) {
	this->a = ladoA;
	this->d = diagonal_menor;
	this->b = ladoB;
	this->D = diagonalMayor;
}
int Cometa::calcularArea() {
	return ((this->d * this->D) / 2);
}
int Cometa::calcularPerimetro() {
	return (2 * (this->b + this->a));
}
void Cometa::setA(int ladoA) {
	this->a = ladoA;
}
void Cometa::setB(int ladoB) {
	this->b = ladoB;
}
void Cometa::setD(int diagonalMayor) {
	this->D = diagonalMayor;
}
void Cometa::set_d(int diagonal_menor) {
	this->d = diagonal_menor;
}
int Cometa::getA() {
	return this->a;
}
int Cometa::getB() {
	return this->b;
}
int Cometa::getD() {
	return this->D;
}
int Cometa::get_d() {
	return this->d;
}