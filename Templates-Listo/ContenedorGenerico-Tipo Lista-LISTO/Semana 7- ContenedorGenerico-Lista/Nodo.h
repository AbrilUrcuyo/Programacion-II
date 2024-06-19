#pragma once
#include <ostream>
#include <sstream>

using namespace std;

//Aca ya se empieza la implementacion del Template

template<class T>

class Nodo {
private:
	Nodo* sig;
	T* info;
public:
	Nodo(Nodo<T>*, T&);
	virtual ~Nodo();
	Nodo<T>* obtenerSiguiente();
	T* obtenerInfo();
	void setInfo(T*);
	void setSiguiente(Nodo<T>* n);
};

template<class T>
inline Nodo<T>::Nodo(Nodo<T>* sig, T& info)
	:sig(sig), info(&info){
}

template<class T>
inline Nodo<T>::~Nodo()
{
	if (info != NULL) {//va a depender de la aplicacion
		delete info;
	}
}

template<class T>
inline Nodo<T>* Nodo<T>::obtenerSiguiente()
{
	return sig;
}
template<class T>
inline T* Nodo<T>::obtenerInfo()
{
	return info;
}

template<class T>
inline void Nodo<T>::setInfo(T* e)
{
	info = e;
}

template<class T>
inline void Nodo<T>::setSiguiente(Nodo<T>* n)
{
	sig = n;
}
