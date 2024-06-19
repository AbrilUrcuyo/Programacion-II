#include "Gato.h"

Gato::Gato()
{
    color = "";
}

Gato::Gato(string nom, int ed, string co)
: Animal(nom,ed){
   
    color = co;
}

Gato::Gato(const ObjetoBase& gat)
{
    Gato* gati = dynamic_cast<Gato*>((ObjetoBase*)&gat);
    this->nombre = gati->nombre;
    this->edad = gati->edad;
    this->color = gati->color;
}

Gato::~Gato()
{
    cout << "Eliminando al gato" << endl;
}

string Gato::toString() const
{
    stringstream s;
    s << "Nombre:  " << nombre << endl;
    s << "Edad: " << edad << endl;
    s << "Color: " << color << endl;
    return s.str();
}

Gato& Gato::operator=(const Gato& gat)
{
    this->nombre = gat.nombre;
    this->edad = gat.edad;
    this->color = gat.color;
    
    return *this;

}


