#include <iostream>
#include <sstream>

using namespace std;

class Animal { // clase abstracta (tendrá como mínimo un M.V.P)
protected:
	string nombreA;
public:
	Animal(string nom) :nombreA(nom) {}
	virtual ~Animal() {}
	virtual string toString() = 0;
};

class Gato : public Animal {
private:
	int edad;
public:
	Gato(string nom, int ed) :Animal(nom), edad(ed) {}
	virtual ~Gato() {}
	string toString() {
		stringstream s;
		s << "Nombre del gato es: " << nombreA << " y la edad es de: " << edad << " anios." << endl;
		return s.str();
	}
};

class Perro : public Animal {
private:
	string raza;
public:
	Perro(string nom, string raz) :Animal(nom), raza(raz) {}
	virtual ~Perro() {}
	string toString() {
		stringstream s;
		s << "Nombre del perro es: " << nombreA << " y la raza es: " << raza <<
			endl;
		return s.str();
	}
};

class Caballo : public Animal {
private:
	double estatura;
public:
	Caballo(string nom, double est) :Animal(nom), estatura(est) {}
	virtual ~Caballo() {}
	string toString() {
		stringstream s;
		s << "Nombre del caballo es: " << nombreA << " y la estatura es de: " <<
			estatura << " mts." << endl;
		return s.str();
	}
};

int main() {
	cout << "UP-CASTING" << endl;
	cout << "------Crear animales-----" << endl;
	Animal* a1 = new Gato("Michu", 5);
	Animal* a2 = new Perro("Misingo", "salchicha");
	Animal* a3 = new Caballo("Rayo", 1.8);
	Animal* a4 = new Gato("Michi", 4);
	Animal* a5 = new Perro("Colita", "saguate");
	Animal* a6 = new Caballo("MisterX", 2.0);
	Animal* a7 = new Perro("Cloe", "saguate");

	Animal* v[7];
	cout << "-----Ingresando los animales-----" << endl;
	v[0] = a1;
	v[1] = a2;
	v[2] = a3;
	v[3] = a4;
	v[4] = a5;
	v[5] = a6;
	v[6] = a7;

	cout << "-----Imprimiendo los animales-----" << endl;
	for (int i = 0; i < 7; i++) {
		cout << v[i]->toString() << endl;
	}


	cout << "-----Imprimir solo los perros-----" << endl;
	for (int i = 0; i < 7; i++) {
		if (dynamic_cast<Perro*>(v[i])) {
			cout << v[i]->toString()<<endl<<endl;
		}
	}




	return 0;
}