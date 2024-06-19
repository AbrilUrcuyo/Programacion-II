#pragma once
#include <iostream>
#include <sstream>
using namespace std;


//Este es la clase Observe
class Partido {

protected:
	int valorPLN;
	int valorPUSC;
	int valorPSD;
public:
	//Al ser abstracta no es necesario el contructor 
	Partido();
	virtual ~Partido();
	//Este metodo actualiza los datos cuando se llama a notify porque hay nuevo datos
	virtual void upDate(int, int, int) = 0;
	virtual string toString()=0;
	virtual void graficando()=0;
	virtual int getValor1();
	virtual int getValor2();
	virtual int getValor3();
	 

};

