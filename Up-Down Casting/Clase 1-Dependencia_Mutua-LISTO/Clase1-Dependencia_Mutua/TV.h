#pragma once
#include<iostream>
#include <sstream>
#include "Persona.h"

using namespace std;


class Persona;//Siempre se debe poner una declaracion de la clase a la cual se tiene la dependencia

class TV {
private:
	bool encendido;
	int canal;
	int volumen;
	Persona* per;
public:
	TV();
	TV(bool, int, int);
	virtual~TV();
	bool getEncendido();
	int getCanal();
	int getVolumen();
	Persona* getPersona();
	void setEncendido(bool);
	void setCanal(int);
	void setVolumen(int );
	void setPersona(Persona*);
	string toString();


};
