#include "ManejadorFiguras.h"

void ManejadorFiguras::setCreador(CreadorFigura* cread)
{
    creador = cread;
}

void ManejadorFiguras::crearFigura()
{
    figura = creador->creaFigura();
}

Figura* ManejadorFiguras::getFigura()
{
    return figura;
}
