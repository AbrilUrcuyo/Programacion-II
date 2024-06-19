#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Grabador { //Clase Abstracta....<<Abstract>>
protected:
	string codigo;
	string nombre;
public:
	Grabador(){}
	virtual ~Grabador(){}
	virtual string toString() = 0;
};
