#pragma once
#include "GrabadorNuevo.h"
#include "GrabadorViejo.h"
#include "MedioViejo.h"
#include "MedioNuevo.h"
#include "ReproductorNuevo.h"
#include "ReproductorViejo.h"


class Interfaz {

private:
	static string cod;
	static string nom;
public:
	static Grabador* creandoGrabadorNuevo();
	static Medio* creandoMedioNuevo();
	static Reproductor* creandoReproductorNuevo();

	static Grabador* creandoGrabadorViejo();
	static Medio* creandoMedioViejo();
	static Reproductor* creandoReproductorViejo();

	static void mensajePeticion();
};