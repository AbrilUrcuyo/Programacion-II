#pragma once
#include "Cuadrado.h"
#include "CreadorFigura.h"
class CreadorCuadrado :public CreadorFigura
{
	public:
		virtual Figura* creaFigura();
};

