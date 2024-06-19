#pragma once
#include "Implementador.h"


class ImpConRelleno : public Implementador {
public:
	ImpConRelleno(){}
	virtual ~ImpConRelleno(){}
	virtual void dibujar(Figura* figura) {
		figura->redimensionar(50);
		cout << "Soy de la " << typeid(*figura).name() << endl;
		cout << "He sido redimensionada " << endl;
		cout << "Ademas rellenado mi parte interna" << endl;
		cout << figura->toString()<<endl;
	}

};
