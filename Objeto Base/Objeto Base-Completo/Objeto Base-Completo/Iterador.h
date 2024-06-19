#pragma once
#include "ObjetoBase.h"

class Iterador : public ObjetoBase {
public:
	Iterador(){}
	virtual ~Iterador(){}
	virtual bool masElementos() = 0;//Indica si existe un siguiente
	virtual ObjetoBase* proximoElemento() = 0;//Retorna el proximo elemento si existe 
	virtual string toString() const = 0;//No retorna nada
	//porque los iteradores no tiene nada que imprimir

};
