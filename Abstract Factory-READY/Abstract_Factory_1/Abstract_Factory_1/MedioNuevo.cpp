#include "MedioNuevo.h"

MedioNuevo::MedioNuevo(string cod, string nom)
{
    nombre = nom;
    codigo = cod;

}

MedioNuevo::~MedioNuevo()
{
}

string MedioNuevo::toString()
{
    stringstream s;
    s << "---Medio Nuevo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();

}
