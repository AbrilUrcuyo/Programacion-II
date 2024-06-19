#include "ReproductorNuevo.h"

ReproductorNuevo::ReproductorNuevo(string cod, string nom)
{
    nombre = nom;
    codigo = cod;

}

ReproductorNuevo::~ReproductorNuevo()
{
}

string ReproductorNuevo::toString()
{
    stringstream s;
    s << "---Reproductor Nuevo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();

}
