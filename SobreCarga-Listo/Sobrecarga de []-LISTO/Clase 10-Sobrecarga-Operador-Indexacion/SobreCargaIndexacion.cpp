#include <iostream>
#include <sstream>

using namespace std;

class Cuenta {

private:
	int contador[4];//En cada posicion va la frecuencia
public:
	Cuenta();
	int& operator [](int n);
	void Mostrar()const;

};

Cuenta::Cuenta()
{
	for (int i = 0; i < 4; contador[i++]=0);//For que trabaja internamente
}

int& Cuenta::operator[](int n)//Recibe un valor ese valor depende del rango
{
	if (n < 1000) return contador[0];
	if (n < 2000) return contador[1];
	if (n < 3000) return contador[2];
	else          return contador[3];
}
void Cuenta::Mostrar() const
{
	cout << "Entre 0 y 1000 =" << contador[0] << endl;
	cout << "Entre 1000 y 2000 =" << contador[1] << endl;
	cout << "Entre 2000 y 3000 =" << contador[2] << endl;
	cout << "Entre 3000 y 4000 =" << contador[3] << endl;
	
}

int main() {

	Cuenta* C= new Cuenta();
	int x;

	for (int i = 0; i < 100; i++) {//Cuenta de cien valores
		x = rand();//Valores aleatorios
		cout << x << endl;
		*C[x]++;
	}
	C->Mostrar();


	system("pause");
	return 0;
}
