#pragma once
#include "Nodo.h"

template <class T>

class Lista {
private:
	Nodo<T>* ppio;
public:
	Lista();
	virtual ~Lista();
	Lista(const Lista&);
	Lista& operator = (const Lista&);
	virtual ~Lista();
	void agregarInicio(T&);
	void agregarFinal(T&);
	bool eliminar(T&);
	string toString();
	void eliminarTodos();
	void invierteLista();
};

template<class T>
inline Lista<T>::Lista()
{
	ppio = NULL;
}

template<class T>
inline Lista<T>::~Lista()
{
	Nodo<T> borrado = NULL;
	
	while (ppio != NULL) {
		borrado = ppio;
		ppio = ppio->getSiguiente();
		delete borrado;
	}
}

template<class T>
inline void Lista<T>::agregarInicio(T& info)
{
	ppio = new Nodo<T>(ppio, info);
}

template<class T>
inline void Lista<T>::agregarFinal(T& obj)
{
	Nodo<T> pAct = ppio;
	if (pAct == NULL) {
		this->agregarInicio(obj);
	}
	else {
		while (pAct->getSiguiente() != NULL) {
			pAct = pAct->getSiguiente();
		}
		Nodo<T>* nuevo = new Nodo<T>(NULL, obj);
		pAct->setSiguiente(nuevo);
	}
}

template<class T>
inline bool Lista<T>::eliminar(T&)
{
	return false;
}

template<class T>
inline string Lista<T>::toString()
{
	return string();
}

template<class T>
inline void Lista<T>::eliminarTodos()
{
}

template<class T>
inline void Lista<T>::invierteLista()
{
}

template<class T>
inline Lista<T>::Lista(const Lista& other)
{
	Nodo<T> otroPpio = other.ppio;//ponermos a ver le primero de la otra lista 
	while (otroPpio != NULL) {
		T* infoN = new T(otroPpio.getInformacion()); //Hacemos la copia de la informacion
		this->agregarInicio(*infoN);// la metemos a la lista de nosotros
		otroPpio = otroPpio->getSiguiente();//si pasa al siguiente objeto de la otra lista
	}

}

template<class T>
Lista<T>& Lista<T>::operator = (const Lista& list){

	//Primero se limpia la lista propia
	Nodo<T> borrado = NULL;
	if (ppio != NULL) {
		borrado = ppio;
		ppio = ppio->getSiguiente();
		delete borrado;
	}

	Nodo<T> otroPpio = list.ppio;
	while (otroPpio != NULL) {
		T* nuevo = new T(otroPpio.getInformacion());//aca se clona la informacion
		this->agregarInicio(*nuevo);
		otroPpio = otroPpio->getSiguiente();
	}

	return *this;
}
