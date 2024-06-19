// Memento
// Es un patron mas facil que hay, tambien es conocido como recuerdo
//Caputrar el estado interno de un objeto, para ser restaurado en el futuro
//Cliente<->Objeto Originador<->memento 
// El juego es entregado al origibador y este realiza el momento de checkeo, este lo meto como en una lista de mementos pasados
// 
//
#include "Originador.h"
#include "Juego.h"
#include "RepositorioMementos.h"
using namespace std;
int main()
{
	int num = 0;
	string nombreJ;
	cout << "Digite el nombre del juego: " << endl;
	cin >> nombreJ;


	//Crear el repositorio de Mementos y el Originador....

	RepositorioMementos* GM = new RepositorioMementos();
	Originador* OR = new Originador();

	//--------------------------------------------------------

	//Creando el juego....
	Juego* juego = new Juego(nombreJ);
	juego->setNumeroAleatorio(rand()); //Aqui ya estoy jugando....
	juego->setPuntoDeChequeo(num++);

	OR->setEstado(juego);//Aca el originador crea un nuevo juego de ese que recibe

	GM->agregaMemento(OR->retornaMemento()); //Aca se guarda el memento

	//--------------------------------------------------------
	//Aca sigo jugando....
	juego = new Juego(nombreJ);
	juego->setNumeroAleatorio(rand());
	juego->setPuntoDeChequeo(num++);
	OR->setEstado(juego);
	GM->agregaMemento(OR->retornaMemento());// Se guardo otro memento

	//Y asi guardo todos los mementos que yo quiero


	//--------------------------------------------------------
	//Aca se acabo el juego, y quiero ver los elementos
	cout << "---------Ver elementos----------" << endl;
	cout << GM->toString() << endl;

	system("pause");
	system("cls");

	cout << "-----Algun elemento en particular-------" << endl;
	cout << "Ingrese algun numero: ";
	cin >> num;
	OR->setEstado(juego);
	OR->restauraMemento(GM->getMemento(num));// se restaura un memento
	                                                                      // memento en un punto de chequeo
	juego = OR->getEstado();
	cout << "El juego es......" << juego->toString() << endl;





	system("pause");
	return 0;

}
