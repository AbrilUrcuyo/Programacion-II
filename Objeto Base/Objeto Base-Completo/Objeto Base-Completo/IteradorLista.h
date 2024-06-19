#pragma once
#include "Iterador.h"
#include "Nodo.h"

//La clase iterador lista ocupa el nodo
class IteradorLista : public Iterador {
private:
	Nodo* actual;
public:
	IteradorLista(Nodo* actu);
	virtual ~IteradorLista();
	virtual bool masElementos();
	virtual ObjetoBase* proximoElemento();
	virtual string toString() const;
};
