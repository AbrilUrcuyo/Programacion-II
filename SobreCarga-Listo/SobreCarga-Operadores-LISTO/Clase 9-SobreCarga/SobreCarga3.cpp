#include <iostream>
#include <sstream>


using namespace std;

class Pareja {
private:
	double a, b;
public:
	Pareja(): a(0), b(0){}
	Pareja(const double a, const double b) {
		this->a = a;
		this->b = b;
	}
	//Las clases deben tener un constructor copia
	Pareja(const Pareja& pareja)//Constructor copia
	{
		this->a = pareja.a;
		this->b = pareja.b;
	}
	//Operadores miembro...para sobrecargar...
	Pareja& operator + (const Pareja& p) {
		Pareja* nueva = new Pareja();
		nueva->a = this->a + p.a;
		nueva->b = this->b + p.b;
		return *nueva;
	}
	Pareja& operator - (const Pareja& p) //Resta 
	{
		Pareja* nueva = new Pareja();
		nueva->a = this->a - p.a;
		nueva->b = this->b - p.b;
		return *nueva;

	}
	Pareja& operator * (const Pareja& p) //Multiplicacion
	{
		Pareja* nueva = new Pareja();
		nueva->a = this->a * p.a;
		nueva->b = this->b * p.b;
		return *nueva;
	}
	Pareja& operator / (const Pareja& p) //Division
	{
		Pareja* nueva = new Pareja();
		nueva->a = this->a / p.a;
		nueva->b = this->b / p.b;
		return *nueva;
	}
	Pareja& operator = (const Pareja& p)//Op de asignacion
	{
		this->a = p.a;
		this->b = p.b;

		return *this;
	}
	bool operator == (const Pareja& p)//Comparacion
	{
		return (this->a == p.a && this->b == p.b);
	}






	friend ostream& operator <<(ostream& out, const Pareja& p) {
		out << "("<<p.a<<","<<p.b<<")";
		return out;
	}
	friend istream& operator >>(istream& input, Pareja& p) {
		input >> p.a;
		input >> p.b;
		return input;
	}
};



int main() {
	Pareja* p1 = new Pareja(5, 2);
	Pareja* p2 = new Pareja(8, 1);
	cout << "Las parejas son: " << *p1 << "----------" << *p2 << endl;
	cout << "Suma de parejas: " << endl;
	cout << *p1 + *p2 << endl;;//->Aca no se retorna un numero se retorna un nuevo objeto tipo pareja
	cout << "Resta de parejas :" << endl;
	cout << *p1 - *p2<<endl;
	cout << "Multiplicacon de parejas: " << endl;
	cout << (*p1) * (*p2) << endl;
	cout << "Divison de parejas" << endl;
	cout << (*p1) / (*p1) << endl;
	cout << "Operador de asignacion" << endl;
	*p1 = *p2;
	cout << "El nuevo valor de p1 es: " << *p1 << endl;
	cout << "Comparacion de p1 y p2" << endl;
	if (*p1 == *p2) {
		cout << "Son iguales";
	}
	else {
		cout << "No son iguales";
	}

}