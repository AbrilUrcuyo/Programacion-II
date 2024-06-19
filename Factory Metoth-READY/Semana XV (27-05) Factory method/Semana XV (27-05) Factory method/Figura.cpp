#include "Figura.h"

Figura::Figura(string tip) {
	tipo = tip;
}

Figura::~Figura()
{
}

string Figura::getTipo()
{
	return tipo;
}
