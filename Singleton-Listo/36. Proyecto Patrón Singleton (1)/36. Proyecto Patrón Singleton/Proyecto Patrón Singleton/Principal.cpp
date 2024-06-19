#include<iostream>
#include<sstream>
using namespace std;

class Singleton {
private:
	int num;
	static Singleton* instance;          //Puntero al único Singleton que existira (atributo STATIC)
	Singleton(int);
	static void destroySingleton();      //Destruye el Singleton al terminar el porgrama
public:
	virtual ~Singleton();
	static Singleton* getInstancia(int); //Recibe los parámetros del Constructor
	string toString();
	void setNumero(int);
};

Singleton* Singleton::instance = NULL;  //Inicialización del Singleton

Singleton::Singleton(int a) {
	num = a;
}

Singleton::~Singleton() { 
	cout << "Singleton destruido...\n\n";
}

Singleton* Singleton::getInstancia(int a) {
	if (!instance) {
		instance = new Singleton(a);
		atexit(&destroySingleton); // Al terminar el programa, se llama este método
	}                              // Notar que es la referencia de un método, sin ()
	return instance;
}

string Singleton::toString(){
	stringstream s;
	s << num << endl;
	return s.str();
}

void Singleton::setNumero(int n){
	num = n;
}

void Singleton::destroySingleton(){
	if (instance) {
		delete instance;
		instance = NULL;
	}
}

int main() {
	Singleton* sin1, * sin2; // Simular tener dos Singleton...
	cout << "Creando la primera instancia del Singleton..." << endl;
	sin1 = Singleton::getInstancia(2);
	cout << "sin1 = " << sin1->toString() << endl << endl;
	cout << "Tratando de crear una segunda instancia del Singleton" << endl;
	sin2 = Singleton::getInstancia(3);
	cout << "sin2 = " << sin2->toString() << endl << endl;
	cout << "Tratando de crear una tercera instancia del Singleton" << endl << "sin3 = ";
	cout <<  Singleton::getInstancia(3)->toString() << endl << endl;;
	cout << "Vamos a setear un valor al Singleton..." << endl;
	sin1->setNumero(5);
	cout << "sin = " << sin2->toString() << endl;

	system("pause");
	//Se puede debugguear aquí para ver proceso de borrado del Singleton...
	return 0;
}