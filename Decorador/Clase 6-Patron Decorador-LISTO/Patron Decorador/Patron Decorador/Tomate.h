#pragma once
#include "Ingrediente.h"


class Tomate :public Ingrediente {
private:
	string nombre;//Tarea moral, saber de donde se debe quitar
public:
	Tomate (Componente* compo);
	virtual ~Tomate();
	virtual double costo();
	virtual string toString();
	virtual string getNombre();

};
