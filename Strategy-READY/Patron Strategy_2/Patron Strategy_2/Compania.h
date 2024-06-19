#pragma once
#include "Reporte.h"


class Compania {
private:
	int can;
	Persona* vec;
	//Reporte* report;    Establecer la estrategia

public:
	Compania();
	virtual ~Compania();
	void insertarPersona(Persona p);
	void listarReporte(Reporte* r);//Los dos metodos juntis setEstrate y ejecutEstrateg.
};



Compania::Compania()
{
	can = 0;
	vec = new Persona[100];

}

Compania::~Compania()
{
	delete[] vec;
}

void Compania::insertarPersona(Persona p)
{
	if (can < 100)
		vec[can++] = p;
}

void Compania::listarReporte(Reporte* r)
{
	r->encabezado();
	for (int i = 0; i < can; i++) {
		r->mostrar(vec[i]);
	}
}

