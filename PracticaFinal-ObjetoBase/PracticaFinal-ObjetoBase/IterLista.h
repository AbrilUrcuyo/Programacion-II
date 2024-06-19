#pragma once
#include "Nodo.h"
#include "Iterador.h"

class IterLista: public Iterador {
private:
	Nodo* actual;
public:
	IterLista(Nodo* act);
	virtual ~IterLista();
	virtual bool masElementos();
	virtual ObjetoBase* proximoElemento();
	virtual string toString() const;
};