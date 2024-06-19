#include "CreadorCuadrado.h"

Figura* CreadorCuadrado::creaFigura()
{
    return new Cuadrado("Cuadrado", 6);
}
