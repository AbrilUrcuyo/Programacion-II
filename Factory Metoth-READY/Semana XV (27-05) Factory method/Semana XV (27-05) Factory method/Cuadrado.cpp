#include "Cuadrado.h"

Cuadrado::Cuadrado(string tip, double lad) : Figura(tip)
{
    lado = lad;
}

Cuadrado::~Cuadrado()
{
}

double Cuadrado::area()
{
    return lado * lado;
}

double Cuadrado::perimetro()
{
    return 4*lado;
}

string Cuadrado::toString()
{
    stringstream s;
    s << "----- CUADRADO -----" << endl;
    s << "Tipo: " << tipo << endl
        << "Lado: " << lado << endl
        << "Area = " << area() << " ul cuadradas" << endl
        << "Perimetro = " << perimetro() << " ul" << endl;
    return s.str();
}
