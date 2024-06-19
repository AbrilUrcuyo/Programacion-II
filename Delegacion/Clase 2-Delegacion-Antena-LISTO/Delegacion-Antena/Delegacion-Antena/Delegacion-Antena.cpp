#include <iostream>
#include <sstream>

using namespace std;

class Antena {
public:
	virtual void f() = 0; //M.VP
};

class AntenaRemotaA : public Antena {
public:
	void f() {
		cout << "AR-A::f() Conectada y trasnmitiendo por AR-A" << endl;
	}
};


class AntenaRemotaB : public Antena {
public:
	void f() {
		cout << "AR-B::f() Conectada y trasnmitiendo por AR-B" << endl;
	}
};


//La siguiente clas tiene un interruptor del delegado
//para Antena remota A y Antena Remota B


class AntenaRemota {
private:
	Antena* antPtr;//Aca se usa el up-casting para poder tener acceso a la remota A y remota B
public:
	AntenaRemota() {
		//Se le debe vincular con A para tenerle asigando algun chip, no importa,podria ser remota B 
		antPtr = new AntenaRemotaA;
	}
	void f() { 
		antPtr->f(); 
	}

	void conmutacionHaciaA() {
		//Permite cambiar de cualquier antena a A
		delete antPtr;
		antPtr = new AntenaRemotaA();
	}
	void conmutacionHaciaB() {
		//Permite cambiar de cualquier antena a B
		delete antPtr;
		antPtr = new AntenaRemotaB();
	}
};

int main() {
	AntenaRemota* remota = new AntenaRemota();
	remota->f();//Aca se transmite por el canal a

	remota->conmutacionHaciaB();//se cambia a remota B

	remota->f();//Aca se transmite por el canal B

	remota->conmutacionHaciaA();//se cambia a remota A
}