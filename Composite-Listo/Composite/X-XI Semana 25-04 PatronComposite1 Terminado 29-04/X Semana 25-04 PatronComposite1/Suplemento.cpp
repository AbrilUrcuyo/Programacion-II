#include "Suplemento.h"

Suplemento::Suplemento()
{
    nombre = "Viva";
    precio = 400;
    codigo = "0002";
}

Suplemento::Suplemento(const Suplemento& sup)
{
    this->codigo = sup.codigo;
    this->nombre = sup.nombre;
    this->precio = sup.precio;
}

Suplemento::~Suplemento()
{
}

string Suplemento::getNombre()
{
    return nombre;
}

double Suplemento::getPrecio()
{
    return precio;
}

string Suplemento::getCodigo()
{
    return codigo;
}

string Suplemento::toString()
{
    stringstream s;
    s << "SUPLEMENTO" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    s << "Precio: " << precio << "colones" << endl;
    return s.str();
}

void Suplemento::Add(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

void Suplemento::Delete(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

Componente& Suplemento::clonar()
{
    return *new Suplemento(*this);
}
