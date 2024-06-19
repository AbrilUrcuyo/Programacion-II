#pragma once
#include "FabricaEquipo.h"
#include "Interfaz.h"

class FabricaENuevo : public FabricaEquipo {
public:
	FabricaENuevo();
	virtual ~FabricaENuevo();
	virtual Grabador* crearGrabador();
	virtual Medio* crearMedio() ;
	virtual Reproductor* crearReproductor() ;
	virtual string toString() ;
};
