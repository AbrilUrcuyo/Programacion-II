#include "Nodo.h"



Nodo::Nodo(Nodo* sig, ObjetoBase* obj)
{
    siguiente = sig;
    info = obj;
}

Nodo::~Nodo()
{
}

Nodo* Nodo::getSiguiente()
{
    return siguiente;
}

ObjetoBase& Nodo::getObjeto()
{
    return *info;
}

void Nodo::setSiguiente(Nodo* sig)
{
    siguiente = sig;

}

void Nodo::setObjeto(ObjetoBase& obj)
{
    info = (ObjetoBase*)&obj;
}

string Nodo::toString() const
{
    return "";
}
