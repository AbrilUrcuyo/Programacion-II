#pragma once
#include <iostream>
#include <sstream>
#include "TV.h"

using namespace std;

class TV;

class Persona {
private:
	string nombre;
	string cedula;
	int edad;
	TV* tvPtr;
public:
	Persona();
	Persona(string, string, int);
	virtual~Persona();
	string getCedula();
	string getNombre();
	int getEdad();
	TV* getTv();
	void setCedula(string);
	void setNombre(string);
	void setEdad(int);
	void setTv(TV*);
	string toString();
};
