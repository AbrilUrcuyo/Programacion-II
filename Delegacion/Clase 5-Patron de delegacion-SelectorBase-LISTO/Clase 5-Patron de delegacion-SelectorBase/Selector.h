#pragma once
//Tarea moral, si quite persona porque sigue funcionando

class Selector { //Clase Interfaz(Clase base)     esta clase es una clase abstracta 
protected:
	string descripcion;
public:
	Selector(string des): descripcion(des){}

	virtual ~Selector() {

	}

	virtual bool Seleccionar(Persona&) = 0;
	string obtenerDescripcion() {

		return descripcion;
	}


};


class SEdades :public Selector {
private:
	int edad_Minima;
	int edad_Maxima;

public:
	SEdades(int eMin, int eMax):Selector("Selector por rango de edades") {
		edad_Minima = eMin;
		edad_Maxima = eMax;
	}

	virtual~SEdades(){}

	virtual bool Seleccionar(Persona& p) {
		if (p.getEdad() > edad_Minima && p.getEdad()< edad_Maxima) {
			return true;
		}
		else {
			return false;
		}
	}


};

class SPeso: public Selector {
private:
	double peso;
public:
	SPeso(double p) :Selector("Selector por rango de edades") {
		peso = p;
	}

	virtual~SPeso() {}

	virtual bool Seleccionar(Persona& p) {
		if (p.getPeso()==peso) {
			return true;
		}
		else {
			return false;
		}
	}


};
