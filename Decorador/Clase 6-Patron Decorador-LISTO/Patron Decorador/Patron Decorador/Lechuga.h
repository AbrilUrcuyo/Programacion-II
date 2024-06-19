#pragma once
#include "Ingrediente.h"


class Lechuga :public Ingrediente {
private:
	string nombre;//Tarea moral, saber de donde se debe quitar
public:
	Lechuga(Componente* compo);
	virtual ~Lechuga();
	virtual double costo();
	virtual string toString();
	virtual string getNombre();


}
;