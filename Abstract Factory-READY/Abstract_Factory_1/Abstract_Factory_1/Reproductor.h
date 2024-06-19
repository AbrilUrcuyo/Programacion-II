#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Reproductor { //Clase Abstracta....<<Abstract>>
protected:
	string codigo;
	string nombre;
public:
	Reproductor() {}
	virtual ~Reproductor() {}
	virtual string toString() = 0;
};