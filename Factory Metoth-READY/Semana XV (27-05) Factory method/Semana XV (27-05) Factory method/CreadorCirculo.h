#pragma once
#include "CreadorFigura.h"
#include "Circulo.h"

class CreadorCirculo :public CreadorFigura
{
public:
	virtual Figura* creaFigura();
};

