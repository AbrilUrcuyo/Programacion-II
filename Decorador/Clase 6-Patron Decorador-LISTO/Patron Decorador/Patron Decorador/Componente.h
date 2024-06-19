#pragma once
#include<iostream>
#include <sstream>

using namespace std;


class Componente { //Clase abstracta
public:
	double precio;
	virtual ~Componente() {};
	virtual double costo() = 0;
	virtual string toString() = 0;
	virtual string getNombre() = 0;
	virtual Componente* getSigIngre() = 0;
	virtual void setSigIngre(Componente*) = 0;


};
