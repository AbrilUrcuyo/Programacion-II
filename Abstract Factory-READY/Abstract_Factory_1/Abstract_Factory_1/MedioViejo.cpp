#include "MedioViejo.h"

MedioViejo::MedioViejo(string cod, string nom)
{
    nombre = nom;
    codigo = cod;

}

MedioViejo::~MedioViejo()
{
}

string MedioViejo::toString()
{
    stringstream s;
    s << "---Medio Viejo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();

}