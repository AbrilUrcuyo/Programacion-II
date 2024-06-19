//--------------------------MotoElectrico.cpp-------------------------------
#include"MotorElectrico.h"

MotorElectrico::MotorElectrico() {
	cout << "Creando motor electrico." << endl;
	this->conectado = false;
}

MotorElectrico::~MotorElectrico()
{
	cout << "Eliminacion del motor electrico" << endl;
}

void MotorElectrico::conectar() {
	cout << "Conectando motor electrico." << endl;
	this->conectado = true;
}
void MotorElectrico::activar() {
	if (!conectado)
		cout << "Este motor electrico, No se puede activar puesto que no esta conectado" << endl;
	else
		cout << "Esta conectado, ... Activando motor electrico." << endl;
}

void MotorElectrico::moverMasRapido() {
	if (!conectado)
		cout << "No se puede mover mas rapido porque este motor electrico no esta conectado." << endl;
	else
		cout << "Moviendose más rapido. .... Aumentando voltaje" << endl;
}

void MotorElectrico::detener() {
	if (!conectado)
		cout << "No se deterner porque no esta conectado este motor electrico." << endl;
	else
		cout << "Deteniendo motor electrico." << endl;
}

void MotorElectrico::desconectar() {
	cout << "Desconectando Motor Electrico." << endl;
	this->conectado = false;
}