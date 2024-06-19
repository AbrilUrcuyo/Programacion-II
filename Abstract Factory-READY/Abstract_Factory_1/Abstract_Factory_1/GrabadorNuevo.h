#pragma once
#include "Grabador.h"

class GrabadorNuevo : public Grabador {
public:
	GrabadorNuevo(string = "", string = "");
	virtual ~GrabadorNuevo();
	virtual string toString();
};
