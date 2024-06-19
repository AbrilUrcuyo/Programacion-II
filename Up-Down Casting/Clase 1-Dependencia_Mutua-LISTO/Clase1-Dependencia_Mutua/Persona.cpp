#include "Persona.h"

Persona::Persona()
{
    nombre = "";
    cedula = "";
    edad = 0;
    tvPtr = NULL;
}

Persona::Persona(string n, string c, int e)
{
    nombre = n;
    cedula = c;
    edad = e;
    tvPtr = NULL;
}

Persona::~Persona()
{
    if (tvPtr != NULL) {
        tvPtr->setPersona(NULL);
        cout << "Se desligo el tele" << endl;
    }
    cout << "Eliminando la persona" << endl;
}

string Persona::getCedula()
{
    return cedula;
}

string Persona::getNombre()
{
    return nombre;
}

int Persona::getEdad()
{
    return edad;
}

TV* Persona::getTv()
{
    return tvPtr;
}

void Persona::setCedula(string c)
{
    cedula = c;
}

void Persona::setNombre(string n)
{
    nombre = n;
}

void Persona::setEdad(int e)
{
    edad = e;
}

void Persona::setTv(TV* t)
{
    tvPtr = t;
}

string Persona::toString()
{
    stringstream s;
    s << "La persona con cedula " << cedula << endl;
    s << "Y nombre: " << nombre << endl;
    s << "con edad: " << edad;
        if (tvPtr != NULL) {
            s << "esta viendo un tv que se encuentra...." << endl;
            if (tvPtr->getEncendido()) {//en ves de usar el toString del Tv se debe usar el get de lo que me importa

                s << "Encendido" << endl;
                s << "ademas el canal es: " << tvPtr->getCanal() << endl;
                s << "con el volumen: " << tvPtr->getVolumen() << endl;
            }
            else {
                s << "Apagado" << endl;
            }
        }
    return s.str();
}

