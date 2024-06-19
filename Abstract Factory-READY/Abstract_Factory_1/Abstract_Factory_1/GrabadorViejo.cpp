#include "GrabadorViejo.h"

GrabadorViejo::GrabadorViejo(string codi, string nom)
{
    nombre = nom;
    codigo = codi;
}

GrabadorViejo::~GrabadorViejo()
{
}

string GrabadorViejo::toString()
{
    stringstream s;
    s << "---Grabador Viejo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();
}
