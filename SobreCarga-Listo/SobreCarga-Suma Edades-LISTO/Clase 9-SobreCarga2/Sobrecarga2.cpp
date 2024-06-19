#include <iostream>
#include <sstream>

using namespace std;

class Persona {

private:
	string nombre;
	int edad;
	double peso;
public:
	void iniciar(string, int, double);
	int operator + (const Persona&);//Sobre carga del operador suma
	void visualizar();
};

void Persona::iniciar(string nom, int ed, double pe)
{
	nombre = nom;
	edad = ed;
	peso = pe;
}

int Persona::operator +(const Persona& p)
{
	return edad + p.edad;
	//izq + derecha 

}

void Persona::visualizar()
{
	cout << "La informacion de esta persona es: " << endl;
	cout << "Nombre...." << nombre << endl;
	cout << "Edad..." << endl << endl;
	cout << "Peso..." << peso << endl;
	cout << "-----------------------" << endl;

}


int main() {
	cout << "Trabajando con objetos automaticos" << endl;
	cout << "---------------------------------------" << endl;
	Persona p1, p2;
	p1.iniciar("Ana", 10, 34.56);
	p2.iniciar("Pedro", 50, 80.00);


	cout << "Visualizar .....p1." << endl;
	p1.visualizar();

	cout << "Visualizar .....p2." << endl;
	p2.visualizar();

	cout << "----SUMAR EDADES DE LOS OBJETOS----" << endl;
	cout << endl;
	cout << "La suma de p1 + p2 da: " << p1 + p2 <<" Anios" << endl;
	cout << endl;
	cout << "Ahora trabajamos con objetos dinamicos" << endl;
	//Tarea Moral
	//....
	Persona* per1 = new Persona();
	Persona* per2 = new Persona();

	per1->iniciar("Ana2", 10, 34.56);
	per2->iniciar("Pedro", 40, 80.00);
	cout << "---SUMANDO LAS NUEVAS EDADES----- " << endl;
	cout << "La suma de per1 + per2 da: " << (*per1 + *per2) << " Anios" << endl;
	cout << endl;
	
	system("pause");
	return 0;
}
