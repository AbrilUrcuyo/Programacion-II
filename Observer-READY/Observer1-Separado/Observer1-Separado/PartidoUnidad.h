#pragma once
#include "Partido.h"


class PartidoUnidad :public Partido {
private:
	string nombre;
	//Aca pueden ir mas atributos
public:
	PartidoUnidad();
	virtual ~PartidoUnidad();
	virtual void upDate(int , int , int );
	virtual string toString();
	virtual void graficando();
};