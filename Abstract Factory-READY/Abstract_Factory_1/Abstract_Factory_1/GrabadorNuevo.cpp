#include "GrabadorNuevo.h"

GrabadorNuevo::GrabadorNuevo(string codi, string nom)
{
    nombre = nom;
    codigo = codi;
}

GrabadorNuevo::~GrabadorNuevo()
{
}

string GrabadorNuevo::toString()
{
    stringstream s;
    s << "---Grabador Nuevo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();
}