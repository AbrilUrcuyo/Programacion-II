#include "Contenedor.h"

int main() {
	int respu, eMin, eMax;
	double peso;
	cout<<"----------DELEGACION SOBRE SELECTOR--------" << endl;
	cout << "----------TRABAJANDO CON COLECCION--------" << endl;
	cout << endl;
	cout << "Creanod una coleccion original" << endl;
	Contenedor* conte = new Contenedor(20);
	cout << "Creando personas" << endl;
	Persona* per1 = new Persona("1111", "Juan", 34, 50);
	Persona* per2 = new Persona("2222", "Paul", 43,60 );
	Persona* per3 = new Persona("3333", "Sofia",52 , 50 );
	Persona* per4 = new Persona("4444", "Ana", 24, 60);
	Persona* per5 = new Persona("5555", "Cris", 34, 50 );
	Persona* per6 = new Persona("6666", "Sonia", 45, 60);
	Persona* per7 = new Persona("7777", "Mayela", 42, 50);
	Persona* per8 = new Persona("8888", "Gergos", 18 , 60);
	Persona* per9 = new Persona("9999", "Xinia", 71, 60);
	Persona* per10 = new Persona("0000", "Juaquin", 53,50 );
	conte->agregaPersona(*per1);
	conte->agregaPersona(*per2);
	conte->agregaPersona(*per3);
	conte->agregaPersona(*per4);
	conte->agregaPersona(*per5);
	conte->agregaPersona(*per6);
	conte->agregaPersona(*per7);
	conte->agregaPersona(*per8);
	conte->agregaPersona(*per9);
	conte->agregaPersona(*per10);

	cout << endl;
	cout << "--------Menu-------" << endl;
	cout << "Desea observar la seleccion por: " << endl;
	cout << "1-Rango de edades" << endl;
	cout << "2-Peso" << endl;
	cin >> respu;
	if (respu == 1) {
		cout << "DIGITAR RANGO DE EDADES: " << endl;
		cout << "Digite a primera edad: " << endl;
		cin >> eMin;
		cout << "Digite la segunda edad: " << endl;
		cin >> eMax;
		cout << conte->seleccionar(*new SEdades(eMin, eMax))->toString() << endl;
		system("pause");

	}
	else {
		cout << "DIGITAR PESO" << endl;
		cout << "Digite el peso: " << endl;
		cin >> peso;
		cout << conte->seleccionar(*new SPeso(peso))->toString() << endl;
	}

	system("pause");
	return 0;
}