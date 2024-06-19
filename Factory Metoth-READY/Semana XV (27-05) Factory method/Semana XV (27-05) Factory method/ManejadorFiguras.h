#pragma once
#include "CreadorCirculo.h"
#include "CreadorCuadrado.h"
#include "CreadorTriangulo.h"

class ManejadorFiguras
{
	private:
		Figura* figura;
		CreadorFigura* creador;
	public:
		void setCreador(CreadorFigura* cread);
		void crearFigura();
		Figura* getFigura();
};

