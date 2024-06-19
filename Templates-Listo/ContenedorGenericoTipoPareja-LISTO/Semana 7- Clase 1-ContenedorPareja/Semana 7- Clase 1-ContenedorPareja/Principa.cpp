#include "Pareja.h"

int main() {
	cout << "--------Contenedor de char----------" << endl;
	Pareja<char> asientos('i', 'i'); //objeto asientos para char 
	cout << endl;
	cout << "Se puede fijar los asientos finales.." << endl;
	asientos.fijar_Elemento(1, 'h');//Informacion del primera posicion
	asientos.fijar_Elemento(2, 'm');//Informacion de la seguda posicion 
	cout << endl;
	cout << "Podemos imprimer la informacion del objeto asientos" << endl;
	cout << "El valor del primer es:" << asientos.obtenerElemento(1) << endl;
	cout << "El valor del segundo es:" << asientos.obtenerElemento(2) << endl;
	cout << endl;



	system("pause");
	return 0;
}

//cout << "--------Contenedor de enteros----------" << endl;
//Pareja<int> marcador(0, 0); //objeto marcador de punteros
//cout << endl;
//cout << "Se puede fijar marcadores finales.." << endl;
//marcador.fijar_Elemento(1, 3);//Informacion del primera posicion
//marcador.fijar_Elemento(2, 1);//Informacion de la seguda posicion 
//cout << endl;
//cout << "Podemos imprimer la informacion del objeto marcador" << endl;
//cout << "El valor del primer es:" << marcador.obtenerElemento(1) << endl;
//cout << "El valor del segundo es:" << marcador.obtenerElemento(2) << endl;
//cout << endl;



//Tarea moral, realizar esto para string 
//Tarea moral, realizar esto para personas 
//Tarea moral, tratar de imprimir personas