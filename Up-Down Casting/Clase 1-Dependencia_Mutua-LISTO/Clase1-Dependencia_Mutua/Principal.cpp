#include "Persona.h"
#include "TV.h"

int main() {
	cout << "------Creando un persona-----" << endl;
	Persona* per = new Persona("Abril", "111", 20);
	cout << "--------Creando un TV----------" << endl;
	TV* tv = new TV(1, 10, 20);
	cout << "-------Televisor sin Persona------" << endl;
	cout << tv->toString() << endl;
	cout << "------Persona sin televisor------ " << endl;
	cout << per->toString()<<endl;
	cout << "-----Enlazando el tele con la persona y la persona con el tele------" << endl;
	per->setTv(tv);
	cout << "-------Televisor sin Persona------" << endl;
	cout << tv->toString() << endl;
	cout << "------Persona sin televisor------ " << endl;
	cout << per->toString() << endl;
	cout << "-------Televisor con Persona------" << endl;
	cout << tv->toString() << endl;
	cout << "------Persona contelevisor------ " << endl;
	cout << per->toString() << endl;
	delete per;
	delete tv;




	return 0;
}