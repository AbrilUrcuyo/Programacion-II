#include "PartidoSocialDemo.h"

PartidoSocialDemo::PartidoSocialDemo(): Partido()
{
  this->nombre = "PARTIDO SOCIAL DEMOCRATICO";
}

PartidoSocialDemo::~PartidoSocialDemo()
{
}

void PartidoSocialDemo::upDate(int a, int b, int c)
{
    this->valorPLN += a;
   this->valorPUSC += b;
    this->valorPSD += c;
}

string PartidoSocialDemo::toString()
{
	stringstream s;
	int sumaVotos = this->valorPLN + this->valorPSD + this->valorPUSC;
	s << "--------PARTIDO SOCIAL DEMOCRATICO----------" << endl
		<< "Porcentaje.... PLN....... No1....." << (double)(valorPLN * 100) / sumaVotos << "%" << endl
		<< "Porcentaje.... PUSC....... No2....." << (double)(valorPUSC * 100) / sumaVotos << "%" << endl
		<< "Porcentaje.... PSD....... No3....." << (double)(valorPSD * 100) / sumaVotos << "%" << endl;
	return s.str();
}

void PartidoSocialDemo::graficando()
{

	cout << "---------------------GRAFICA---------------------" << endl;
	cout << "-----------------------PSD-------------------------" << endl;
	cout << endl;
	cout << "1-PLN" << endl;
	for (int i = 0; i < valorPLN / 100; i++)cout << "*"; cout << endl;
	cout << "2-PUSC" << endl;
	for (int i = 0; i < valorPUSC / 100; i++)cout << "*"; cout << endl;
	cout << "3-PSD" << endl;
	for (int i = 0; i < valorPSD / 100; i++)cout << "*"; cout << endl;

}
