#include "ManejadorFiguras.h"

int main() {
	int op = 0;
	Figura* miFigura = NULL;
	CreadorFigura* cf1 = NULL;
	ManejadorFiguras* mf = new ManejadorFiguras();

	cout << "----- INTERFAZ DE USUARIO -----" << endl;
	cout << "---- MENU CREACION FIGURAS ----" << endl;
	cout << "1- Crear Circulo" << endl;
	cout << "2- Crear Cuadrado" << endl;
	cout << "3- Crear Triangulo" << endl;
	cout << "Digite la opcion: "; cin >> op;

	switch (op) {
	case 1: cf1 = new CreadorCirculo(); break;
	case 2: cf1 = new CreadorCuadrado; break;
	case 3: cf1 = new CreadorTriangulo(); break;
	}

	cout << "Figura creada..." << endl;
	mf->setCreador(cf1);
	mf->crearFigura();
	miFigura = mf->getFigura();

	cout << miFigura->toString() << endl;

	system("pause");
	return 0;
}