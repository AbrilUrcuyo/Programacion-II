#pragma once
#include "ObjetoBase.h"

class Persona :public ObjetoBase {
private:
	string nombre;
	string apellido;
	int edad;
public:
	Persona(string = "", string = "", int = 0);
	Persona(const Persona& per);//Constructor Copia

	virtual ~Persona();
	virtual string toString() const;

	//El objeto puede clonarse o hacer la sobrecarga del =
	virtual ObjetoBase* clonar() const;
	Persona& operator =(Persona & per);
};
