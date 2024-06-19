#pragma once
#include "ObjetoBase.h"

class Nodo {
private:
	Nodo* sig;
	ObjetoBase* info;
public:
	Nodo(Nodo* sigN, ObjetoBase& obj);
	virtual~Nodo();
	ObjetoBase* getInfo();
	Nodo* getSigNodo();
	void setInfo(ObjetoBase& obj);
	void setSigNodo(Nodo* sigN);
};