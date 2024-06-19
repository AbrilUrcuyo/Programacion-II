#pragma once
#pragma once
#include"Persona.h"
#include"Selector.h"

class Contenedor {
private:
	Persona** vec;
	int can;
	int tam;
public:
	Contenedor(int taman) {
		vec = new Persona * [taman];
		can = 0;
		tam = taman;
		for (int i = 0; i < taman; i++)
			vec[i] = NULL;
	}
	virtual ~Contenedor() {
	}
	//El agregar persona debe ser un agregar copia osea composicion
	//TAREA MORAL (lISTO)
	Persona* agregaComposicion(Persona& p) {
		Persona* personaN = new Persona(p.getCedula(), p.getNombre(), p.getEdad(), p.getPeso());
		return personaN;
	
	}

	bool agregaPersona(Persona& p) {
		if (can < tam) {
			vec[can++] = agregaComposicion(p);
			return true;
		}
		else
			return false;
	}
	Contenedor* seleccionar(Selector& select) {
		Contenedor* conteN = new Contenedor(can);
		for (int i = 0; i < can; i++) {
			if (select.Seleccionar(*vec[i])) {
				conteN->agregaPersona(*vec[i]);
			}
		}
		return conteN;
	}
	string toString() {
		stringstream s;
		s << "-------------------SELECCION------------------" << endl;
		for (int i = 0; i < can; i++)
			cout << vec[i]->toString() << endl;
		return s.str();
	}
};
