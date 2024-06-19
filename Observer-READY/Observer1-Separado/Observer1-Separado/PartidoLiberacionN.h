#pragma once
#include "Partido.h"
//Esta clase es hijo de observer


class PartidoLiberacionN: public Partido{
private:
	//Aca podrian ir mas atributos
	string nombre;
public:
	PartidoLiberacionN();
	virtual ~PartidoLiberacionN();
	virtual void upDate(int  , int , int );
	virtual string toString();
	virtual void graficando();

};