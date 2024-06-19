#include <iostream>
#include<sstream>
using namespace std;

class Tiempo {
private:
	int segundos;
	int minutos;
	int horas;
	//Aca friend declara una amistad no mutua, donde la
	//relacion de amistad no es mutua
	//Creacion del comcubinato, no importa si esta en private o public
	friend istream& operator>>(istream&, Tiempo&);
	friend ostream& operator<<(ostream&, Tiempo&);
public:
	Tiempo();
	Tiempo(int s, int m, int h);
	virtual ~Tiempo();
};

Tiempo::Tiempo()
{ 
	horas = 0;
	minutos = 0;
	segundos = 0;
}

Tiempo::Tiempo(int s, int m, int h)
{
	segundos = s;
	minutos = m;
	horas = h;

}
Tiempo::~Tiempo()
{
}
//Cuando queremos desarrollar se debe quitar el 
//"friend"

//Sobre carga del operador de ingreso
//Da ingreso a las horas, minutos y segundos 
//Separados por un espacio

istream& operator>>(istream& input, Tiempo& T){//T= obejto a ser llenado 

	//Llenamos input con las variables de T
	input >> T.horas >> T.minutos >> T.segundos;

	//Se retorna el objeto T lleno
	return input;
}


//Es la sobrecarga del operador de salida
//Como flujo en el identificador output y lo retorno para su impresion
ostream& operator<<(ostream& output, Tiempo& T) {//Este tiempo tiene informacion 

	//Da el formato de salida, como un toString
	//Para los endl es mejor usar \n
	output << "Horas.. " << T.horas << "\nMinutos..."
		<< T.minutos << "\nSegundos..." << T.segundos << endl;
	return output;
}

int main() {
	cout << "------Trabajando con la sobrecarga del-----" << endl;
	cout << "-------operador de flujo entrada y salida------" << endl;

	Tiempo t1;
	cout << "Ingresar otros valores a t1" << endl;
	cout << "Los tiempos deben estar separados por un espacio" << endl;
	cin >> t1;//Ingresando los valores al objeto
	cout << "----------------------------" << endl;
	cout << "La hora ingresada fue...." << endl;
	cout << t1;



	system("pause");
	return 0;

}
