#include <iostream>
#include <sstream>

using namespace std;

class DecoratorX {
private:
	int x;
	string cedula;
	DecoratorX* ptr;//Este es el enlace hacia el otro decorador
public :
	DecoratorX(int, string, DecoratorX*);
	virtual  ~DecoratorX() {}
	void setProDec(DecoratorX*);//De una... setear el sig decorador
	DecoratorX* getProDec(); //retorna el enlace hacia el otro decorador
	int getX();
	string getCedula();
	string toString();
};

DecoratorX::DecoratorX(int n, string ced, DecoratorX* pntro)
{
	x = n;
	cedula = ced;
	ptr = pntro;

}

void DecoratorX::setProDec(DecoratorX* ptr2)
{
	ptr = ptr2;
}

DecoratorX* DecoratorX::getProDec()
{
	return ptr;
}

int DecoratorX::getX()
{
	return x;
}

string DecoratorX::getCedula()
{
	return cedula;
}

string DecoratorX::toString()
{
	stringstream s;
	
	if (ptr != NULL) {
		s << "[OBJ = " << x << ", " << cedula << "] ----->";
		s << this->ptr->toString();//Llamado recursivo a los otros toStrings
	}
	else {
		s << "[OBJ = " << x << ", " << cedula << "] --FIN--";
	}
	return s.str();

}


int main() {
	//Identificadores utilizados en el proceso de eliminacion 
	char letra;
	int valor;
	string ced;
	DecoratorX* pAct = NULL;
	DecoratorX* borrador = NULL;
	DecoratorX* ppio = NULL;
	cout << "-------Sintesis del decorador------" << endl;
	cout << endl;
	cout << "Crear los objeto decorador independientes..." << endl;
	DecoratorX* k1 = new DecoratorX(1, "11111", NULL);
	DecoratorX* k2 = new DecoratorX(2, "22222", NULL);
	DecoratorX* k3 = new DecoratorX(3, "33333", NULL);
	DecoratorX* k4 = new DecoratorX(4, "44444", NULL);

	cout << endl;
	cout << "Conectar todos los objetos tipo decorator...." << endl;
	k4->setProDec(k3);
	k3->setProDec(k2);
	k2->setProDec(k1);


	cout << endl;
	cout << "Imprimir k4..." << endl;
	cout << k4->toString() << endl;

	cout << "--------Eliminacion del decorador------------" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Cual objeto decorador desea borrar.... por num o por ced.... n/c" << endl;
	cin >> letra;
	if (letra == 'n' || letra == 'N') {//Borrar por numero
		cout << "Digite el numero que tiene le objeto a borrar: " << endl;
		cin >> valor;
		ppio = k4; //Asignamos a pAct el ultimo enlace, en este caso k4
		pAct = ppio;// A pAct lo puedo mover...
		if (pAct != NULL) {//Si existe la lista de decoradores 
			if (pAct->getX() == valor) {//Tenemos que eliminar el primero 
				borrador = pAct;
				ppio= pAct->getProDec();
				delete borrador;

			}
			else {//Si no es el primero la busqueda se hara con un while
				  //Es decir que el que hay que borrar esta dentro de la lista
				while (pAct->getProDec() != NULL && pAct->getProDec()->getX()!=valor){
					pAct = pAct->getProDec();

				}
				if (pAct->getProDec() == NULL) {// esto quiere decir que no lo encontro
					cout << "Este objeto decorador con valor: " << valor << " no existe" << endl;
				}
				if (pAct->getProDec()->getX() == valor){ //esto quiere decir que si lo encontro
					borrador = pAct->getProDec();
					pAct->setProDec(borrador->getProDec());//Aca se desvia el enlace hacia el proximo que ve borrado 
					delete borrador;
				}


			}
			cout << ppio->toString() << endl;
		}



	}
	else { //Borrar cedula  ==>Tarea Moral
		if ('c' || 'C') {
			cout << "Digite el numero de cedula a borrar:" << endl;
			cin >> ced;
			ppio = k4;
			pAct = ppio;
			if (pAct != NULL) {
				if (pAct->getCedula() == ced) {
					borrador = pAct;
					ppio = pAct->getProDec();
					delete borrador;
				}
				else {
					while (pAct->getProDec() != NULL && pAct->getProDec()->getCedula() != ced) {
						pAct = pAct->getProDec();
					}
					if (pAct->getProDec() == NULL) {
						cout << "La cedula " << ced << " no existe " << endl;
					}
					if (pAct->getProDec()->getCedula() == ced) {
						borrador = pAct->getProDec();
						pAct->setProDec(borrador->getProDec());
						delete borrador;
					}
				}
				cout << ppio->toString();
			}
		}

	}
	//Tarea moral intregar esto en el documento de la hamburguesa



	system("pause");
	return 0;
}
