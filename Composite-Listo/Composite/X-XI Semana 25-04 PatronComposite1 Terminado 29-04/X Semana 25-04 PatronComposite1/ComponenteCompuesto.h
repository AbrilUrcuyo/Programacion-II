#pragma once
#include "Periodico.h"
#include "RevistaDeporte.h"
#include "Suplemento.h"

class ComponenteCompuesto :public Componente
{
	private:
		Componente* vec[100]; //Se podr�a hacer con Listas, se hace as� por elecci�n
		int cantidad;
		int tamanio;
	public:
		ComponenteCompuesto(string nom, string cod);
		ComponenteCompuesto(const ComponenteCompuesto& compc);
		virtual ~ComponenteCompuesto();
		virtual string getNombre();
		virtual double getPrecio();
		virtual string getCodigo();
		virtual string toString();
		virtual void Add(Componente& comp);
		virtual void Delete(Componente& comp);
		Componente& clonar();
};

