#include "Periodico.h"

Periodico::Periodico()
{
    nombre = "Nacio";
    precio = 700;
    codigo = "0001";
}

Periodico::Periodico(const Periodico& per)
{
    this->codigo = per.codigo;
    this->nombre = per.nombre;
    this->precio = per.precio;
}

Periodico::~Periodico()
{
}

string Periodico::getNombre()
{
    return nombre;
}

double Periodico::getPrecio()
{
    return precio;
}

string Periodico::getCodigo()
{
    return codigo;
}

string Periodico::toString()
{
    stringstream s;
    s << "PERIODICO" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    s << "Precio: " << precio << "colones" << endl;
    return s.str();
}

void Periodico::Add(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

void Periodico::Delete(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

Componente& Periodico::clonar()
{
    return *new Periodico(*this);
}
