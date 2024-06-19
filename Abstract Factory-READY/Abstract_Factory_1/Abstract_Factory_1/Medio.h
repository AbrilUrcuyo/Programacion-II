#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Medio {
protected:
	string nombre;
	string codigo;
public:
	Medio(){}
	virtual ~Medio(){}
	virtual string toString() = 0;
};
