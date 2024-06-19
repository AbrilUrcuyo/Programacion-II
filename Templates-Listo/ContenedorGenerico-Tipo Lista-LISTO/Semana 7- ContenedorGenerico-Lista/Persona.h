#pragma once
#include<sstream>
#include <iostream>

using namespace std;

class Persona {
private:
    string cedula;
    string nombre;
    string apellido;
    int edad;
    int cant;
    int tam;
    int* infoFam;
public:
    Persona(string = ("Indef"), string = ("Indef"), string = ("Indef"), int =0, int =0);
    Persona(const Persona& pc);
    virtual ~Persona();
    string toString();
    friend ostream& operator << (ostream& out, Persona& p);
    Persona& operator = (const Persona&);
    bool operator == (const Persona&);
    int operator + (const Persona&);
    string getCedula();
};

Persona::Persona(string ced, string nom, string ape, int ed, int tami)
 { 
    nombre = nom;
    cedula = ced;
    apellido = ape;
    edad = ed;
    cant = 0;
    tam = tami;
    int numero = 0;
    int edades=0;
    infoFam = new int [tam];
    cout << "Ingrese la edad de los hijos: " << endl;

    for (int i = 0; i < tam; i++) {
        cin >> edades;
        infoFam[cant++] = edades;
    }

}

Persona::Persona(const Persona& pc) {
    this->cedula = pc.cedula;
    this->nombre = pc.nombre;
    this->apellido = pc.apellido;
    this->edad = pc.edad;
}

Persona::~Persona() {
    cout << "Eliminando las edades de los hijos" << endl;
    if (infoFam != NULL) {
        delete infoFam;
    }
    cout << "Eliminando Persona.." << endl;

}

string Persona::toString() {
    stringstream s;
    s << "Cedula...." << cedula << endl
        << "Nombre..." << nombre << endl
        << "Apellido.." << apellido << endl
        << "Edad......" << edad << endl << endl;

    s << "Mostrando las edades de los hijos" << endl;
    for (int i = 0; i < cant; i++) {
        s << infoFam[i]<<"----";
    }
    return s.str();
}

ostream& operator << (ostream& out, Persona& p) {
    return out << p.toString();
}

Persona& Persona::operator = (const Persona& p) {
    cedula = p.cedula;
    nombre = p.nombre;
    apellido = p.apellido;
    edad = p.edad;
    return *this;
}

bool Persona::operator==(const Persona& p)
{
    return (this->cedula == p.cedula && this->nombre == p.nombre && this->apellido == p.apellido && this->edad == p.edad);
}

inline int Persona::operator+(const Persona& p)
{
    return this->edad+=p.edad;
}

inline string Persona::getCedula()
{
    return cedula;
}
