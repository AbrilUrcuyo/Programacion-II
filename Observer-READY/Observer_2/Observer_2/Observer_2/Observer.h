#pragma once
#include <iostream >
#include <sstream>
using namespace std;

class Subject;

class Observer {
protected:
	int valor2;//valor propio de cada observer 
	Subject* model;//Puntero al subject
public:
	Observer(Subject*, int);//Constructor del observer
	virtual void update() = 0;
	virtual string toString() = 0;
protected:
	Subject* getSubject();
	int getValor2();

};
