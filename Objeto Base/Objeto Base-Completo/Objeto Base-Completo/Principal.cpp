#include "Persona.h"
#include "IteradorArreglo.h"
#include "IteradorLista.h"
#include "ColArreglo.h"
#include "ColLista.h"


int main() {
	cout << "-------------Creando Personas-------------" << endl;
	Persona* per1 = new Persona("Abril", "Urcuyo", 20);
	Persona* per2 = new Persona("Lenna", "Nuñez", 19);
	Persona* per3 = new Persona("Esteban", "Anchia", 18);
	Persona* per4 = new Persona("Tania", "Arias", 30);
	Persona* per5 = new Persona("Josue", "Urcuyo", 25);

	cout << "----------Creacion del contenedor tipo Arreglo------" << endl;
	int tam = 10;
	ColArreglo* colecccionArre = new ColArreglo(tam);
	cout << "----Ingresando las personas en el arreglo----" << endl;
	colecccionArre->agregar(per1->clonar());
	colecccionArre->agregar(per2->clonar());
	colecccionArre->agregar(per3->clonar());
	colecccionArre->agregar(per4->clonar());
	colecccionArre->agregar(per5->clonar());
	cout << "---Imprimiendo el contenedor ---" << endl;
	cout << colecccionArre->toString();



	cout << "----------Creacion del contenedor tipo lista------" << endl;
	ColLista* coleccionLista = new ColLista();
	cout << "----Ingresando las personas a la lista----" << endl;
	coleccionLista->agregar(per1->clonar());
	coleccionLista->agregar(per2->clonar());
	coleccionLista->agregar(per3->clonar());
	coleccionLista->agregar(per4->clonar());
	coleccionLista->agregar(per5->clonar());
	cout << "---Imprimiendo el contenedor tipo lista ---" << endl;
	cout << coleccionLista->toString();




	delete coleccionLista;

	cout << colecccionArre->toString();











	return 0;
}
