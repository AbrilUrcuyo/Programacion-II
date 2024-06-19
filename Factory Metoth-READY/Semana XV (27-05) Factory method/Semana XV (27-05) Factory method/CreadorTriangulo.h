#pragma once
#include "Triangulo.h"
#include "CreadorFigura.h"
class CreadorTriangulo :public CreadorFigura
{
	public:
		virtual Figura* creaFigura();
};

