#include "Lechuga.h"

Lechuga::Lechuga(Componente* compo)
{
    ptrCompo = compo; //Lugar donde se enlaza el ingrediente con los otros
    nombre = "Lechuga";
    this->precio = 100;
}

Lechuga::~Lechuga()//Que pasa si quiero eliminar la lechuga sin volarme lo demas, Tarea Moral?????
{
}

double Lechuga::costo()//Aca tambien se utiliza la recursividad
//Esto devuelve el precio total del combo, no solo el de la lechuga
{
    return this->precio+ptrCompo->costo();
}

string Lechuga::toString()
{
    stringstream s;
    s << "\n\t\t" << nombre << "\t\t" << precio << endl;
    s << ptrCompo->toString(); //Tipo de recursividad que puede ver la informacion de toda la lista
    return s.str();
}

string Lechuga::getNombre()
{
    return nombre;
}
