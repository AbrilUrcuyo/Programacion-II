#pragma once
#include "Figura.h"

class Circulo: public Figura
{
	private:
		double radio;
	public:
		Circulo(string tip = "", double rad = 0);
		virtual ~Circulo();
		virtual double area();
		virtual double perimetro();
		virtual string toString();
};

