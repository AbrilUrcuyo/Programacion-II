#include"Vendedor.h"

Vendedor::Vendedor() {
	cedula = "sin definir";
	nombre = "sin definir";
	apellido = "sin definir";
	unidadesVendidas = 0;
	tVentas = 0;
}

Vendedor::Vendedor(string ced, string nom, string ape, int uv, double tv) {
	cedula = ced;
	nombre = nom;
	apellido = ape;
	unidadesVendidas = uv;
	tVentas = tv;
}

Vendedor::~Vendedor() {
}

void Vendedor::setUnidadesVendidas(int uVend)
{
	unidadesVendidas += uVend;
}

void Vendedor::setTVentas(double v) {
	tVentas += v;
}

int Vendedor::getUnidadesVendidas()
{
	return unidadesVendidas;
}

double Vendedor::getTVentas() {
	return tVentas;
}

string Vendedor::toString() const {
	stringstream s;
	s << "Cedula " << cedula << endl
		<< "Nombre " << nombre << endl
		<< "Apellido " << apellido << endl
		<< "Unidades vendidas.." << unidadesVendidas << endl
		<< "Ventas..." << tVentas << endl;
	return s.str();
}

void Vendedor::realizarVenta(int c)
{
	VentaEmpresa& VE = VentaEmpresa::vEmpresa();
	double ventas = (c * 1000);
	this->setUnidadesVendidas(c);//Esta es la parte del vendedor
	this->setTVentas(ventas); //Esta es la parte del vendedor


	VE.setCantVentas(c);//Esta es la parte del singleton
	VE.setTotalVentas(ventas);//Esta es la parte del singleton

}
