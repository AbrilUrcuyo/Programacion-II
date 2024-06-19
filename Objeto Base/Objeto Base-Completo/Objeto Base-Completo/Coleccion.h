#pragma once
#include "ObjetoBase.h"
#include "IteradorArreglo.h"
#include "IteradorLista.h"
#include "Iterador.h"

class Coleccion :public ObjetoBase {
public:
	Coleccion(){}
	virtual ~Coleccion(){}
	virtual void agregar( ObjetoBase*) = 0;
	virtual ObjetoBase* obtener(int) const = 0;
	virtual int numeroElementos() const = 0;
	virtual bool vacio() const = 0;
	virtual Iterador* obtenerIterador()const = 0;
	virtual string toString() const = 0;
};
