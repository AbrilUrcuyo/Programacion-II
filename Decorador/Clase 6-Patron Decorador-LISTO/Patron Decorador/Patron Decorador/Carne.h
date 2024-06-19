
#pragma once
#include "Ingrediente.h"

class Carne :public Ingrediente {
private:
	string nombre;//Tarea moral, saber de donde se debe quitar
public:
	Carne(Componente* compo);
	virtual ~Carne();
	virtual double costo();
	virtual string toString();
	virtual string getNombre();
};
