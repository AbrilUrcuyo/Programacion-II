#pragma once
#include "ObjetoBase.h"
#include "Iterador.h"
#include "IterLista.h"

class Coleccion :public ObjetoBase {
public:
	Coleccion();
	virtual ~Coleccion();
	virtual void agregar(ObjetoBase&)=0;
	virtual ObjetoBase* obtener(int)=0;
	virtual int numeroElementos() = 0;
	virtual bool esVacion() = 0;
	virtual Iterador* obtenerIterador() const = 0;
	virtual string toString() const = 0;

};

