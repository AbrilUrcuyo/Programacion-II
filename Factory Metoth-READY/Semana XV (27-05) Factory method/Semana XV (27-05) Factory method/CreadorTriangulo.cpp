#include "CreadorTriangulo.h"

Figura* CreadorTriangulo::creaFigura()
{
    return new Triangulo("Triangulo", 5, 7);
}
