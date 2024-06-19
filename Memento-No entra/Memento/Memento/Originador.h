#pragma once
#include "Memento.h"

class Originador {
private:
	//este puede recibir una foto para restablecer
	//este puede recibir un juego y darme la foto de juego
	Juego* estado;
public:
	//este no tiene un constructor, ni destructor

	//aca hay un constructor por defecto
	void setEstado(Juego* est) { estado = est; }
	Juego* getEstado() { return estado; }
	Memento* retornaMemento() { return new Memento(estado); }
	void restauraMemento(Memento* m) { estado = m->getEstado(); }
};
