#include<iostream>
#include<sstream>
using namespace std;

class MiAnimal {
	private:
		string nombre;
		double LCcm;
		double PTcm;
	public:
		MiAnimal(string nom = "", double lc = 0.0, double pt = 0.0);
		virtual ~MiAnimal();
		void setNombre(string nom);
		void setLCcm(double lc);
		void setPTcm(double pt);
		string getNombre();
		double getLCcm();
		double getPTcm();
};

MiAnimal::MiAnimal(string nom, double lc, double pt)
: nombre(nom), LCcm(lc), PTcm(pt) {
}

MiAnimal::~MiAnimal()
{
}

void MiAnimal::setNombre(string nom)
{
	nombre = nom;
}

void MiAnimal::setLCcm(double lc)
{
	LCcm = lc;
}

void MiAnimal::setPTcm(double pt)
{
	PTcm = pt;
}

string MiAnimal::getNombre()
{
	return nombre;
}

double MiAnimal::getLCcm()
{
	return LCcm;
}

double MiAnimal::getPTcm()
{
	return PTcm;
}

//------------------------------------------------------------ MASCOTA (interfaz) ------------------------------------------------------------

class Mascota {
	protected:
		string nombre;
		string raza;
		double LCpulg;
		double PTpulg;
	public:
		Mascota(string nom, string raz, double lc, double pt);
		virtual ~Mascota();
		virtual string toString();
		virtual double calculoPeso(int k);
};

Mascota::Mascota(string nom, string raz, double lc, double pt)
	:nombre(nom), raza(raz), LCpulg(lc), PTpulg(pt){
}

Mascota::~Mascota()
{
	cout << "Eliminando a la mascota "<<endl;
}

string Mascota::toString()
{
	stringstream s;
	s << "MASCOTA" << endl;
	s << "Nombre: " << nombre << endl;
	s << "Raza: " << raza << endl;
	s << "Largo del cuerpo:" << LCpulg << endl;
	s << "Perimetro del toraxx: " << PTpulg << endl;
	s << endl;
	return s.str();
}

double Mascota::calculoPeso(int k) //El k cambia dependiendo de cuál animal sea
{
	return (PTpulg * LCpulg) / k;
}

//------------------------------------------------------------ MASCOTA-ADAPTER ------------------------------------------------------------

class MascotaAdapter : public Mascota {
	private:
		MiAnimal* ptrMascota;
	public:
		MascotaAdapter(string raza = "", MiAnimal* ptr = NULL);
		virtual ~MascotaAdapter();

};

MascotaAdapter::MascotaAdapter(string raza, MiAnimal* ptr)
	: Mascota(ptr->getNombre(), raza, ptr->getLCcm()/2.54, ptr->getPTcm()/2.54), ptrMascota(ptr)
{

}

MascotaAdapter::~MascotaAdapter()
{
	if (ptrMascota != NULL)
		delete ptrMascota;
}

int main() {
	// Zona de identificadore comodin..
	Mascota* masc1 = NULL;     // Puntero para le UpCast.
	char letra;
	string nom, raz;
	double lc, pt;
	int k, op;

	cout << "---------------------MASCOTA SIMPLE PARA VETERINARIA----------------------------" << endl;
	cout << endl;
	cout << "Nombre de la mascota: ";
	cin >> nom;
	cout << "Raza de la mascota: ";
	cin >> raz;
	cout << "Los valores numericos a ingresar, seran en pulgads o centim......p/c....";
	cin >> letra;
	cout << endl;
	cout << "Ingrese la medida del largo de su cuerpo: ";
	cin >> lc;
	cout << "Ingrese la medida del perimetro toraxico: ";
	cin >> pt;

	if (letra == 'p')
		masc1 = new Mascota(nom, raz, lc, pt);
	else {
		MiAnimal* ptrMiAnim = new MiAnimal(nom, lc, pt);
		masc1 = new MascotaAdapter(raz, ptrMiAnim);
	}
	cout << "La informacion del animal es: " << endl;
	cout << masc1->toString() << endl;

	cout << "De que tipo de animal se trata.?" << endl;
	cout << "		1- Perro" << endl;
	cout << "		2- Vaca o Caballo." << endl;
	cout << "		3- Porcino." << endl;
	cout << "------------------------" << endl;
	cout << "Digite la opcion: ";
	cin >> op;
	switch (op) {
	case 1: k = 250; break;
	case 2: k = 300; break;
	case 3: k = 400; break;
	}
	cout << "La informacion del peso del animal es de: " << masc1->calculoPeso(k) << " libras." << endl;

	system("pause");
	return 0;
}