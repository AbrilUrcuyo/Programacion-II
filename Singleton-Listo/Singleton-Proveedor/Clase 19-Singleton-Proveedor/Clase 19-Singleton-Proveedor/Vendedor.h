#include<iostream>
#include<sstream>
#include "VentaEmpresa.h"
using namespace std;

class Vendedor { //Dat�fono
private:
	string cedula;
	string nombre;
	string apellido;
	int unidadesVendidas; //En todo el d�a
	double tVentas;
public:
	Vendedor();
	Vendedor(string ced, string nom, string apell, int uVend, double totalV);
	virtual ~Vendedor();
	void setUnidadesVendidas(int uVend);
	void setTVentas(double totalV);
	int getUnidadesVendidas();
	double getTVentas();
	string toString() const;
	void realizarVenta(int ); //Aqu� accede al singleton, IMPORTANTE
};