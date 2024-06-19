#pragma once
#include "Reproductor.h"

class ReproductorViejo : public Reproductor {
public:
	ReproductorViejo(string = "", string = "");
	virtual ~ReproductorViejo();
	virtual string toString();
};

