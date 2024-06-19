#pragma once
#include <iostream>
#include <sstream>

//Creacion de plantilla de clase
//Contenedor generico
//o una plantilla de clase
using namespace std;

template<class T>
class Pareja {
private:
	T primero;
	T segundo;
public:
	Pareja(T primero_valor, T segundo_valor);//Constructor
	void fijar_Elemento(int ubicacion, T valor);//Este seria como un tipo set
	T obtenerElemento(int ubicacion);//este seria como un get
};

template<class T>
Pareja<T>::Pareja(T primero_valor, T segundo_valor)
{
	primero = primero_valor;
	segundo = segundo_valor;

}

template<class T>
void Pareja<T>::fijar_Elemento(int ubicacion, T valor)
{
	//fijar el elemento dependiendo de la ubicacion
	if (ubicacion == 1) {
		primero = valor;
	}
	else {
		segundo = valor;
	}
}

template<class T>
T Pareja<T>::obtenerElemento(int ubicacion)
{
	if (ubicacion == 1) {
		return primero;
	}
	else {
		return segundo;
	}
}
