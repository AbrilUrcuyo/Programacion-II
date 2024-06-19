#pragma once
#include "Reproductor.h"

class ReproductorNuevo : public Reproductor {
public:
	ReproductorNuevo(string="", string="");
	virtual ~ReproductorNuevo();
	virtual string toString();
};
