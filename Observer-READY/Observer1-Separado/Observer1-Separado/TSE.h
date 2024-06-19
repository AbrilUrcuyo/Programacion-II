#pragma once
#include "Partido.h"

using namespace std;


class TSE {
private:
	int numMesa;
	int valor1;//voto de la mesa numMesa para el PLN
	int valor2;//voto de la mesa numMesa para el PUSC
	int valor3;//voto de la mesa numMesa para el PSD
	//Aca debe exitir un contenedor de observers... (SUSCRIPCION)
	Partido** vec;
	int can;
	int tam;



public:
	TSE();
	virtual ~TSE();
	void attach(Partido*);//----------------------------->VITAL
	void setValores(int, int , int ); //Aca se setean los valores de la nueva mesa....------>VITAL
	void notify(); //----------------------------->VITAL
	void conteoDeVotosxMesa();
	void infoDeMesa();
	void solicitudDeNuevaMesa();


};
