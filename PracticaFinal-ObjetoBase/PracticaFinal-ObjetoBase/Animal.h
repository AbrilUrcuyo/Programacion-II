#pragma once
#include "ObjetoBase.h"

class Animal : public ObjetoBase {
protected:
	string nombre;
	int edad;
public:
	Animal();
	Animal(string, int);
	virtual~Animal();
	virtual string toString() const = 0;
	


};
