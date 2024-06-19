#include"ComponenteCompuesto.h"
using namespace std;

int main() {

	cout << "PATRON COMPOSITE...." << endl << endl;
	cout << "Creando algunas referencias a Componentes...." << endl << endl;
	Componente* comp1 = new Periodico();
	Componente* comp2 = new Suplemento();
	Componente* comp3 = new RevistaDeporte();

	Componente* comp4 = new Periodico();
	Componente* comp5 = new Suplemento();
	Componente* comp6 = new RevistaDeporte();

	Componente* comp7 = new Periodico();

	cout << "Creando dos objetos Composite...." << endl << endl;
	ComponenteCompuesto* CC8 = new ComponenteCompuesto("Paquete-1", "0004");
	ComponenteCompuesto* CC9 = new ComponenteCompuesto("Paquete-2", "0005");

	//TAREA MORAL: Se podrá solo escribir Componente* en lugar de ComponenteCompuesto*?

	CC8->Add(*comp1);
	CC8->Add(*comp2);
	CC8->Add(*comp3);

	CC9->Add(*comp4);
	CC9->Add(*comp5);
	CC9->Add(*comp6);

	cout << "Componente Compuesto CC8: " << endl << CC8->toString() << endl;
	cout << "Componente Compuesto CC9: " << endl << CC9->toString() << endl;

	//Si desea se pueden imprimir estos dos paquetes

	ComponenteCompuesto* CC10 = new ComponenteCompuesto("Paquete-Final", "0006");

	CC10->Add(*CC8);
	CC10->Add(*CC9);
	CC10->Add(*comp7);

	cout << "Imprimiendo el paquete final donde se incluyen CC8 y CC9" << endl;
	cout << CC10->toString() << endl;

	cout << "El valor de este paquete final es: " << CC10->getPrecio() << endl;
	cout << "El valor de este paquete final es: " << CC10->getPrecio() << endl;

	system("pause");

	cout << "Eliminando Componente comp1 (periodico) desde CC10" << endl;
	CC10->Delete(*comp7);
	cout << "Componente Compuesto CC10: " << endl << CC10->toString() << endl;

	delete comp1;
	delete comp2;
	delete comp3;
	delete comp4;
	delete comp5;
	delete comp6;
	delete comp7;
	delete CC10;
	delete CC8;
	delete CC9;

	system("pause");
	return 0;
}