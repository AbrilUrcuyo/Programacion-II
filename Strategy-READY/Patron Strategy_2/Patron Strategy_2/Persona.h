#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Persona {
private: 
	string nombre;
	string cedula;
	string apellido;
public:
	Persona(string = "", string = "", string = "");
	virtual ~Persona();
	string getCedula();
	string getNombre();
	string getApellido();
	string toString();

};

Persona::Persona(string  nom, string ced, string ape):
nombre(nom), cedula(ced), apellido(ape){}

inline Persona::~Persona()
{
}

inline string Persona::getCedula()
{
	return cedula;
}

inline string Persona::getNombre()
{
	return nombre;
}

inline string Persona::getApellido()
{
	return apellido;
}

inline string Persona::toString()
{
	return cedula + " " + nombre + " " + apellido + " ";
}
