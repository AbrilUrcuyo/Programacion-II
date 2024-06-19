//#pragma once
//#include "Vendedor.h"
//
//using namespace std;
//
////Este es el singleton 
//class VentaEmpresa {
//private:
//	string nombreEmpresa;
//	string cedJur;
//	int cantUniVendidas;
//	double totalVentas;//Este es el singleton por dia
//
//	VentaEmpresa();
//	//VentaEmpresa(string,string, int, double);
//	static VentaEmpresa* ventaEmpresa;//instancia unica
//	static void destruirVentanEmpresa();
//
//
//	//Tarea moral 
//	//VentaEmpresa& operator =(cont VentaEmpresa&);
//	//VentaEmpresa(const VentaEmpresa&);
//public:
//	static VentaEmpresa& getInstance();//acceder a la instancia
//	int getCantVendida();
//	double getTotalVentas();
//	void setCantVentas(int);
//
//	void setTotalVentas(double);
//	string toString()const;
//
//
//
//	//Tarea moral dar una herencia pequeña con esto
//	 
//
//
//};


#pragma once
#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class VentaEmpresa {        //  Singleton..
private:
    string nombreEmpresa;
    string cedJur;
    int cantUniVendidas;  // esto es información de todos los vendedores..
    double totalVentas;     // "   "   "

    VentaEmpresa();
    //VentaEmpresa(string, string, float, double);
    static VentaEmpresa* ventaEmpresa;         // Se declara la instancia única.
    static void destruirVentaEmpresa();        // Destruir el singleton..


    // Tarea Moral.
    
    VentaEmpresa& operator = (const VentaEmpresa& ventaE) {// Sobrecarga del Operador de Asignación..
        if (this != &ventaE) {
            this->nombreEmpresa = ventaE.nombreEmpresa;
            this->cedJur = ventaE.cedJur;
            this->cantUniVendidas = ventaE.cantUniVendidas;
            this->totalVentas = ventaE.totalVentas;
            this->ventaEmpresa = ventaE.ventaEmpresa;
        }
    }
    VentaEmpresa(const VentaEmpresa& ventaE) {//Constructor Copia

        this->nombreEmpresa = ventaE.nombreEmpresa;
        this->cedJur = ventaE.cedJur;
        this->cantUniVendidas = ventaE.cantUniVendidas;
        this->totalVentas = ventaE.totalVentas;
        this->ventaEmpresa = ventaE.ventaEmpresa;

    }
public:
    virtual ~VentaEmpresa();
    static VentaEmpresa& vEmpresa();   // Esto es para acceder a la Instancia..
    int getCantVendidas();
    double getTotalVentas();
    void setCantVentas(int);
    void setTotalVentas(double);
    string toString()const;
};