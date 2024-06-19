#pragma once
#include <iostream>
using namespace std;

template<class T>
class Vector {
private:
	T* datos;//Datos es un vector de objetos automaticos
public:
	Vector();
	Vector(const Vector&);//Constructur copia
	virtual ~Vector();
	void imprime();
	Vector<T>& operator = (const Vector&);//Operador de asignacion
	Vector<T>& operator+ (const Vector&);
};

template<class T>
 Vector<T>::Vector()
{
	 datos = new T[10];
	 cout << "Creando objetos" << endl;
	 for (int i = 0; i < 10; i++) {
		 cout << "Ingresar dato No." << i + 1 << " = ";
		 cin >> datos[i];
	 }
}

template<class T>
 Vector<T>::Vector(const Vector& vi)//Constructor copia 
{
	 datos = new T[10];
	 for (int i = 0; i < 10; i++) {
		 datos[i] = vi.datos[i];
	 }
}

 template<class T>
  Vector<T>::~Vector()
 {
	  delete[] datos;
	  cout << "Eliminando objeto vector interno y objeto generico " << endl;
 }

template<class T>
void Vector<T>::imprime()
{
	cout << "{";
	for (int i = 0; i < 10; i++) {
		cout << "--->" << datos[i] << ", ";
		cout << "}"<<endl<<endl;
	}
}

template<class T>
 Vector<T>& Vector<T>::operator=(const Vector& vi)//Sobrecarga del operador de asignacion
{
	 if (this != &vi) {
		 for (int i = 0; i < 10; i++) {
			 datos[i] = vi.datos[i];
		 }
	 }
	 return *this;
}

 template<class T>
  Vector<T>& Vector<T>::operator+(const Vector& vi) //c = a + b
 {
	  //para hacer la suma obviamente la cantidad debe ser la misma
	  for (int i = 0; i < 10; i++) {
		  this->datos[i] += vi.datos[i];
	  }
	  return *this;
	 
 }


