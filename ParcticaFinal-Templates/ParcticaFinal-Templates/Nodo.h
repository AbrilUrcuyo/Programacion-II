#pragma once
#include <iostream>
#include <sstream>
using namespace std;

template <class T>

class Nodo {
private:
	Nodo* siguiente;
	T* info;
public:
	Nodo(Nodo<T>* siguiente, T& inf);
	virtual ~Nodo();
	Nodo<T>* getSiguiente() const;
	T& getInformacion() const;
	void setSiguiente(Nodo<T>*);
	void setInformacion(T&);



};

template<class T>
inline Nodo<T>::Nodo(Nodo<T>* siguiente, T& inf)
{
	this->siguiente = siguiente;
	info = new T(inf);
}

template<class T>
inline Nodo<T>::~Nodo()
{
}

template<class T>
inline Nodo<T>* Nodo<T>::getSiguiente() const
{
	return siguiente;
}

template<class T>
inline T& Nodo<T>::getInformacion() const
{
	return *info;
}

template<class T>
inline void Nodo<T>::setSiguiente(Nodo<T>* sig)
{
	siguiente = sig;
}

template<class T>
inline void Nodo<T>::setInformacion(T& inf)
{
	info = (T*)&info;
}
