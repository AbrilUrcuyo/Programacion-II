#pragma once
#include "Figura.h"
using namespace std;

class Implementador {//Implementador Abstracto
public:
	Implementador(){}
	virtual ~Implementador(){}
	virtual void dibujar(Figura*) = 0;
	virtual void mensaje() { cout << "Dibujando figura tipo: "; }

};
