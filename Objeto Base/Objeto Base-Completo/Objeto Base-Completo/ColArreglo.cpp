#include "ColArreglo.h"

ColArreglo::ColArreglo(int t)
:Coleccion(){   can = 0;
    tam = t;
    vec = new ObjetoBase * [t];
    //Preguntar al profe si aca esto se hace con el obtener iterador
    for (int i = 0; i < tam; i++) {
        vec[i] = NULL;
    }
}

ColArreglo::~ColArreglo()
{
    //Preguntar al profe si esto se elimina usando el obtener iterador 
    for (int i = 0; i < can; i++) {
        delete vec[i];
    }
    delete[] vec;
}

void ColArreglo::agregar(ObjetoBase* obj)
{
    if (can < tam) {
        vec[can++] = obj;
    }
}



ObjetoBase* ColArreglo::obtener(int pos) const
{
    if (pos >= 0 && pos < can) {
        return vec[pos];
    }
    return NULL;
}

int ColArreglo::numeroElementos() const
{
    return can;
}

int ColArreglo::maximoElementos() const
{
    return tam;
}

bool ColArreglo::vacio() const
{
    return can==0;
}

Iterador* ColArreglo::obtenerIterador() const
{
    
    return new IteradorArreglo(can, vec);
}

string ColArreglo::toString() const
{
    stringstream s;
    Iterador* i = obtenerIterador();//Iterador para las colecciones tipo arreglo 
    while (i->masElementos()) {
        s << *(i->proximoElemento());
        if (i->masElementos())
            s << ", ";
    }
    delete i;
    return s.str();
}
