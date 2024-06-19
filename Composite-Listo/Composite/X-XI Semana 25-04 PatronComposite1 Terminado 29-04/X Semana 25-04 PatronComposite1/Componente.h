#pragma once
#include<iostream>
#include<sstream>
using namespace std;


class Componente //Abstracta <Interfaz>
{
	protected:
		string nombre;
		double precio;
		string codigo;
	public:
		Componente(){}
		virtual ~Componente(){}
		virtual string getNombre() = 0;
		virtual double getPrecio() = 0;
		virtual string getCodigo() = 0;
		virtual string toString() = 0;
		virtual void Add(Componente& comp) = 0;
		virtual void Delete(Componente& comp) = 0; //Le llega un Componente para buscarlo en el contenedor
		virtual Componente& clonar() = 0;
};

