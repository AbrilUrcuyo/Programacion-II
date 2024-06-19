#include "TSE.h"

TSE::TSE()
{
	numMesa = 0;
	valor1 = 0;
	valor2 = 0;
	valor3 = 0;

	//Creacion del vector de observer
	//El contrenedor normalmente es de tipo lista???

	vec = new Partido * [100];
	tam = 100;
	can = 0;
	for (int i = 0; i < tam; i++) {
		vec[i] = NULL;
	}
}

TSE::~TSE()
{
	for (int i = 0; i < can; i++) {
		delete vec[i];
	}
	delete[] vec;
}

void TSE::attach(Partido* obs)
{
	//Anade un nuevo observer al vector de observer
	if (can < tam) {
		vec[can++] = obs;
	}
}

void TSE::setValores(int a, int b, int c)
{
	//cada vez que se setan nuevo valores, se notifica a los observer 

	this->valor1 = a;
	this->valor2 = b;
	this->valor3 = c;
	notify();
}

void TSE::notify()
{
	//Se debe notificar a cada uno de los obsevers del contenedor 
	for (int i = 0; i < can; i++) {
		vec[i]->upDate(valor1, valor2, valor3);
	}
}

void TSE::conteoDeVotosxMesa()
{
	//Aca se esta haciendo un simulacion del lugar donde cuentas los votos 
	//Si no fuese una simulacion se usaria los a,b,c
	int v1, v2, v3;
	v1 = 1 + rand() / (101 - 1);
	v2 = 1 + rand() / (101 - 1);
	v3 = 1 + rand() / (101 - 1);
	numMesa = 1 + rand() % (10001 - 1);
	this->setValores(v1, v2, v3);
}

void TSE::infoDeMesa()
{
	cout << "-----Informacion de la mesa----No.-" << numMesa << "----" << endl;
	cout << "    Votos.......PLN" << valor1 << endl;
	cout << "    Votos.......PUSC" << valor2 << endl;
	cout << "    Votos.......PSD" << valor3 << endl;
	cout << "---------------------------------------" << endl;

}

void TSE::solicitudDeNuevaMesa()
{
	this->conteoDeVotosxMesa();
}
