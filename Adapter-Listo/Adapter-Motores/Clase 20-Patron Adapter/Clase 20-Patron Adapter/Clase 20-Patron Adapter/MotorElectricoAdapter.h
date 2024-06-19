#pragma once
//Motor electrico adapter

#include  "Motor.h"

#include "MotorElectrico.h"
using namespace std;

class MotorElectricoAdapter : public Motor {
private:
	MotorElectrico* motorElectrico;//Futuro chip
public:
	MotorElectricoAdapter();
	virtual ~MotorElectricoAdapter();
	void encender();
	void acelerar();
	void apagar();



};
