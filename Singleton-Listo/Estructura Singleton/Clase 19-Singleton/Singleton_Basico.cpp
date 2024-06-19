#include <iostream>
#include <sstream>

using namespace std;

//Todo metodo static debe ser inicializado en cada .h y .cpp
class Singleton {
private:
	int num;//Atributos normales de la clase
	static Singleton* instance;//Puntero a un singleton 
	Singleton(int a);
	static void destroySingleton();//El destructor tambien es privado
public:
	virtual ~Singleton(){}
	static Singleton* getIntance(int a);
	string toString();
	void setNumero(int nume);
};


//TODO ESTO SE HACE EN EL .CPP

Singleton* Singleton::instance = NULL;//Inicializacion para el puntero singleton 

Singleton::Singleton(int a) {
	num = a;
}

Singleton* Singleton::getIntance(int a) {

	if (instance == NULL) {
		instance = new Singleton(a);
		atexit(&destroySingleton);
		//Aqui se tiene que poner el proceso de borrado cuados nos salgamos de la app, con atexit()
	}
	return instance;
}

void Singleton:: destroySingleton() {
	if (instance != NULL) {
		delete instance;
		instance = NULL;
	}
}

string Singleton::toString() {
	stringstream s;
	s << num << endl;
	return s.str();
}
void Singleton::setNumero(int nume) {
	num = nume;
}


int main() {
	Singleton* sin1, * sin2; //Simular tener dos singleton 

	cout << "Crear la primera instancia del singleton" << endl;
	sin1 = Singleton::getIntance(2);
	cout << "Sin1= " << sin1->toString() << endl;
	cout << "Tratanddo de crear una segunda instancia del singleton " << endl;
	sin2 = Singleton::getIntance(3);
	cout << "Sin2= " << sin2->toString() << endl;

	cout << "Tratando de crear una nueva instancia del singleton " << endl;
	cout << Singleton::getIntance(1)->toString() << endl;


	cout << "Vamos a setear el valor interno del singleton" << endl;
	cout << "sin2->setNumero(5)" << endl;
	sin2->setNumero(5);
	cout << "Sin2= " << sin2->toString() << endl;
	cout << "Sin1= " << sin1->toString() << endl;

	return 0;

}