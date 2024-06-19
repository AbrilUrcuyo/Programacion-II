#pragma once
#include "Implementador.h"


class ImpSinRelleno : public Implementador {
public:
	ImpSinRelleno() {}
	virtual ~ImpSinRelleno() {}
	virtual void dibujar(Figura* figura) {
		figura->redimensionar(50);
		cout << "Soy de la " << typeid(*figura).name() << endl;
		cout << "He sido redimensionada " << endl;
		cout << "Ademas remarcada en mi contorno " << endl;
		cout << figura->toString() << endl;
	}

};
