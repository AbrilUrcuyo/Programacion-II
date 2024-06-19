#pragma once
#include "Nodo.h"

using namespace std;


template<class T>
class Lista {
private:
	Nodo<T>* primerNodo; //ppio==> puntero al principo
public:
	Lista();
	Lista(const Lista&);
	virtual ~Lista();

	//Lista& operator = (const Lista&);//Sobrecarga del operador de asignacion 
	
	void agregarInicio(T*);
	void agregarFinal(T*);
	T* eliminar(string ced);

	string toString();
	void eliminarTodos();
	 
	void invierteLista();//Tarea recursivo 
	//Nuevos metodos
	int size();//Cuenta nodo
	T* getElemento(unsigned int i);//valor absoluto 
	void remove(int p);
	void removeInicio();
	bool isEmpty();


};



template<class T>
inline Lista<T>::Lista()
{
	primerNodo = NULL;
}


//Posible que entre en el examen 
template<class T>
Lista<T>::Lista(const Lista& lista)//Constructor copia de una lista
{
	primerNodo = NULL;//Mi listo
	Nodo<T>* pAct = lista.primerNodo;//Algo de la lista que llega 
	while(pAct != NULL) {
		T* info1 = new T(*pAct->obtenerInfo());//Clonando 
		this->agregarFinal(info1);
		pAct = pAct->obtenerSiguiente();
	}
	 


}


template<class T>
bool Lista<T>::isEmpty()
{
	return (primerNodo == NULL);
}

template<class T>
int Lista<T>::size()
{
	int cantidad = 0;
	Nodo<T>* ptr = primerNodo;
	while (ptr->obtenerSiguiente() != NULL) {		
		ptr = ptr->obtenerSiguiente();
		cantidad++;
	}
	return cantidad;
}

template<class T>
inline T* Lista<T>::getElemento(unsigned int i)
{
	return nullptr;
}

template<class T>
inline void Lista<T>::remove(int p)
{
}

template<class T>
inline void Lista<T>::removeInicio()
{
	if (primerNodo != NULL) {
		Nodo<T> borrado = primerNodo;
		primerNodo = primerNodo->obtenerSiguiente();
		delete borrado;
	}
}


template<class T>
inline Lista<T>::~Lista()
{
}

template<class T>
 void Lista<T>::agregarInicio(T*info)//Se debe copiar para agregarlo
{
	T* info1 = new T(*info); //Acase llama al metodo clonar de la clase del objeto que le llega
	primerNodo = new Nodo<T>(primerNodo, *info1);
}

template<class T>
void Lista<T>::agregarFinal(T* info)
{
	if (primerNodo == NULL) {
		this->agregarInicio(info);
	}
	else {
		Nodo<T>* ptr = primerNodo;
		while (ptr->obtenerSiguiente()) {
			ptr = ptr->obtenerSiguiente();
		}
		//Aqui clonar info...

		T* info1 = new T(*info);
		ptr->setSiguiente(new Nodo<T>(NULL, *info1));
	}

}

template<class T>
inline T* Lista<T>::eliminar(string ced)
{
	Nodo<T>* pAct = primerNodo;
	Nodo<T>* borrado = NULL;
	T* copia = NULL;
	if (pAct->obtenerInfo()->getCedula() == ced) {
		borrado = pAct;
		primerNodo = pAct->obtenerSiguiente();
		copia = borrado->obtenerInfo();
		delete borrado;
	}
	else {
		while (pAct->obtenerSiguiente() != NULL && pAct->obtenerSiguiente()->obtenerInfo()->getCedula() != ced) {
			pAct = pAct->obtenerSiguiente();
		}
		if (pAct == NULL) {
			return NULL;
		}
		if (pAct->obtenerSiguiente()->obtenerInfo()->getCedula() == ced) {
			borrado = pAct->obtenerSiguiente();
			pAct->setSiguiente(borrado->obtenerSiguiente());
			copia = borrado->obtenerInfo();
			delete borrado;
		}
	}
	return copia;
}

template<class T>
inline string Lista<T>::toString()
{
	stringstream s;
	Nodo<T>* pAct = primerNodo;
	while (pAct != NULL) {
		s<<pAct->obtenerInfo()->toString()<<endl;
		pAct = pAct->obtenerSiguiente();
	}
	return s.str();
}

template<class T>
inline void Lista<T>::eliminarTodos()
{
	Nodo<T>* borrado = NULL;
	while (primerNodo != NULL) {
		borrado = primerNodo;
		primerNodo = primerNodo->obtenerSiguiente();
		delete borrado;
	}
}

template<class T>
inline void Lista<T>::invierteLista()
{
	Nodo<T>* anterior = NULL;
	Nodo<T>* pAct = primerNodo; 
	Nodo<T>* siguiente = NULL;

	while (pAct != NULL) {

		siguiente = pAct->obtenerSiguiente();;
		pAct->setSiguiente( anterior);
		anterior = pAct;
		pAct = siguiente; 

	}

	primerNodo = anterior;
	

}


