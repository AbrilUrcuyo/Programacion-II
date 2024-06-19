#include <iostream>
#include <sstream>

using namespace std;

//Patron de Delegacion 

class A {//En esta clase vamos a delegar acciones
public:
	void cocinar() {
		cout << "A: ejecutando cocinar.f()" << endl;
	}
	void manejar() { cout << "A: ejecutando manejar.g()" << endl; }

};

class C {//Clase que da la cara y realiza funciones de A"
	//Las clases normalmente ya deben nacer con ese Objeto
	A* a = new A;//La clase A no tiene constructor entonces solo se pone asi
public:
	void cocinar() {//Aca parace que la clase C lo realiza, pero internamente lo realiza A
		//Se debe tener cuidado porque puede ser que el objeto de A este NULL
		a->cocinar();//Se invoca el metodo de A internamente 
		cout << "a->f()" << endl << endl;
	}
	void manejar() {
		a->manejar();
		cout << "a->g()" << endl << endl;
	}
};

int main() {
	C* c = new C;//Creamos un objeto de la clase C
	c->cocinar();
	c->manejar();
	//Aqui se observa que supuestamente la clase A no se utiliza
	//Pero en el interior de esos metodos se utiliza los metodos f y g de la clase A

	system("pause");

}