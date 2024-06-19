#pragma once
#include "Memento.h"

class RepositorioMementos {
private:
	Memento* vec[10];
	int can;
	int tam;
public:
	RepositorioMementos() {
		can = 0;
		tam = 10;
		for (int i = 0; i < tam; i++) {
			vec[i] = NULL;
		}
	}

	void agregaMemento(Memento* m) {
		if (can < tam) {
			vec[can++] = m;
		}
	}

	Memento* getMemento(int pos ) {
		if (pos >= 0 && pos <= tam) {
			return vec[pos];
		}
		else {
			return NULL;
		}
	}


	string toString() {
		stringstream s;
		s << "--LOS MEMENTOS QUE EXISTEN SON--" << endl;

		for (int i = 0; i < can; i++) {
			s << "No. " << i << " Punto de chequeo: : "
				<< vec[i]->getEstado()->getPuntoDeChequeo() << endl;
			s << "Y su numero aleatorio es: "
				<< vec[i]->getEstado()->getNumeroAleatorio() << endl;
		}

		return s.str();
	}
};
