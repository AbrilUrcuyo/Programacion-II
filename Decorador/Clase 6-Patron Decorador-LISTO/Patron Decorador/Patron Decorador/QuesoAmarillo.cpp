#include "QuesoAmarillo.h"

QuesoAmarillo::QuesoAmarillo(Componente* compo)
{
    ptrCompo = compo; //Lugar donde se enlaza el ingrediente con los otros
    nombre = "Queso";
    this->precio = 550;
}

QuesoAmarillo::~QuesoAmarillo()
{
}

double QuesoAmarillo::costo()
{
    return this->precio + ptrCompo->costo();
}

string QuesoAmarillo::toString()
{
    stringstream s;
    s << "\n\t\t" << nombre << "\t\t" << precio << endl;
    s << ptrCompo->toString(); //Tipo de recursividad que puede ver la informacion de toda la lista
    return s.str();
}

string QuesoAmarillo::getNombre()
{
    return nombre;
}
