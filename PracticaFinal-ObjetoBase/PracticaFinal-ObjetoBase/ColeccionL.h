#pragma once
#include "Coleccion.h"
#include "Nodo.h"
#include "Iterador.h"

class ColeccionL :public Coleccion {
private:
	int n;
	Nodo* ppio;
public:
	ColeccionL();
	virtual ~ColeccionL();
	virtual void agregar(ObjetoBase&);
	virtual ObjetoBase* obtener(int);
	virtual int numeroElementos();
	virtual bool esVacion();
	virtual Iterador* obtenerIterador() const;
	virtual string toString() const ;

};