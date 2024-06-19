#include "Interfaz.h"
string Interfaz::cod = "";
string Interfaz::nom = "";

Grabador* Interfaz::creandoGrabadorNuevo()
{
    cout << "Ingrese los valores para el grabador nuevo: " << endl;
    mensajePeticion();
    return new GrabadorNuevo(cod, nom);
}

Medio* Interfaz::creandoMedioNuevo()
{
    cout << "Ingrese los valores para el CD nuevo: " << endl;
    mensajePeticion();
    return new MedioNuevo(cod, nom);
}

Reproductor* Interfaz::creandoReproductorNuevo()
{
    cout << "Ingrese los valores para el reproductor nuevo: " << endl;
    mensajePeticion();
    return new ReproductorNuevo(cod, nom);
}

Grabador* Interfaz::creandoGrabadorViejo()
{
    cout << "Ingrese los valores para el grabador Viejo: " << endl;
    mensajePeticion();
    return new GrabadorViejo(cod, nom);
}

Medio* Interfaz::creandoMedioViejo()
{
    cout << "Ingrese los valores para la cinta: " << endl;
    mensajePeticion();
    return new MedioViejo(cod, nom);
}

Reproductor* Interfaz::creandoReproductorViejo()
{
    cout << "Ingrese los valores para el reproductor viejo: " << endl;
    mensajePeticion();
    return new ReproductorViejo(cod, nom);
}

void Interfaz::mensajePeticion()
{
    string codi, nomb;//variables comodin
    cout << "Ingrese el codigo: ";
    cin >> codi;
    cod = codi;//Asi se cargan los atributos statics
    cout << "Ingrese el nombre: ";
    cin >> nomb;
    nom = nomb;

}
