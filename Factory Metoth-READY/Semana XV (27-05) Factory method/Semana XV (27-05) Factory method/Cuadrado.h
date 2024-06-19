#pragma once
#include "Figura.h"

class Cuadrado :public Figura
{
	private:
		double lado;
	public:
		Cuadrado(string tip = "", double lad = 0);
		virtual ~Cuadrado();
		virtual double area();
		virtual double perimetro();
		virtual string toString();
};

