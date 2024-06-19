#pragma once
#include "ObjetoBase.h"

class Nodo {
private:
	Nodo* siguiente;
	ObjetoBase* info;
public:
	Nodo(Nodo* sig, ObjetoBase* obj);
	virtual~Nodo();
	Nodo* getSiguiente();
	ObjetoBase& getObjeto();
	void setSiguiente(Nodo* sig);
	void setObjeto(ObjetoBase& obj);
	virtual string toString() const;


};
