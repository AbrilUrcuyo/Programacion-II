#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Juego {
private:
//para cualquier juego se le debe meter este atributo
	string nombre;
	int puntoChequeo;//Elemento vital para el memento
	int numeroAleatorio;//Es parte del juego.. este debe ir cambiando
public:
	Juego(string NJ) {
		nombre = NJ;
		puntoChequeo = 0;
		numeroAleatorio = 0;
	}
	virtual ~Juego(){}

	string getNombre() { return nombre; }
	int getPuntoDeChequeo() { return puntoChequeo; }
	int getNumeroAleatorio() { return numeroAleatorio; }

	void setNombre(string nom) { nombre = nom; }
	void setPuntoDeChequeo(int punto) { puntoChequeo = punto; }
	void setNumeroAleatorio(int numA) { numeroAleatorio = numA; }

	string toString() {
		stringstream s;
		s << "Nombre del juego: " << getNombre() << endl;
		s << "Punto de chequeo: " << getPuntoDeChequeo() << endl;
		s << "Numero Aleatorio: " << getNumeroAleatorio() << endl;
		return s.str();
	}





};
