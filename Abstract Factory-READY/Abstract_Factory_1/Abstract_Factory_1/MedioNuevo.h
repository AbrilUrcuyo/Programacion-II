#pragma once
//Este es el CD
#include "Medio.h"

class MedioNuevo : public Medio {
public:
	MedioNuevo(string="",string="");
	virtual ~MedioNuevo();
	virtual string toString();
};
