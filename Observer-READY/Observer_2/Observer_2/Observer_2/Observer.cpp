#include "Observer.h"
#include "Subject.h"

Observer::Observer(Subject* mod, int val2)
{
	model = mod;
	valor2 = val2;
	model->agregar(this); //En el momento que se crea un observador se agrega automaticamnete al subject 
}

Subject* Observer::getSubject()
{
	return model;
}

int Observer::getValor2()
{
	return valor2;
}
