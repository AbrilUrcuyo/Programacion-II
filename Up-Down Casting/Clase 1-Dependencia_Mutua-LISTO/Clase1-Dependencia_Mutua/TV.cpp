#include "TV.h"

TV::TV()
{
    encendido = false;
    canal = 0;
    volumen = 0;
    per = NULL;
}

TV::TV(bool e, int c, int v)
{
    encendido = e;
    canal = c;
    volumen = v;
}


TV::~TV()
{
    if (per != NULL) {
        per->setTv(NULL);
        cout << "Se desligo la persona" << endl;
    }
    cout << "Eliminacion televisor"<<endl;
}

bool TV::getEncendido()
{
    return encendido;
}

int TV::getCanal()
{
    return canal;
}

int TV::getVolumen()
{
    return volumen;
}

Persona* TV::getPersona()
{
    return per;
}

void TV::setEncendido(bool e)
{
    encendido = e;
}

void TV::setCanal(int c)
{
    canal = c;
}

void TV::setVolumen(int v)
{
    volumen = v;
}

void TV::setPersona(Persona* p)
{
    per = p;
}

string TV::toString()
{
    stringstream s;
    s << "EL tv esta: ";
    if (encendido) {
        s << "Encendido." << endl;
        s << "ademas el canal es: " << canal << endl;
        s << "con el volumen: " << volumen << endl;
        if (per != NULL) {
            s << "Hay una persona con nombre: " << per->getNombre() << endl;
            s << "con cedula: " << per->getCedula() << endl;
            s << "con edad: " << per->getEdad() << endl;
        }

    }
    else {
        s << "Apagado" << endl;
        if (per != NULL) {
            s << "Hay una persona con nombre: " << per->getNombre() << endl;
            s << "con cedula: " << per->getCedula() << endl;
            s << "con edad: " << per->getEdad() << endl;
        }
    }
    return s.str();
}
