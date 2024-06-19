#include "FabricaENuevo.h"

FabricaENuevo::FabricaENuevo()
{
    grab = crearGrabador();
    med = crearMedio();
    repro = crearReproductor();
}

FabricaENuevo::~FabricaENuevo()
{
    if (grab != NULL) { delete grab; }
    if (med != NULL) { delete med; }
    if (repro != NULL) { delete repro; }
}

Grabador* FabricaENuevo::crearGrabador()
{
    //Aqui puede xistir una interfaz para las solicitudes del grabador
    return Interfaz::creandoGrabadorNuevo();
}

Medio* FabricaENuevo::crearMedio()
{
    //Aqui puede xistir una interfaz para las solicitudes del medio

    return Interfaz::creandoMedioNuevo();
}

Reproductor* FabricaENuevo::crearReproductor()
{
    //Aqui puede xistir una interfaz para las solicitudes del reproductor

    return Interfaz::creandoReproductorNuevo();
}

string FabricaENuevo::toString()
{
    stringstream s;
    s << grab->toString() << endl;
    s << med->toString() << endl;
    s << repro->toString() << endl;
    return s.str();
}
