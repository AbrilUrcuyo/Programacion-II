#pragma once
#include "Figura.h"

class CreadorFigura
{
	public:
		virtual Figura* creaFigura() = 0;
};