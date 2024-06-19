#include "Vector.h"

int main() {
	cout << "--Vector tipo contenedor de Enteros--" << endl;
	cout << "Hacer un contenedor tipo vector de C" << endl;
	Vector<int> c;
	c.imprime();
	cout << endl;
	cout << "Crear contenedor a"<<endl;
	Vector<int> a;
	cout << "con base e a podemos copiar otro objeto b." << endl;
	Vector <int> b(a);
	cout << "Imprimiendo ambos objetos" << endl;
	cout << "a= ";
	a.imprime();
	cout << "b= ";
	b.imprime();
	cout << "La suma de a+ b deseo que quede en c" << endl;
	c = a + b;
	cout << "Ahora c es: " << endl;
	c.imprime();


	system("pause");
	return 0;
}