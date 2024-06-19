#pragma once
#include "Animal.h"

class Gato : public Animal {
private:
	string color;
public:
	Gato();
	Gato(string, int, string);
	Gato(const ObjetoBase& gat);
	virtual~Gato();
	virtual string toString() const;
	Gato& operator=(const Gato&);
};
