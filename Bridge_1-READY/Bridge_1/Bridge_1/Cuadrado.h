#pragma once
#include "Figura.h"
#include "Implementador.h"

class Cuadrado : public Figura {
private:
	double lado;
	Implementador& imple;
public:
	Cuadrado(double la, Implementador& imp) : lado(la), imple(imp) {}
	virtual ~Cuadrado() {};
	/*void setLado(double la) {
		lado = la;
	}
	double getLado() {
		return lado;
	}*/
	void dibujar() { //Si se ha desaclopado, aquí llamamos
		imple.dibujar(this);
		//Aqui se podrian utilizar otros implrementadores deseados pudiendo así realizar infinitas cantidad de combinaciones 
	}

	void redimensionar(double x) {
		lado = (x / 100 * lado) + lado;
	}

	string toString() const {
		stringstream s;
		s << "Soy un cuadrado... y mi lado ahora es de : " <<
			lado << " mts" << endl;
		return s.str();
	}
};
