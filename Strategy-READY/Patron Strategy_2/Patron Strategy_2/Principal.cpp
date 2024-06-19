#include "Compania.h"

int main() {
	char seguir;
	int valor;
	cout << "Creacion de una compania" << endl;
	Compania Co;

	cout << "Ingreso de personas con su cedula, nombre y apellido" << endl;
	Co.insertarPersona(*new Persona("111", "Ana", "Perez"));
	Co.insertarPersona(*new Persona("222", "Berta", "Sandoval"));
	Co.insertarPersona(*new Persona("333", "Cris", "Salas"));
	Co.insertarPersona(*new Persona("444", "Paul", "Cedeno"));
	Co.insertarPersona(*new Persona("555", "Beto", "Cuevas"));
	Co.insertarPersona(*new Persona("666", "Manuel", "Manson"));


	do {
		system("cls");
		cout << "Reporte: " << endl;
		cout << "Lista Reporte " << endl;
		cout << "(1)-Simple o llano " << endl;
		cout << "(2)-Formateado " << endl;
		cout << "--------------------" << endl;
		cout << "Digite la opcion: " << endl;
		cin >> valor;
		if (valor == 1) {
			Co.listarReporte(new Simple());
		}
		else {
			Co.listarReporte(new Formateado());
		}
		cout << endl << endl << endl;
		cout << "Desea seguir.... s/n";
		cin >> seguir;
	} while (seguir == 's');

	system("pause");
	return 0;

};