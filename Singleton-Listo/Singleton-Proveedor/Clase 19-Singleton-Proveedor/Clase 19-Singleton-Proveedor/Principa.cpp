#include "Vendedor.h"


int main() {
	//Recorrer el modelo con un main bonito

	cout << "------SINGLETON------" << endl;
	cout << "Crear una venta Empresa" << endl;
	VentaEmpresa* ptrEmp = &VentaEmpresa::vEmpresa();//esto no es necesario, pues apenas se crea la primera transaccion se crea automaticamente el singleton

	cout << "Crear Vendedores...." << endl;
	Vendedor* vend1 = new Vendedor("1111", "Yassir", "Salas", 0, 0);
	Vendedor* vend2 = new Vendedor("2222", "Abril", "Prendas", 0, 0);
	cout << "Creacion de ventas remotas" << endl;
	vend1->realizarVenta(50);
	vend2->realizarVenta(75);

	vend1->realizarVenta(75);
	vend2->realizarVenta(50);

	cout << "Imprimiendo la informacion de los vendedores" << endl;
	cout << vend1->toString() << endl;
	cout << vend2->toString() << endl;

	cout << "Imprimiendo la informacion del singleton" << endl;
	cout << ptrEmp->toString() << endl;


	system("pause");

	return 0;
}