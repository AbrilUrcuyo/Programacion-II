#pragma once
#include "Persona.h"

class Reporte {//Abstracta
public:
	virtual void encabezado() = 0;
	virtual void mostrar(Persona p) = 0;
};


//--------------------------Reporte simple o llano------------------------------------

class Simple : public Reporte {
public:
	Simple();
	virtual ~Simple();
	void encabezado();
	void mostrar(Persona p);

};

Simple::Simple()
{
}

Simple::~Simple()
{
}

void Simple::encabezado()
{
	cout << "------------------------------------" << endl;
	cout << "-------Reporte Simple o Llano-------" << endl;
	cout << "-----------De Personas--------------" << endl;
	cout << endl;


}

void Simple::mostrar(Persona p)
{
	cout << p.toString().c_str() << endl;//Tarea moral que es c_str
}





//---------------------------------------Reporte Formateado--------------------------------
class Formateado : public Reporte {
public:
	Formateado();
	virtual ~Formateado();
	void encabezado();
	void mostrar(Persona p);

};

Formateado::Formateado()
{
}

Formateado::~Formateado()
{
}

void Formateado::encabezado()
{
	cout << "------------------------------------" << endl;
	cout << "---------Reporte Formateado---------" << endl;
	cout << "-----------De Personas--------------" << endl;
	cout << "------------------XML---------------" << endl;
	cout << endl;


}

void Formateado::mostrar(Persona p)
{
	cout << "<Persona>  " << endl
		<< "<Cedula>   " << p.getCedula().c_str() << "<\\Cedula>" << endl
		<< "<Nombre>   " << p.getNombre().c_str() << "<\\Nombre>" << endl
		<< "Apellido>  " << p.getApellido().c_str() << "<\\Apellido> " << endl
		<< "\\Persona> " << endl << endl << endl;
}
