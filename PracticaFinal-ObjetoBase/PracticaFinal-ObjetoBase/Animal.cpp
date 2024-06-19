#include "Animal.h"

Animal::Animal()
{
	nombre = "";
	edad = 0;
}

Animal::Animal(string nom, int ed)
{
	nombre = nom;
	edad = ed;
}

Animal::~Animal()
{
	cout << "Eliminando el animal" << endl;
}
