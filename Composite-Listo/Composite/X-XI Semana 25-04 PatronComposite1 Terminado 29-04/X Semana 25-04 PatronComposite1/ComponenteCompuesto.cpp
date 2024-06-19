#include "ComponenteCompuesto.h"

ComponenteCompuesto::ComponenteCompuesto(string nom, string cod)
{
    nombre = nom;
    codigo = cod;
    precio = 0; //Como las bolsas en el super, en algunos las cobran en otras no
    //Contenedor...
    cantidad = 0;
    tamanio = 100;
    for (int i = 0; i < tamanio; i++)
        vec[i] = NULL;
}

ComponenteCompuesto::ComponenteCompuesto(const ComponenteCompuesto& compc)
{
    this->nombre = compc.nombre;
    this->codigo = compc.codigo;
    this->precio = compc.precio;
    this->cantidad = compc.cantidad;
    this->tamanio = compc.tamanio;

    for (int i = 0; i < cantidad; i++) {
        this->vec[i] = (Componente*)&compc.vec[i]->clonar();
    }

}

ComponenteCompuesto::~ComponenteCompuesto()
{
    //Tarea moral
    for (int i = 0; i < cantidad; i++)
        delete vec[i];
}

string ComponenteCompuesto::getNombre()
{
    return nombre;
}

double ComponenteCompuesto::getPrecio()
{
    double aux = precio;
    for (int i = 0; i < cantidad; i++)
        aux += vec[i]->getPrecio();
    return aux;
}

string ComponenteCompuesto::getCodigo()
{
    return codigo;
}

string ComponenteCompuesto::toString()
{
    stringstream s;
    s << "------ PAQUETE ------" << endl;
    s << "Nombre: " << nombre << endl;
    s << "Codigo: " << codigo << endl;
    for (int i = 0; i < cantidad; i++)
        s << vec[i]->toString() << endl;
    return s.str();
}

void ComponenteCompuesto::Add(Componente& comp)
{
    if (cantidad < tamanio) {
        vec[cantidad++] = (Componente*)&comp.clonar();
    }
}

void ComponenteCompuesto::Delete(Componente& comp)
{
    Componente* aux = NULL;
    for (int i = 0; i < cantidad; i++) {
        if (vec[i]->getCodigo() == comp.getCodigo()) {
            aux = vec[i];
            //Hacer el corrimiento
            for (int j = i; j < cantidad-1; j++) {
                vec[j] = vec[j++];
            }
            //Reducir la cantidad
            cantidad--;
        }
    }
}

Componente& ComponenteCompuesto::clonar()
{
    return *new ComponenteCompuesto(*this);
}
