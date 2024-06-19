#pragma once
#include "Reproductor.h"
#include "MedioNuevo.h"
#include "ReproductorNuevo.h"
#include "Grabador.h"
#include "Interfaz.h"

using namespace std;

class FabricaEquipo {
protected:
	Grabador* grab;
	Medio* med;
	Reproductor* repro;

public:
	FabricaEquipo() {};
	virtual ~FabricaEquipo(){
		/*if (grab != NULL) {
			delete grab;
		}
		if (med != NULL) {
			delete med;
		}
		if (repro != NULL) {
			delete repro;
		}
		Sera necesario ese destructor???, pues a fabrica nunca le llega esos punteros, por ende son NULL
		En las clases hijas es que se les da un valor por ende es en esas clases donde se debe realizar el destructor 
		*/
	}
	virtual Grabador* crearGrabador() = 0;
	virtual Medio* crearMedio() = 0;
	virtual Reproductor* crearReproductor() = 0;
	virtual string toString() = 0;
};
