#pragma once
#include "Iterador.h"

class IteradorArreglo :public Iterador {
private:
	int i;//Este se podria decir que es el i con el que recorremos el vector
	int cant;//cantidad de elemtos validos del vector
	ObjetoBase** vec;

public:
	IteradorArreglo(int, ObjetoBase* []);
	virtual ~IteradorArreglo();
	virtual bool masElementos();
	virtual ObjetoBase* proximoElemento();
	virtual string toString() const;



	


};
