#include <iostream>
#include "Partido.h"
#include "PartidoLiberacionN.h"
#include "PartidoSocialDemo.H"
#include "PartidoUnidad.h"
#include "TSE.h"
#include <Windows.h>

int main() {
	int x = 0, v1 = 0, v2 = 0, v3 = 0;
	cout << "-----------------------PARTICIPACION POPULAR------------------------" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "                             <<OBSERVER >>                                    " << endl;
	cout << "Por el momento vamos agregar 3 formas de ver esto..................." << endl;
	Partido* obv1 = new PartidoLiberacionN();
	Partido* obv2 = new PartidoUnidad();
	Partido* obv3 = new PartidoSocialDemo();
	cout << "---------------------Tribunal Supremo de elecciones--------------------" << endl;
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "-----------------CONSTRUYENDO EL SUBJECT(TSE)--------------------" << endl;
	cout << "                                                                                              " << endl;
	TSE objTSE;
	objTSE.attach(obv1);
	objTSE.attach(obv2);
	objTSE.attach(obv3);

	int valor = 0;
	while (valor++ < 100) {//Pensamos en procesar 100 mesas de votacion 
		//Imprimiendo informacion de todos los observadores
		system("cls");
		objTSE.solicitudDeNuevaMesa();
		cout << endl << endl;

		objTSE.infoDeMesa();

		cout << "-----------------------Partidos--------------------------" << endl;
		cout << "----------------------Totalizado------------------------" << endl;
		cout << endl << endl;
		cout << "El partido Liberacion Nacional analiza mejor la info asi: " << endl;
		cout << obv1->toString() << endl;
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "El partido Unidad Social Cristi... analiza mejor la info asi: " << endl;
		obv2->graficando();
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << "El partido Social Democratico  analiza mejor la info asi: " << endl;
		cout << obv3->toString() << endl;
		cout << "-------------------------------------------------------------------------------" << endl;
		cout << endl;
		Sleep(5000);
		system("cls");
	}



	system("pause");
	return 0;
}