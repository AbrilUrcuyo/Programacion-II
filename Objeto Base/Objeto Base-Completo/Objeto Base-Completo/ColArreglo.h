#pragma once
#include "Coleccion.h"

class ColArreglo : public Coleccion {
private:
	ObjetoBase** vec;
	int can;
	int tam;
public:
	ColArreglo(int t);
	virtual ~ColArreglo();
	virtual void agregar( ObjetoBase*);
	virtual ObjetoBase* obtener(int) const;
	virtual int numeroElementos() const;
	int maximoElementos() const;
	virtual bool vacio() const;
	virtual Iterador* obtenerIterador()const;
	virtual string toString() const;




};
