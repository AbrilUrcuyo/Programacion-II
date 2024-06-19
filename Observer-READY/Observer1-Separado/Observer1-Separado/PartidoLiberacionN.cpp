#include "PartidoLiberacionN.h"
//Note que se llama al constructor del padre
//esto apesar de que no debemos mandarle ningun parametro 
PartidoLiberacionN::PartidoLiberacionN(): Partido()
{
	this->nombre = "Partido Liberacion Nacional";

}

PartidoLiberacionN::~PartidoLiberacionN()
{
}

//Note que este metodo es que actualiza las variables
//cada que hay un cambio
void PartidoLiberacionN::upDate(int a, int b, int c)
{
	this->valorPLN += a;
	this->valorPUSC += b;
	this->valorPSD += c;

}

string PartidoLiberacionN::toString()
{
	stringstream s;
	s << "--------PARTIDO LIBERACION NACIONAL----------" << endl
		<< "Votos.... PLN....... No1....." << valorPLN << endl
		<< "Votos.... PUSC..... No2....." << valorPUSC << endl
		<< "Votos....PSD........No3....." << valorPSD << endl;
	return s.str();
}

void PartidoLiberacionN::graficando()
{
	//Esta es otra manera de verlo de manera grafica
	//pero a este partido no le interesa verlo asi
}
