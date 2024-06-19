#include "PartidoUnidad.h"

PartidoUnidad::PartidoUnidad()
{
    nombre = "PARTIDO UNIDAD CRISTIANA";
}

PartidoUnidad::~PartidoUnidad()
{
}
//Note que este metodo es que actualiza las variables
//cada que hay un cambio
void PartidoUnidad::upDate(int a, int b, int c)
{
    this->valorPLN += a;
    this->valorPUSC += b;
   this-> valorPSD += c;
}

string PartidoUnidad::toString()
{
    //En este caso este partido no le interesa verlo así
    return "";
}

void PartidoUnidad::graficando()
{
	//Esta vision si le interesa
	cout << "-----------------------Grafica-----------------------------" << endl;
	cout << "------------------------PUSC------------------------------" << endl;
	cout << endl;
	cout << "1-PLN." << endl;
	for (int i = 0; i < valorPLN / 100; i++) cout << "*"; cout << endl;
	cout << "2-PUSC." << endl;
	for (int i = 0; i < valorPUSC / 100; i++) cout << "*"; cout << endl;
	cout << "3-PSD." << endl;
	for (int i = 0; i < valorPSD / 100; i++) cout << "*"; cout << endl;

}
