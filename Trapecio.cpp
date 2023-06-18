#include "Trapecio.h"
Trapecio::Trapecio() {}
Trapecio::Trapecio(int baseMayor, int baseMenor, int ladoA, int ladoC, int altura) {
	this->b = baseMenor;
	this->B = baseMayor;
	this->a = ladoA;
	this->c = ladoC;
	this->h = altura;
}
int Trapecio::calcularArea() {
	return ((this->h * (this->b + this->B)) / 2);
}
int Trapecio::calcularPerimetro() {
	return this->b + this->B + this->c + this->a;
}
void Trapecio::setA(int ladoA) {
	this->a = ladoA;
}
void Trapecio::setB(int baseMayor) {
	this->B = baseMayor;
}
void Trapecio::set_b(int baseMenor) {
	this->b = baseMenor;
}
void Trapecio::setC(int ladoC) {
	this->c = ladoC;
}
void Trapecio::setH(int altura) {
	this->h = altura;
}
int Trapecio::getA() {
	return this->a;
}
int Trapecio::getB() {
	return this->B;
}
int Trapecio::getC() {
	return this->c;
}
int Trapecio::get_b() {
	return this->b;
}
int Trapecio::getH() {
	return this->h;
}
