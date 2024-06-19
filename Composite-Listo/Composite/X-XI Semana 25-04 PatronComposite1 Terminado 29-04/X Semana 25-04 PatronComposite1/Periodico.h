#pragma once
#include "Componente.h"
class Periodico :public Componente
{
	public:
		Periodico();
		Periodico(const Periodico& per);
		virtual ~Periodico();
		virtual string getNombre();
		virtual double getPrecio();
		virtual string getCodigo();
		virtual string toString();
		virtual void Add(Componente& comp);
		virtual void Delete(Componente& comp);
		Componente& clonar();
};

