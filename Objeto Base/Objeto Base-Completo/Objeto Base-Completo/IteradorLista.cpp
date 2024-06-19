#include "IteradorLista.h"

IteradorLista::IteradorLista(Nodo* actu)
:Iterador(){
    actual = actu;
}

IteradorLista::~IteradorLista()
{
    
}

bool IteradorLista::masElementos()
{
    return actual!=NULL;//Deja de iterar hasta que ve a NULL
}

ObjetoBase* IteradorLista::proximoElemento()
{
    ObjetoBase* r = NULL;
    if (masElementos()) {
        r = &actual->getObjeto();
        actual = actual->getSiguiente();

    }
    return r;
}

string IteradorLista::toString() const
{
    return "";
}
