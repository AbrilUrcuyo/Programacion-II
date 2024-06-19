#pragma once
#include "Observer.h"
#include "Subject.h"

class MultObserver: public Observer {
public:
	MultObserver(Subject* mod, int val2):Observer(mod, val2) {

	}



	void update() {
		int v = this->getSubject()->getValor1();
		int d = getValor2();
		cout << v << " multiplicado por " << d << " es " << v * d << endl;

	}

	string toString() {
		stringstream s;
		s << "-----Esto lo hace el observer Multiplicacion-----" << endl
			<< " Primer multiplo: " << this->getSubject()->getValor1() << endl
			<< " Segundo multiplo: " << this->getValor2() << endl
			<< " = " << getSubject()->getValor1() * getValor2() << endl;
		return s.str();

	}
};

