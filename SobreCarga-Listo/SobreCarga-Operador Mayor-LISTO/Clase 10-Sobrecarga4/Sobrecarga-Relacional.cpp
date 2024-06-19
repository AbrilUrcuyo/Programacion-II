#include <iostream>
#include <sstream>


using namespace std;

class Tiempo {

private:
	int horas;
	int minutos;
	int segundos;

public:
	Tiempo();
	Tiempo(int, int, int);
	bool operator>(Tiempo&);
	void visualizar();
};

Tiempo::Tiempo()
{
	horas = 0;
	minutos = 0;
	segundos = 0;

}

Tiempo::Tiempo(int h, int m, int s)
{
	horas = h;
	minutos = m;
	segundos = s;
}

bool Tiempo::operator>(Tiempo& t2)
{
	double ttotal = 0;//this
	double TTotal2 = 0;//t2
	ttotal = horas * 3600 + minutos * 60 + segundos;
	TTotal2 = t2.horas * 3600 + t2.minutos * 60 + t2.segundos;
	return (ttotal > TTotal2);
	
}

void Tiempo::visualizar()
{
	cout << "H:M:S" << horas << ":" << minutos << ":" << segundos << endl;
}



int main() {
	cout << "-----Trabajando con sobrecarga del mayor------" << endl;
	cout << "----------------------------------------------" << endl;
	cout << endl;
	Tiempo t1(4, 10, 55);
	Tiempo t2(3, 200, 10);
	if (t1 > t2) {
		cout << "T1 es mayor ";
		t1.visualizar();
	}
	else {
		cout << "t2 es mayor ";
		t2.visualizar();
	}
}