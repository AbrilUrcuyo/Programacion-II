#include "Hamburguesa.h"

Hamburgesa::Hamburgesa(void)
{
    precio=600;
}

Hamburgesa::~Hamburgesa(void)
{

}

double Hamburgesa::costo()
{
    return precio;
}

string Hamburgesa::toString()
{
    stringstream s;
    s << "\n\t\t Hamburguesa \t\t " << this->costo() << endl;
    return s.str();
}

string Hamburgesa::getNombre()
{
    return "";
}

Componente* Hamburgesa::getSigIngre()
{
    return NULL;
}

void Hamburgesa::setSigIngre(Componente* siguiete)
{
    
}
