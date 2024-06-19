#include "Carne.h"

Carne::Carne(Componente* compo)
{
    ptrCompo = compo;
    nombre = "Carne";
    precio = 700;
}

Carne::~Carne()
{
}

double Carne::costo()
{
    return this->precio + ptrCompo->costo();
}

string Carne::toString()
{
    stringstream s;
    s << "\n\t\t" << nombre << "\t\t" << precio << endl;
    s << ptrCompo->toString(); //Tipo de recursividad que puede ver la informacion de toda la lista
    return s.str();
}

string Carne::getNombre()
{
    return nombre;
}
