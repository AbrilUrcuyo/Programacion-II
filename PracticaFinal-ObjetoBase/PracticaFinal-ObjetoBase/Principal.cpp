#include "ObjetoBase.h"
#include "Persona.h"
#include "Gato.h"
#include "Perro.h"
#include "ColeccionL.h"

int main() {
	cout << "Creando instancias dos instancias de la misma persona" << endl;
	ObjetoBase* per1 = new Persona("Juan", 20);
	ObjetoBase* per2 = new Persona(*per1);


	cout << "Creando instancias de dos animales" << endl;
	ObjetoBase* gat = new Gato("Michi", 5, "Blanco");
	ObjetoBase* perro = new Perro("Dalton", 10, "Saguate");

	cout << "Creando un contenedor tipo lista" << endl;
	Coleccion* lista = new ColeccionL();
	lista->agregar(*per1);
	lista->agregar(*per2);
	lista->agregar(*gat);
	lista->agregar(*perro);
	cout << lista->toString();



};