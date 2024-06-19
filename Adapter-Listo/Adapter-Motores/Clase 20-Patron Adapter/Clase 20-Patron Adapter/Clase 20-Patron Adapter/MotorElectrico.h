//---------------------Motor Electrico.h---------------------------
#pragma once
#include<iostream>
using namespace std;

class MotorElectrico {
private:
	bool conectado;
public:
	MotorElectrico();
	virtual ~MotorElectrico();
	void conectar();
	void activar();
	void moverMasRapido();
	void detener();
	void desconectar();
};