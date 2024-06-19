#include "ReproductorViejo.h"

ReproductorViejo::ReproductorViejo(string cod, string nom)
{
    nombre = nom;
    codigo = cod;

}

ReproductorViejo::~ReproductorViejo()
{
}

string ReproductorViejo::toString()
{
    stringstream s;
    s << "---Reproductor Viejo---" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    return s.str();

}
