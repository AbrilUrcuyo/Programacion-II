#pragma once
#include "Componente.h"
class Suplemento :public Componente
{
	public:
		Suplemento();
		Suplemento(const Suplemento& sup);
		virtual ~Suplemento();
		virtual string getNombre();
		virtual double getPrecio();
		virtual string getCodigo();
		virtual string toString();
		virtual void Add(Componente& comp);
		virtual void Delete(Componente& comp);
		Componente& clonar();
};

