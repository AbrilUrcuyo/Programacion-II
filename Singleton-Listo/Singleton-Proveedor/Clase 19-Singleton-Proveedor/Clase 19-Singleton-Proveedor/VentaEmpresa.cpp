#pragma once
#include<iostream>
#include<string>
#include "VentaEmpresa.h"
//En esta zona siempre se inicializa el singleton
VentaEmpresa* VentaEmpresa::ventaEmpresa = NULL;

VentaEmpresa::VentaEmpresa()
{
	this->nombreEmpresa = "UNA-SINGLETON";
	this->cedJur = "12312-23425-345";
	this->cantUniVendidas = 0;
	this->totalVentas = 0;

}

void VentaEmpresa::destruirVentaEmpresa()
{
	if (ventaEmpresa != NULL) {
		delete ventaEmpresa;
		ventaEmpresa = NULL;
	}
}

VentaEmpresa::~VentaEmpresa()
{
	cout << "Eliminacion del singleton" << endl;
}

VentaEmpresa& VentaEmpresa::vEmpresa()//getIntance()
{
	if (ventaEmpresa == NULL) {
		ventaEmpresa = new VentaEmpresa();
		atexit(&destruirVentaEmpresa);
	}
	return *ventaEmpresa;
}

int VentaEmpresa::getCantVendidas()
{
	return this->cantUniVendidas;
}

double VentaEmpresa::getTotalVentas()
{
	return this->totalVentas;
}

void VentaEmpresa::setCantVentas(int c)
{
	cantUniVendidas += c;

}

void VentaEmpresa::setTotalVentas(double c)
{
	this->totalVentas += c;
}

string VentaEmpresa::toString() const
{
	stringstream s;
	s << "Datos de la empresa" << endl;
	s << "Nombre de la empresa: " << nombreEmpresa << endl;
	s << "Cedula juridica: " << cedJur << endl;
	s << "Cantidad de Unidades: " << cantUniVendidas << " llantas" << endl;
	s << "Total de ventas..." << totalVentas << " Colones" << endl;
	return s.str();
}
