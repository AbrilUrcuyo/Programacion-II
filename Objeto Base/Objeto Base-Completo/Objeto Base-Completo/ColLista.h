#pragma once
#include "Iterador.h"
#include "Coleccion.h"

class ColLista : public Coleccion {
private:
	Nodo* ppio;
	int n;//cantidad de elementos
public:
	ColLista();
	virtual~ColLista();
	virtual void agregar(ObjetoBase*); 
	virtual ObjetoBase* obtener(int) const;
	virtual int numeroElementos() const;
	virtual bool vacio() const;
	virtual Iterador* obtenerIterador()const;
	virtual string toString() const;
};
