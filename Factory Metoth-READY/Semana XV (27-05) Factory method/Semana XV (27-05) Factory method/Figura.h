#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Figura
{
	protected:
		string tipo;
	public:
		Figura(string tip = "");
		virtual ~Figura();
		virtual string getTipo();
		virtual double area() = 0;
		virtual double perimetro() = 0;
		virtual string toString() = 0;
};
