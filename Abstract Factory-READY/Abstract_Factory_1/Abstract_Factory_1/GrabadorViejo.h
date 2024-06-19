#pragma once
#include "Grabador.h"

class GrabadorViejo : public Grabador {
public:
	GrabadorViejo(string = "", string = "");
	virtual ~GrabadorViejo();
	virtual string toString();
};

