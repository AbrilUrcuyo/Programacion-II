#include "Nodo.h"

Nodo::Nodo(Nodo* sigN, ObjetoBase& obj)
{
	sig = sigN;
	info = (ObjetoBase*)&obj;
}

Nodo::~Nodo()
{
}

ObjetoBase* Nodo::getInfo()
{
	return info;
}

Nodo* Nodo::getSigNodo()
{
	return sig;
}

void Nodo::setInfo(ObjetoBase& obj)
{
	info = (ObjetoBase*)&obj;
}

void Nodo::setSigNodo(Nodo* sigN)
{
	sig = sigN;
}
