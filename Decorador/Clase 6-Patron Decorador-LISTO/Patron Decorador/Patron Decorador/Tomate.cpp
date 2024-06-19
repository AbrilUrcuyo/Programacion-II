#include "Tomate.h"

Tomate::Tomate(Componente* compo)
{
    ptrCompo = compo;
    nombre = "Tomate";
    precio = 300;
}

Tomate::~Tomate()
{
}

double Tomate::costo()
{
    return this->precio + ptrCompo->costo();
}

string Tomate::toString()
{
    stringstream s;
    s << "\n\t\t" << nombre << "\t\t" << precio << endl;
    s << ptrCompo->toString(); //Tipo de recursividad que puede ver la informacion de toda la lista
    return s.str();
}

string Tomate::getNombre()
{
    return nombre;
}
