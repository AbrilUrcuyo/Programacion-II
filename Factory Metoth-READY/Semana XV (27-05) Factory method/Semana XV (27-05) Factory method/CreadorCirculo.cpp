#include "CreadorCirculo.h"

Figura* CreadorCirculo::creaFigura()
{
    return new Circulo("Circulo", 4);
}
