#pragma once
#include<string>
#include "Componente.h"
class RevistaDeporte :public Componente
{
	public:
		RevistaDeporte();
		RevistaDeporte(const RevistaDeporte& rd);
		virtual ~RevistaDeporte();
		virtual string getNombre();
		virtual double getPrecio();
		virtual string getCodigo();
		virtual string toString();
		virtual void Add(Componente& comp);
		virtual void Delete(Componente& comp);
		Componente& clonar();
};

