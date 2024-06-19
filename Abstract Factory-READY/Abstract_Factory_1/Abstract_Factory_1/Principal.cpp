#include "Medio.h"
#include "Reproductor.h"
#include "Grabador.h"
#include "Interfaz.h"
#include "FabricaENuevo.h"
#include "FabricaEquipo.h"
#include "FabricaEViejo.h"


int main() {
	//Variables comodin 
	FabricaEquipo* FE = NULL;
	int op;
	do {
		system("cls");
		FE = NULL;
		cout << "-----Abstract Factory-----" << endl;
		cout << "--------------------------" << endl;
		cout << "----------Menu------------" << endl;
		cout << "(1)->Creacion de un equipo viejo" << endl;
		cout << "(2)->Creacion de un equipo nuevo" << endl;
		cout << "(3)->salir" << endl;
		cout << "--------------------------" << endl;
		cout << "digite la opcion deseada: " << endl;
		cin >> op;


		switch (op)
		{
		case 1: {
			cout << "Creacion de equipo Viejo" << endl;
			FE = new FabricaEViejo();
			break;
		}
		case 2:
		{
			cout << "Creacion de equipo Nuevo" << endl;
			FE = new  FabricaENuevo();
			break;
		}
		case 3:
		{
			cout << "Gracias" << endl;
			break;
		}

		}


		if (FE != NULL) {
			cout << FE->toString() << endl;
		}
		system("pause");
		if (FE != NULL) {
			delete FE;
		}


	} while (op != 3);




	return 0;
};