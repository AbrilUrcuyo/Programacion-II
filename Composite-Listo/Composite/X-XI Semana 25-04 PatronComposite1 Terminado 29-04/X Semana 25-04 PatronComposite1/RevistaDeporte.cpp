#include "RevistaDeporte.h"

RevistaDeporte::RevistaDeporte()
{
    nombre = "Atletismo";
    precio = 100;
    codigo = "0003";
}

RevistaDeporte::RevistaDeporte(const RevistaDeporte& rd)
{
    this->codigo = rd.codigo;
    this->nombre = rd.nombre;
    this->precio = rd.precio;
}

RevistaDeporte::~RevistaDeporte()
{
}

string RevistaDeporte::getNombre()
{
    return nombre;
}

double RevistaDeporte::getPrecio()
{
    return precio;
}

string RevistaDeporte::getCodigo()
{
    return codigo;
}

string RevistaDeporte::toString()
{
    stringstream s;
    s << "REVISTA DEPORTE" << endl;
    s << "Codigo: " << codigo << endl;
    s << "Nombre: " << nombre << endl;
    s << "Precio: " << precio << "colones" << endl;
    return s.str();
}

void RevistaDeporte::Add(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

void RevistaDeporte::Delete(Componente& comp)
{
    //No se realiza en esta clase
    //Se podría tirar una excepcion
}

Componente& RevistaDeporte::clonar()
{
    return *new RevistaDeporte(*this);
}
