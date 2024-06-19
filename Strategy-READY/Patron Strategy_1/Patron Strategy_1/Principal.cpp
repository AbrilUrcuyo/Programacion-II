#include<iostream>
#include<sstream>
using namespace std;

// Herencia de Estrategias de Defensas de Ajedréz...

class EstApertura {  // Estrategia de Defensa... <<Abstract>>
public:
	virtual void tipoEstrategia() = 0;   // M.V.P.
};

class DefSiciliana : public EstApertura {
public:
	void tipoEstrategia() {
		cout << "Utilizando la defensa Siciliana." << endl;
	}
};

class DefPtrov : public EstApertura {
public:
	void tipoEstrategia() {
		cout << "Utilizando la defensa Petrov." << endl;
	}
};

class DefBerlinesa : public EstApertura {
public:
	void tipoEstrategia() {
		cout << "Utilizando la defensa Berlinesa." << endl;
	}
};

// Clase Contexto...

class JugadorM {
private:
	string nombre;
	EstApertura* ptr;   // Atributo estrategia..
public:
	JugadorM(string nom);
	void setEstrategia(EstApertura*);  // Aquí el jugador recibe la estrategia a aplicar..
	void ejecutarEstrategia();         // Metodo que pone en acción la estrategia seleccionada..
};


JugadorM::JugadorM(string nom) :nombre(nom) {
	ptr = NULL;
}

void JugadorM::setEstrategia(EstApertura* ptrE) {
	if (ptr != NULL)
		delete ptr;
	ptr = ptrE;  // se establece la nueva estrategia.
}

void JugadorM::ejecutarEstrategia() {
	cout << "Yo jugador con nombre: " << nombre << " voy a ";
	cout << "desarrollar esta estrategia: " << endl;
	ptr->tipoEstrategia();
}

int main() {
	EstApertura* ptr1 = NULL;
	int op;
	// Declarar y definir un jugador...
	JugadorM* jug1 = new JugadorM("Kasparov");

	// Aquí deberá existir un menu que ayude a establecer la estrategia a seguir...
	// Menu.
	// Se declar y define la estrategia...
	cout << "---------MENU----------" << endl;
	cout << "     1- Defensa Siciliana." << endl;
	cout << "     2- Defensa Petrov." << endl;
	cout << "     3- Defensa Berlinesa." << endl;
	cout << "-----------------------" << endl;
	cout << "Digite defensa preferida: ";
	cin >> op;
	switch (op) {
	case 1: ptr1 = new DefSiciliana(); break;
	case 2: ptr1 = new DefPtrov(); break;
	case 3: ptr1 = new DefBerlinesa(); break;
	}
	// De alguna forma el jugador escoge alguna defensa...
	jug1->setEstrategia(ptr1);

	// finalmente el jugador aplica o ejecuta dicha estrategia..
	jug1->ejecutarEstrategia();

	delete jug1;
	delete ptr1;

	system("pause");
	return 0;
}