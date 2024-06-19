#pragma once
#include <iostream>
#include <sstream>

using namespace std;


class Figura {//Abstract
private:
	int x, y;//Se pueden tener atributos si  ningun problema
public:
	virtual ~Figura() {}
	virtual void dibujar() = 0;
	virtual void redimensionar(double) = 0;
	virtual string toString()const = 0;


};
