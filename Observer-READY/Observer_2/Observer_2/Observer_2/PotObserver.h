#pragma once
#include "Subject.h"
#include "math.h"
#include "Observer.h"


class PotObserver : public Observer {
public:
	PotObserver(Subject* mod, int val2)
		: Observer(mod, val2) {
	}
	void update() {
		//Este no tiene sentido, proqeu no actualiza nada, pero realiza el calculo

		int v = this->getSubject()->getValor1();
		int d = this->getValor2();
		cout << v << " elevado a " << d << " es: " << (double)pow(v, d);
	}

	string toString() {
		stringstream s;
		s << "--Esto lo hace el observer potenciacion--" << endl
			<< "La base..." << this->getSubject()->getValor1() << endl
			<< "Exponente: " << this->getValor2() << endl
		<< " = " << (double)pow(getSubject()->getValor1(), getValor2()) << endl;
		return s.str();
	}
};

