#pragma once
#include <sstream>
using namespace std;
class Observer;// Declaracion Previa


class Subject {
private:
	//Parte del contenedor......
	Observer* vec[20];
	int can;
	int tam;
	int valor1; //Elemento que va a variar
public:
	Subject(int = 0);
	virtual~Subject();
	void agregar(Observer* obs);//attach importante  
	void setValor1(int val1);//importante 
	int getValor1();
	void notify();//importante
	string toString();


};
