#pragma once
#include "Ingrediente.h"


class QuesoAmarillo :public Ingrediente {
private:
	string nombre;//Tarea moral, saber de donde se debe quitar
public:
	QuesoAmarillo(Componente* compo);
	virtual ~QuesoAmarillo();
	virtual double costo();
	virtual string toString();
	virtual string getNombre();


}
;
