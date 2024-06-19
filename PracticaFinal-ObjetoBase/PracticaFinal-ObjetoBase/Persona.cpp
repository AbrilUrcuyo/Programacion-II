#include "Persona.h"

Persona::Persona()
{
    nombre = "";
    edad = 0;

}

Persona::Persona(const ObjetoBase& obj  )
{
    Persona* per = dynamic_cast<Persona*>((ObjetoBase*)&obj);
    this->nombre = per->nombre;
    this->edad = per->edad;
}

Persona::Persona(string nom, int ed)
{
    nombre = nom;
    edad = ed;
}

Persona::~Persona()
{
    cout << "Elimando a la perona" << endl;
}

string Persona::toString() const
{
    stringstream s;
    s << "Nombre:" << nombre<<endl;
    s << "Edad: " << edad<<endl;
    return s.str();
}

Persona& Persona::operator=(const Persona& per)
{
    this->nombre = per.nombre;
    this->edad = per.edad;
    return *this;

    
}

