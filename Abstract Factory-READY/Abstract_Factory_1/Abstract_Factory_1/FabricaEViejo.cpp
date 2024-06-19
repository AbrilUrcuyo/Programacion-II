#include "FabricaEViejo.h"

FabricaEViejo::FabricaEViejo()
{
    grab = crearGrabador();
    med = crearMedio();
    repro = crearReproductor();
}

FabricaEViejo::~FabricaEViejo()
{
    if (grab != NULL) { delete grab; }
    if (med != NULL) { delete med; }
    if (repro != NULL) { delete repro; }
}

Grabador* FabricaEViejo::crearGrabador()
{
    //Aqui puede xistir una interfaz para las solicitudes del grabador
    return Interfaz::creandoGrabadorViejo();
}

Medio* FabricaEViejo::crearMedio()
{
    //Aqui puede xistir una interfaz para las solicitudes del medio

    return Interfaz::creandoMedioViejo();
}

Reproductor* FabricaEViejo::crearReproductor()
{
    //Aqui puede xistir una interfaz para las solicitudes del reproductor

    return Interfaz::creandoReproductorViejo();
}

string FabricaEViejo::toString()
{
    stringstream s;
    s << grab->toString() << endl;
    s << med->toString() << endl;
    s << repro->toString() << endl;
    return s.str();
}