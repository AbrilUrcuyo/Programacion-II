#include <iostream>
#include "Subject.h"
#include "MultObserver.h"
#include "PotObserver.h"
#include <string>
using namespace std;



int main(){

	Observer* ptr = NULL;
	int num, num2, num3, op, op2;
	cout << "--Probando el modelo---" << endl;
	cout << "--Creando el subject--" << endl;
	cout << "Digite el valor 1 con el que el subject arranca: ";
	cin >> num;
	Subject subj(num);//Objeto automatico de lo observado
	cout << endl;

	do {
		system("cls");
		cout << endl << endl;
		cout << "-------MENU - PATRON OBSERVER-----" << endl;
		cout << "1-Crear un Obsever" << endl;
		cout << "2->Setear el subject" << endl;
		cout << "3->Listar Observer" << endl;
		cout << "4->Salir" << endl;
		cout << "----------------------------------" << endl;
		cout << "Digite la opcion: ";
		cin >> op;
		switch (op)
		{
		case 1:
			cout << "Digite el valor 2 interno del observer: ";
			cin >> num2;
			cout << "--Que tipo.?--" << endl;
			cout << "1->Observer de Multiplicacion" << endl;
			cout << "2->Observer para la potencia" << endl;
			cout << "3->Observer para la division" << endl;
			cout << "------------------------------" << endl;
			cout << "Digite la opicon: ";
			cin >> op2;
			switch (op2)
			{
			case 1:
				ptr = new MultObserver(&subj, num2);
				break;
			case 2:
				ptr = new PotObserver(&subj, num2);
				break;
			case 3:
				/*ptr = new MultObserver(&subj, num2);*/
				break;

			}
			cout << "Listo" << endl;
			system("pause");
			break;

		case 2: {


			cout << "Digite el nuevo valor del subject ...";
			cin >> num3;
			subj.setValor1(num3);
			cout << "Listo" << endl;
			system("pause");
			break;
		}
		case 3:
			cout << subj.toString() << endl;
			cout << "Listo" << endl;
			system("pause");
			break;


		};



	} while (ptr != NULL); delete ptr;
	//TAREA MORAL: ELIMINAR LOS OBSERVER QUE SE REALIZAN CON PTR O YA SE ELIMINARAN CUANDO TERMINE EL SUBJECT


	//TAREA MORAL: CUAL ES EL ERROR QUE SE COMETE AL ACTUALIZAR EL SUBJECT Y QUE NOS DESPLIEGUE LA INFO QUE NO E PEDIDO




	return 0;
}