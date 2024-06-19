#pragma once
#include "Juego.h"

class Memento {
private:
	Juego* estado;// estado = foto del juego
public:
	Memento(Juego* est) { estado = est; }
	Juego* getEstado() { return estado; }

};
