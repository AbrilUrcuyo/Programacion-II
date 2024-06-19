#include "Serializable.h"

int main() {
	// Serializar objeto....
	Serializable ori1("Santiago", 15);
	ori1.serialize("data.dat");

	// Deserializar objeto...
	Serializable org2 = Serializable::deserialize("data.dat");

	// Imprimir objeto deserializado...
	cout << endl;
	cout << "El objeto des-serializado, es: " << endl;
	cout << "Nombre: " << org2.getNombre() << endl;
	cout << "Edad: " << org2.getEdad() << endl;

	system("pause");
	return 0;
}