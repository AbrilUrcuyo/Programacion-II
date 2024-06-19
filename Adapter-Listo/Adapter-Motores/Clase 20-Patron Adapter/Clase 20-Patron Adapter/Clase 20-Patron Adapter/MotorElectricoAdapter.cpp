#include "MotorElectricoAdapter.h"

MotorElectricoAdapter::MotorElectricoAdapter()
{
	//La unica accion que debe hacer es la del chip
	this->motorElectrico = new MotorElectrico();
	cout << "Creando el adaptador para el motor electrico" << endl;
}

MotorElectricoAdapter::~MotorElectricoAdapter()
{
	if (motorElectrico != NULL) {
		delete motorElectrico;
	}
	cout << "Eliminacion del adapater del motor electrico" << endl;
}

void MotorElectricoAdapter::encender()
{
	cout << "Encendiendo el motor electrico adapter" << endl;
	this->motorElectrico->conectar();
	this->motorElectrico->activar();
}

void MotorElectricoAdapter::acelerar()
{
	cout << "Acelerando el motor electrico adapter" << endl;
	this->motorElectrico->moverMasRapido();
}

void MotorElectricoAdapter::apagar()
{
	cout << "Apagando el motor electrico adapter " << endl;
	this->motorElectrico->detener();
	this->motorElectrico->desconectar();
}
