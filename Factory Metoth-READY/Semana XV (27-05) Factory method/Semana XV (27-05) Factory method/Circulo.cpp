#include "Circulo.h"

Circulo::Circulo(string tip, double rad): Figura(tip)
{
    radio = rad;
}

Circulo::~Circulo()
{
}

double Circulo::area()
{
    return 3.1415*radio*radio;
}

double Circulo::perimetro()
{
    return 2*3.1415*radio;
}

string Circulo::toString()
{
    stringstream s;
    s << "----- CIRCULO -----" << endl;
    s << "Tipo: " << tipo << endl
        << "Radio: " << radio << endl
        << "Area = " << area() << " ul cuadradas" << endl
        << "Perimetro = " << perimetro() << " ul" << endl;
    return s.str();
}