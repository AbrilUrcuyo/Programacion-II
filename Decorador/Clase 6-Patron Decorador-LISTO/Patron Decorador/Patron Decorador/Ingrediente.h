#pragma once
#include "Componente.h"

class Ingrediente : public Componente { //clase Abstracta, es el que tiene los decorados que se pueden poner 
protected:
	string nombre;
	Componente* ptrCompo;//Este es como un enlaze hacia otro decorador
public:
	virtual ~Ingrediente(){} //Tarea moral??
	virtual double costo() = 0;
	virtual string toString() = 0; //Tarea Moral, cambiar la parte del costo 
	virtual string getNombre() = 0;
	virtual Componente* getSigIngre();
	virtual void setSigIngre(Componente*);

};
