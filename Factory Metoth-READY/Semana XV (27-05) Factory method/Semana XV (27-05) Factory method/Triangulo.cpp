#include "Triangulo.h"

Triangulo::Triangulo(string tip, double bas, double alt)
{
    base = bas;
    altura = alt;
}

Triangulo::~Triangulo()
{
}

double Triangulo::area()
{
    return (base*altura)/2;
}

double Triangulo::perimetro()
{
    return 3*base;
}

string Triangulo::toString()
{
    stringstream s;
    s << "----- TRIANGULO -----" << endl;
    s << "Tipo: " << tipo << endl
        << "Altura: " << altura << endl
        << "Base: " << base << endl
        << "Area = " << area() << " ul cuadradas" << endl
        << "Perimetro = " << perimetro() << " ul" << endl;
    return s.str();
}
