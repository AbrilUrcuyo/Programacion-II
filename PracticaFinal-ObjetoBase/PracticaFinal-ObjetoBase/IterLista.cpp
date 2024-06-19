#include "IterLista.h"

IterLista::IterLista(Nodo* act)
:Iterador(){
    actual = act;
}

IterLista::~IterLista()
{
    cout << "Eliminando el iterLista" << endl;
}

bool IterLista::masElementos()
{
    return actual!=NULL;
}

ObjetoBase* IterLista::proximoElemento()
{
    ObjetoBase* r = NULL;
    if (masElementos()) {
        r = actual->getInfo();
        actual = actual->getSigNodo();
    }
    return r;
}

string IterLista::toString() const
{
    return "";
}
