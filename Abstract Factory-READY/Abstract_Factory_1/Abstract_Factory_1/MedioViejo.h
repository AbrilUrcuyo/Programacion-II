#pragma once
//Este es la cinta
#include "Medio.h"

class MedioViejo : public Medio {
public:
	MedioViejo(string = "", string = "");
	virtual ~MedioViejo();
	virtual string toString();
};
