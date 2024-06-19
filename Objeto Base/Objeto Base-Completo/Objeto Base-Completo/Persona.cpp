#include "Persona.h"

Persona::Persona(string nom, string ape, int ed) :
	nombre(nom), apellido(ape), edad(ed)
{
}

Persona::Persona(const Persona& per)
{
	this->nombre = per.nombre;
	this->apellido = per.apellido;
	this->edad = per.edad;
}

Persona::~Persona()
{
}

string Persona::toString() const
{
	stringstream s;
	s << "-----Info Persona----" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Apellido: " << apellido << endl;
	s << "Edad: " << edad << endl;
	return s.str();
}

ObjetoBase* Persona::clonar() const
{
	return new Persona(*this);
}

Persona& Persona::operator=(Persona& per)
{
	if (this != &per) {//Comprueba que no sea la misma direccion de memoria
		this->nombre = per.nombre;
		this->apellido = per.apellido;
		this->edad = per.edad;

	}
	return *this;
}
