#include "Partido.h"

Partido::Partido()
{
    cout << "Construyedo un partido Politico" << endl;
    this->valorPLN = 0;
    this->valorPSD = 0;
    this->valorPUSC = 0;
}

Partido::~Partido()
{
}

int Partido::getValor1()
{
    return valorPLN;
}

int Partido::getValor2()
{
    return valorPUSC;
}

int Partido::getValor3()
{
    return valorPSD;
}
