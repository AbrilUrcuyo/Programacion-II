#pragma once
#include "FabricaEquipo.h"

class FabricaEViejo : public FabricaEquipo {
public:
	FabricaEViejo();
	virtual ~FabricaEViejo();	
	virtual Grabador* crearGrabador();
	virtual Medio* crearMedio();
	virtual Reproductor* crearReproductor();
	virtual string toString();
};