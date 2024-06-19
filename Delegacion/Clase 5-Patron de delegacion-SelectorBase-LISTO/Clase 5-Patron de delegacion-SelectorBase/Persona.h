#pragma once
#include <iostream>
#include<iostream>
#include<sstream>

using namespace std;

class Persona {
private:
	string cedula;
	string nombre;
	int edad;
	double peso;
public:
	Persona(string ced, string nom, int ed, double pe)
		:cedula(ced), nombre(nom), edad(ed), peso(pe) {}
	virtual ~Persona() {}
	string getCedula() { return cedula; }
	string getNombre() { return nombre; }
	int getEdad() { return edad; }
	double getPeso() { return peso; }
	string toString() {
		stringstream s;
		s << "Yo soy: " << nombre << " con cedula: "
			<< cedula << " edad: " << edad
			<< " y peso: " << peso << " Kgr." << endl;
		return s.str();
	}
};
