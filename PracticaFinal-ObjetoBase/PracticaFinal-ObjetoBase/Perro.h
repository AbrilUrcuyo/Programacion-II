#pragma once
#include "Animal.h"

class Perro : public Animal {
private:
	string raza;
public:
	Perro();
	Perro(string nom, int ed, string raz);
	Perro(const ObjetoBase&);
	virtual ~Perro();
	virtual string toString() const;
	Perro& operator=(const Perro&);
};
