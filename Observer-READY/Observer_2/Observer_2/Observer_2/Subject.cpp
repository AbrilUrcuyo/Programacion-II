#include "Subject.h"
#include "MultObserver.h"
#include "PotObserver.h"

Subject::Subject(int val1)
{
	can = 0;
	tam = 20;
	valor1 = val1;
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
	
}

Subject::~Subject()
{
	for (int i = 0; i < can; i++) {
		delete vec[i];
	}
}

void Subject::agregar(Observer* obs)
{
	if (can < tam) {
		vec[can++] = obs;
	 }
}

void Subject::setValor1(int val1)
{
	valor1 = val1;
	this->notify();
}

int Subject::getValor1()
{
	return valor1;
}

void Subject::notify()
{
	for (int i = 0; i < can; i++) {
		vec[i]->update();
	}
}

string Subject::toString()
{
	stringstream s;
	s << "-----LISTADO DE OBSERVER----" << endl;
	for (int i = 0; i < can; i++) {
		s << "No." << i + 1 << endl
			<< vec[i]->toString() << endl;
	}
	return s.str();
}
