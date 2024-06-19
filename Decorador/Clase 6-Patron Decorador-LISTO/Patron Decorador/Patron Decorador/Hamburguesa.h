#pragma once
#include "Componente.h"

class Hamburgesa : public Componente { //Componente concreto o lo decorado
public:
	Hamburgesa(void);
	virtual ~Hamburgesa(void);
	virtual double costo();
	virtual string toString();
	virtual string getNombre();
	virtual Componente* getSigIngre();
	virtual void setSigIngre(Componente*);
};
