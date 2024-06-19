//Delegacion de herencia
#include <iostream>
#include <sstream>

using namespace std;


class Persona {
private:
	string nombre;
public:
	Persona(string nom) : nombre(nom) {
		cout << "Creando persona base" << endl;
	}
	virtual ~Persona() {
		cout << "Elimando la persona" << endl;
	}
	virtual void alimenta() {
		cout << "Yo " << nombre << " me alimento 3 veces al dia " << endl;
	}
	virtual void camina() {
		cout << "Yo camino diariamente 5 kms" << endl;
	}
	virtual void duerme() {
		cout << "Yo duermo 8 hrs" << endl;
	}
};

class Estudiante {
public:
	void asistirALecciones() {
		cout << "Yo asisto a clases por las noches" << endl;
	}

	void hacerAsiganaciones() {
		cout << "Yo realizo tareas Morales periodicamente" << endl;
	}
};

class Deportista {
public:
	Deportista() {};
	virtual ~Deportista(){}
	void correrMaraton() {
		cout << "Yo corro maraton por las calles" << endl;
	}
	void saltoAlto() {
		cout << "Soy deportista y salto como un sapito" << endl;
	}
};

class Amigo : public Persona {
private:
	//Aca se estable la relacion de asociacion con las otras clases 
	Deportista* depPtr;
	Estudiante* estPtr;
public:
	Amigo(string nom) : Persona(nom) {
		cout << "Creando un amigo" << endl;
		depPtr = new Deportista;
		estPtr = new Estudiante;
	}

	virtual ~Amigo() {
		cout << "Elimando amigo" << endl;
		delete estPtr;
		delete depPtr;
	}
	//Chip del estudiante y del deportista
	void asistirALecciones() {
		estPtr->asistirALecciones();
	}

	void saltoAlto() {
		depPtr->saltoAlto();
	}
};

int main() {
	cout << "Creando una instancia de la clase amigo" << endl;
	Amigo* amiPtr = new Amigo("Abril");
	//Ver las acciones que se puede realizar
	amiPtr->alimenta();
	amiPtr->asistirALecciones();
	amiPtr->saltoAlto ();
	amiPtr->duerme();


	delete  amiPtr;
	system("pause");

	return 0;
}






