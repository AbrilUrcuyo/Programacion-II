#include "Perro.h"

Perro::Perro()
{
	raza = "";
}

Perro::Perro(string nom, int ed, string raz)
:Animal(nom, ed){
	raza = raz;
}

Perro::Perro(const ObjetoBase& per)
{
	Perro* perr = dynamic_cast<Perro*>((ObjetoBase*)&per);
	this->nombre = perr->nombre;
	this->edad = perr->edad;
	this->raza = perr->raza;

}

Perro::~Perro()
{
	cout << "Elimando el perro" << endl;
}

string Perro::toString() const
{
	stringstream s;
	s << "Nombre:" << nombre<<endl;
	s << "Edad: " << edad<<endl;
	s << "Raza: " << raza<<endl;
	return s.str();
}

Perro& Perro::operator=(const Perro& per)
{
	this->nombre = per.nombre;
	this->edad = per.edad;
	this->raza = per.raza;
	return *this;
}
