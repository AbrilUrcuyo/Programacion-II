#pragma once
#include "Figura.h"

class Triangulo :public Figura
{
	private:
		double base;
		double altura;
	public:
		Triangulo(string tip = "", double bas = 0, double alt = 0);
		virtual ~Triangulo();
		virtual double area();
		virtual double perimetro();
		virtual string toString();
};

