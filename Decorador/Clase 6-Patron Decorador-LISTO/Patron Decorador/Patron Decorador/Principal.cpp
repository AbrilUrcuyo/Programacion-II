
#include "Hamburguesa.h"
#include "Tomate.h"
#include "Carne.h"
#include "Lechuga.h"
#include "QuesoAmarillo.h"

Componente* eliminarComponente(Componente& ppio) {
	int op;
	Componente* pAct = (Componente*)&ppio;
	Componente* borrador = NULL;
	Componente* nuevoPPIO = (Componente*)&ppio;
	cout << "Ingrese que elemento desea borrar: " << endl;
	cout << "(1)->Lechuga" << endl;
	cout << "(2)->Tomate " << endl;
	cout << "(3)->Queso " << endl;
	cout << "(4)->Carne " << endl;
	cout << "Ingrese la opcion deseada: ";
	cin >> op;
	if (pAct != NULL) {
		if (op == 1) {
			if (pAct->getNombre() == "Lechuga") {//En caso del primero 
				borrador = pAct;
				pAct = pAct->getSigIngre();
				delete borrador;
				nuevoPPIO = pAct;
				return nuevoPPIO;
				
			}
			else {
				while (pAct->getSigIngre() != NULL && pAct->getSigIngre()->getNombre() != "Lechuga") {
					pAct = pAct->getSigIngre();
				}
				if (pAct->getSigIngre() == NULL) {
					cout << "La lechuga no existe" << endl;
					
				}
				if (pAct->getSigIngre()->getNombre() == "Lechuga") {
					borrador = pAct->getSigIngre();
					pAct->setSigIngre(borrador->getSigIngre());
					delete borrador;
					
				}

			}
		}
		if (op == 2) {
			if (pAct->getNombre() == "Tomate") {
				borrador = pAct;
				pAct = pAct->getSigIngre();
				delete borrador;
				nuevoPPIO = pAct;
				return nuevoPPIO;
			}
			else {
				//Debemos movernos al anterior a ese
				while (pAct->getSigIngre() != NULL && pAct->getSigIngre()->getNombre() != "Tomate") {
					pAct = pAct->getSigIngre();
				}
				//Si no encontramos el ingrediente 
				if (pAct->getSigIngre() == NULL) {
					cout << "El tomate no existe" << endl;
					
				}
				if (pAct->getSigIngre()->getNombre() == "Tomate") {
					borrador = pAct->getSigIngre();
					pAct->setSigIngre(borrador->getSigIngre());
					delete borrador;
					
				}
			}
		}
		if (op == 3) {
			if (pAct->getNombre() == "Queso") {
				borrador = pAct;
				pAct = pAct->getSigIngre();
				delete borrador;
				nuevoPPIO = pAct;
				return nuevoPPIO;
			}
			else {
				while (pAct->getSigIngre() != NULL && pAct->getSigIngre()->getNombre() != "Queso") {
					pAct = pAct->getSigIngre();
				}
				if (pAct->getSigIngre() == NULL) {
					cout << "El queso no existe" << endl;
				}
				if (pAct->getSigIngre()->getNombre() == "Queso") {
					borrador = pAct->getSigIngre();
					pAct->setSigIngre(borrador->getSigIngre());
					delete borrador;
				}
			}

		}
		if (op == 4) {
			if (pAct->getNombre()=="Carne") {
				borrador = pAct;
				pAct = pAct->getSigIngre();
				delete borrador;
				nuevoPPIO = pAct;
				return nuevoPPIO;
			}
			else {
				while (pAct->getSigIngre() != NULL && pAct->getSigIngre()->getNombre() != "Carne") {
					pAct = pAct->getSigIngre();
				}
				if (pAct->getSigIngre() == NULL) {
					cout << "La carne no existe" << endl;
				}
				if (pAct->getSigIngre()->getNombre() == "Carne") {
					borrador = pAct->getSigIngre();
					pAct->setSigIngre(borrador->getSigIngre());
					delete borrador;
					
				}
			}
		}
	}
	else {
		cout << "No hay elementos a eliminar" << endl;
	}
	

	return NULL;
}

int main() {

	int op;
	int fin = 0;
	//Interfaz de usuario
	//Creando hamburgesa

	cout << "-------------Creando hamburguesa---------" << endl;
	cout << endl;
	Componente* hamburguesa = new Hamburgesa();
	Componente* ppio = hamburguesa;
	//Combo basico
	do {
		cout << "------MENU------" << endl;
		cout << "Ingredientes a agregar" << endl;
		cout << "(1)->Lechuga" << endl;
		cout << "(2)->Tomate " << endl;
		cout << "(3)->Queso " << endl;
		cout << "(4)->Carne " << endl;
		cout << "Ingrese el ingrediente que desea: " << endl;
		cin >> op;
		Ingrediente* lechuga;
		Ingrediente* tomate;
		Ingrediente* queso;
		Ingrediente* carne;
		switch (op)
		{
		case 1:
			lechuga = new Lechuga(ppio);
			ppio = lechuga;
			break;
		case 2:
			tomate = new Tomate(ppio);
			ppio = tomate;
			break;
		case 3:
			queso = new QuesoAmarillo(ppio);
			ppio = queso;
			break;
		case 4:
			carne = new Carne(ppio);
			ppio = carne;
			break;
		default:
			break;
		}
		cout << "Ingrese 0 para salir o 1 para agregar otro ingrediente: " << endl;
		cin >> fin;
		system("cls");
	} while (fin != 0);
	cout << "Informacion de la hamburguesa" << endl;
	cout<<ppio->toString();
	cout << "El precio a pagar es:  " << ppio->costo();
	cout << "Elimanando los objetos de la hamburguesa" << endl;
	ppio=eliminarComponente(*ppio);
	cout << "Informacion de la hamburguesa" << endl;
	cout << ppio->toString();
	


}