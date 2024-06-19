#include <iostream>
#include <sstream>
#include <Windows.h>
using namespace std;

//Comenzando con los observers..... esto se debe separa en .h y .cpp

class Partido {
protected:
	//Cada valor es la cantidad de valores o votos del cada partido
	//Estas variables son como acumuladores
	int valorPLN;
	int valorPUSC;
	int valorPSD;
public:
	Partido();
	virtual~Partido();
	virtual void upDate(int, int, int) = 0;
	virtual string toString() = 0;
	virtual void graficando() = 0;
	virtual int getValor1();
	virtual int getValor2();
	virtual int getValor3();

};

Partido::Partido()
{
	valorPLN = 0;
	valorPSD = 0;
	valorPUSC = 0;
}

Partido::~Partido()
{
}

int Partido::getValor1()
{
	return valorPLN;
}

int Partido::getValor2()
{
	return valorPUSC;
}

int Partido::getValor3()
{
	return valorPSD;
}



//Ahora se hace las subclases de los observer

//Las subclases de los observer- o sea los partidos 


//-----------------------------Partido Liberacion Nacional-------------------------------
class PartidoLiberacion :public Partido {
private:
	string nombre;
	//Aca pueden ir mas atributos
public:
	PartidoLiberacion() :Partido() {
		nombre = "PARTIDO LIBERACION NACIONAL";
	}
	virtual ~PartidoLiberacion(){}

	virtual void upDate(int a, int b, int c) {//Este metodo actualiza a las varibles acumuladores en el observerado 
		valorPLN += a;
		valorPUSC += b;
		valorPSD += c;
	}

	virtual string toString(){
		stringstream s;
		
		s << "--------PARTIDO LIBERACION NACIONAL----------" << endl
			<< "Votos.... PLN....... No1....." << valorPLN << endl
			<< "Votos.... PUSC..... No2....." << valorPUSC << endl
			<< "Votos....PSD........No3....." << valorPSD << endl;
			
			return s.str();
	}

	virtual void graficando() {
		//Esta vision no le intersa al partido PLN

	}
};



//-----------------------------Partido Unidad Social Cristiana-------------------------------

class PartidoUnidad :public Partido {
private:
	string nombre;
	//Aca pueden ir mas atributos
public:
	PartidoUnidad() :Partido() {
		nombre = "PARTIDO UNIDAD CRISTIANA";
	}
	virtual ~PartidoUnidad() {}

	virtual void upDate(int a, int b, int c) {//Este metodo actualiza a las varibles acumuladores en el observerado 
		valorPLN += a;
		valorPUSC += b;
		valorPSD += c;
	}

	virtual string toString() {
		//En este caso este partido no le interesa verlo así
		return "";
	}

	virtual void graficando() {
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
};



//-----------------------------Partido Social Democratico-------------------------------
class PartidoSocialDemocratico :public Partido {
private:
	string nombre;
	//Aca pueden ir mas atributos
public:
	PartidoSocialDemocratico() :Partido() {
		nombre = "PARTIDO SOCIAL DEMOCRATICO";
	}
	virtual ~PartidoSocialDemocratico() {}

	virtual void upDate(int a, int b, int c) {//Este metodo actualiza a las varibles acumuladores en el observerado 
		valorPLN += a;
		valorPUSC += b;
		valorPSD += c;
	}

	virtual string toString() {
		stringstream s;
		int sumaVotos = valorPLN + valorPSD + valorPUSC;
		s << "--------PARTIDO SOCIAL DEMOCRATICO----------" << endl
			<< "Porcentaje.... PLN....... No1....." << (double)(valorPLN * 100) / sumaVotos << "%" << endl
			<< "Porcentaje.... PUSC....... No2....." << (double)(valorPUSC * 100) / sumaVotos << "%" << endl
			<< "Porcentaje.... PSD....... No3....." << (double)(valorPSD * 100) / sumaVotos << "%" << endl;
		return s.str();
	}

	virtual void graficando() {
		//Esta vision no le intersa al PSD

	}
};





//--------------------------------------------SUBJECT-------------------------------------------------------
//---------------------------------------LO OBSERVADO----------------------------------------------------

class TSE {//Esta es la clase que notifica o emite la informacion...(Subject)...
private:
	int numMesa;
	
	int valor1;//voto de la mesa numMesa para el PLN
	int valor2;//voto de la mesa numMesa para el PUSC
	int valor3;//voto de la mesa numMesa para el PSD
	//Aca debe exitir un contenedor de observers... (SUSCRIPCION)
	Partido** vec;
	int can;
	int tam;
public:
	TSE();
	virtual ~TSE();
	void attach(Partido* );//----------------------------->VITAL
	void setValores(int a, int b, int c); //Aca se setean los valores de la nueva mesa....------>VITAL
	void notify(); //----------------------------->VITAL
	void conteoDeVotosxMesa();
	void infoDeMesa();
	void solicitudDeNuevaMesa();
};

TSE::TSE()
{
	numMesa = 0;
	valor1 = 0;
	valor2 = 0;
	valor3 = 0;
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
	if (can < tam) {
		vec[can++] = obs;
	}
}

void TSE::setValores(int a, int b, int c)
{
	valor1 = a;
	valor2 = b;
	valor3 = c;
	notify();
}

void TSE::notify()
{
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
	cout << "-----Informacion de la mesa----No.-"<<numMesa<<"----" << endl;
	cout << "    Votos.......PLN" << valor1 << endl;
	cout << "    Votos.......PUSC" << valor2 << endl;
	cout << "    Votos.......PSD" << valor3 << endl;
	cout << "---------------------------------------" << endl;

}

void TSE::solicitudDeNuevaMesa()
{
	this->conteoDeVotosxMesa();
}

//---------------------------Fin del SUBJECT-----------------------
int main() {
	int x = 0, v1 = 0, v2 = 0, v3 = 0;
	cout << "-----------------------PARTICIPACION POPULAR------------------------" << endl;
	cout << "------------------------------------------------------------------------------" << endl;
	cout << "                             <<OBSERVER >>                                    " << endl;
	cout << "Por el momento vamos agregar 3 formas de ver esto..................." << endl;
	Partido* obv1 = new PartidoLiberacion();
	Partido* obv2 = new PartidoUnidad();
	Partido* obv3 = new PartidoSocialDemocratico();
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
