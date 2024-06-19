#include "ColeccionL.h"

ColeccionL::ColeccionL()
:Coleccion(){
    ppio = NULL;
}

ColeccionL::~ColeccionL()
{
    //Aca se debe hacer la eliminacion de la lista
}

void ColeccionL::agregar(ObjetoBase& obj)
{
    ObjetoBase* nuevo = NULL;
    *nuevo = obj;
    ppio = new Nodo(ppio, *nuevo); 
}

ObjetoBase* ColeccionL::obtener(int lug)
{
    ObjetoBase* r = NULL;
    if (lug <n ) {
        int p = 0;
        Nodo* actual=ppio;
        while (p < lug) {
            p++;
            actual = actual->getSigNodo();
        }
        r = actual->getInfo();
    }
    return r;
}

int ColeccionL::numeroElementos()
{
    return n;
}

bool ColeccionL::esVacion()
{
    return ppio==NULL;
}

Iterador* ColeccionL::obtenerIterador() const
{
    return new IterLista(ppio);
}

string ColeccionL::toString() const
{
    stringstream s;
    Iterador* i = obtenerIterador();
    while (i->masElementos()) {
        s << *(i->proximoElemento())<<endl;
    }

    return s.str();
}
