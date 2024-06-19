#include "Lista.h"
#include "Persona.h"

int  main() {


	Lista<Persona>* lista = new Lista<Persona>();
	cout << "Creando las personas" << endl;
	Persona* per1 = new Persona("111", "Abril", "Urcuyo", 20,3);
	Persona* per2 = new Persona("222", "Josue", "Urcuyo", 25, 2);
	Persona* per3 = new Persona("333", "Esteban", "Urcuyo", 17,1);
	Persona* per4 = new Persona("444", "Sofia", "Urcuyo", 8,0);

	cout << "Ingresando las personas al contenedor" << endl;
	lista->agregarInicio(per1);
	lista->agregarInicio(per2);
	lista->agregarInicio(per3);
	lista->agregarInicio(per4);

	cout << "Mostrando el contenedor del Personas" << endl;
 	cout<<lista->toString()<<endl;


	cout << "Invirtiendo la lista" << endl;
	lista->invierteLista();

	cout << "Mostrando el contenedor del Personas" << endl;
	cout << lista->toString() << endl;

	cout << "Eliminando toda la lista" << endl;
	lista->eliminarTodos();



	//cout << "Eliminando una persona del contenedor por cedula:";
	//cout << *lista->eliminar("444");
	//cout << endl << endl;


	//cout << "Mostrando el contenedor del Personas luego de eliminar" << endl;
	//cout << lista->toString() << endl;


};