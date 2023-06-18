#include "Rombo.h"
Rombo::Rombo(int ladoA, int diagonal_d, int diagonalM) {
	this->a = ladoA;
	this->d = diagonal_d;
	this->D = diagonalM;
}
Rombo::Rombo() {}
int Rombo::calcularArea() {
	return ((this->d * this->D) / 2);
}
int Rombo::calcularPerimetro() {
	return (4 * this->a);
}
int Rombo::getA() {
	return this->a;
}
int Rombo::getD() {
	return this->D;
}
int Rombo::get_d() {
	return this->d;
}
void Rombo::setA(int ladoA) {
	this->a = ladoA;
}
void Rombo::set_d(int diagonal_d) {
	this->d = diagonal_d;
}
void Rombo::setD(int diagonalM) {
	this->D = diagonalM;
}