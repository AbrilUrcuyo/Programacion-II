#include "MotorElectrico.h"
#include "MotorGaston.h"
#include "MotorEconomico.h"
#include "MotorElectricoAdapter.h"
#include <memory>

using namespace std;

int main() {
	cout << "--------Motor Gaston--------------" << endl;
	Motor* motorG = new MotorGaston();
	motorG->encender();
	motorG->acelerar();
	motorG->apagar();

	cout << "--------Motor Economico--------------" << endl;
	Motor* motorE = new MotorEconomico();
	motorE->encender();
	motorE->acelerar();
	motorE->apagar();


	cout << "--------Motor Electrico--------------" << endl;
	Motor* motorEL = new MotorElectricoAdapter();
	motorEL->encender();
	motorEL->acelerar();
	motorEL->apagar();

	delete motorE;
	delete motorEL;
	delete motorG;

	return 0;
}