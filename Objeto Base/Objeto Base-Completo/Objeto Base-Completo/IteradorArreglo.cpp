#include "IteradorArreglo.h"

IteradorArreglo::IteradorArreglo(int cantidad, ObjetoBase* v[])
    : Iterador() {//Se pone el constructor del padre siempre
    cant = cantidad;//Es la cantidad 
    i = 0;
    vec = v;
}

IteradorArreglo::~IteradorArreglo()
{
    //Posible destructor
    if (vec != NULL) {
        while (i < cant) {
            if (vec[i] != NULL) {
                delete vec[i];
            }
        }
        delete[] vec;
    }
}

bool IteradorArreglo::masElementos()
{
    return i < cant;
}



ObjetoBase* IteradorArreglo::proximoElemento()
{
    ObjetoBase* r = NULL;
    if (masElementos()) {
        r = vec[i++];
    }
    return r;
}

string IteradorArreglo::toString() const
{
    return "";
}
