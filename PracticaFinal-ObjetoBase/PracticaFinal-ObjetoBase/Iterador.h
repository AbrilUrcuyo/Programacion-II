#pragma once
#include "ObjetoBase.h"

class Iterador : public ObjetoBase {
public:
	Iterador();
	virtual~Iterador();
	virtual bool masElementos() = 0;
	virtual ObjetoBase* proximoElemento() = 0;
	virtual string toString() const = 0;
};