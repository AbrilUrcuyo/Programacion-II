#include "Ingrediente.h"

Componente* Ingrediente::getSigIngre()
{
    return ptrCompo;
}

void Ingrediente::setSigIngre(Componente* ptr2)
{
    ptrCompo = ptr2;
}
