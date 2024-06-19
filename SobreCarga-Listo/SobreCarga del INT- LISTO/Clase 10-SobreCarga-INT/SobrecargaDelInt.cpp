//sobrecargar el tipo de dato int 
//o sea es como ver a un objeto como
//si fuera un numero 

#include <iostream>
#include <sstream>
using namespace std;

class TEntero {
private:
	int n;

public:
	TEntero(int =0);
	operator int() const; //El const especifica que nada devuelve ni espera nada 


};

TEntero::TEntero(int n):n(n)
{
}

TEntero::operator int() const
{
	return n;
}


int main() {

	int a = 10, b =9;//La sobreCarga del int genera un Objeto de la clase TEntero
	TEntero c = 2;
	TEntero d;
	cout <<"Calular c + a + c + 10 = " << c + a + c + 10 << endl;
	cout <<"Calular 5- c - a - c = " << 5- c - a - c << endl;
	cout <<"Calular a + c * b - d * c + b / c - c / b = " << a + c * b - d * c + b / c - c / b << endl;
	cout << endl;




	return 0;
}
