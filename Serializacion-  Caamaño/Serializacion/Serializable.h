#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Serializable {
	private:
		string nombre;
		int edad;
	public:
		Serializable(string nom, int ed) : nombre(nom), edad(ed) {	}
		Serializable() : nombre("") , edad(0) { }
		virtual ~Serializable(){ }
		string getNombre() { return nombre; }
		int getEdad() { return edad; }

		// Metodo para serializar...
		void serialize(string filenombre) {
			ofstream file(filenombre, ios::binary); // Abriendo archivo

			if (!file.is_open()) {
				cerr << "ERROR: Error al abrir archivo para escritura." << endl;
				return;
			}
			else {
				file.write(reinterpret_cast<const char*>(this), sizeof(*this)); // Aqui se guarda la informacion...
				file.close();
				cout << "Objeto seriablizado satisfactoriamente..." << endl;
			}
		}

		static Serializable deserialize(string filenombre) {
			Serializable* obj = new Serializable("", 0);   //  <<== ojo

			ifstream file(filenombre, ios::binary); // Abrir para lectura
			if (!file.is_open()) {
				cerr << "ERROR: Error al abrir archivo para lectura." << endl;
			}
			file.read(reinterpret_cast<char*>(obj), sizeof(*obj));
			file.close();
			cout << "Objeto des-serializado satisfactoriamente." << endl;
			return *obj;
		}
};