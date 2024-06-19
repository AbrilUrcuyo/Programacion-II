#pragma once
#include "ObjetoBase.h"

class Persona : public ObjetoBase {
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(const ObjetoBase& per);
	Persona(string, int);
	virtual~Persona();
	virtual string toString() const;
	Persona& operator=(const Persona&);


};