#pragma once
#pragma once
#include "Figura.h"
#include "Implementador.h"

class Circulo : public Figura {
private:
	double radio, diametro, arco;
	Implementador& imple;
public:
	Circulo(double rad, double dia, double ar, Implementador& imp) : radio(rad), diametro(dia),arco(ar), imple(imp) {}

	virtual ~Circulo() {}

	/*void setRadio(double rad) {
		Radio = rad;
	}
	double getRadio() {
		return radio;

	}*/
	void dibujar() { //Si se ha desaclopado, aquí llamamos
		imple.dibujar(this);
		//Aqui se podrian utilizar otros implrementadores deseados pudiendo así realizar infinitas cantidad de combinaciones 
	}

	void redimensionar(double x) {
		radio = (x / 100 * radio) + radio;
		diametro = (x / 100 * diametro) + diametro;
		arco = (x / 100 * arco) + arco;
	}

	string toString() const {
		stringstream s;
		s << "Soy un circulo.. y mis dimensiones son : " << endl;
		s << "Radio: " << radio<<".m" << endl;
		s << "Diametro: " << diametro << endl;
		s << "Arco: " << arco << endl;
		return s.str();
	}
};
