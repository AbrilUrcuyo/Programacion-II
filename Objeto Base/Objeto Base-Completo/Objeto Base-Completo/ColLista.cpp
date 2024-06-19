#include "ColLista.h"

ColLista::ColLista()
{
    ppio = NULL;
}

ColLista::~ColLista()
{
}

void ColLista::agregar( ObjetoBase* obj)
{
    ppio = new Nodo(ppio, obj);
}

ObjetoBase* ColLista::obtener(int lug ) const
{
    ObjetoBase* r = NULL;
    if (lug < n) {
        int p = 0;
        Nodo* actual = ppio;
        while (p < lug) {
            p++;
            actual = actual->getSiguiente();
        }
        r = (ObjetoBase*)&actual->getObjeto();
    }

    return r;
}

int ColLista::numeroElementos() const
{
    return n;
}

bool ColLista::vacio() const
{
    return ppio==NULL;
}

Iterador* ColLista::obtenerIterador() const
{
    return new IteradorLista(ppio);
}

string ColLista::toString() const
{
    stringstream s;
    Iterador* i = obtenerIterador();
    while (i->masElementos()) {
        s << *(i->proximoElemento())<<endl;
    }
    return s.str();
}
