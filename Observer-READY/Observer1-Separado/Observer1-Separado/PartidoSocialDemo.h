#pragma once
#include "Partido.h"



class PartidoSocialDemo : public Partido
{
private: 
	string nombre;
public:
	PartidoSocialDemo();
	virtual ~PartidoSocialDemo();
	virtual void upDate(int , int , int );
	virtual string toString();
	virtual void graficando();
};
