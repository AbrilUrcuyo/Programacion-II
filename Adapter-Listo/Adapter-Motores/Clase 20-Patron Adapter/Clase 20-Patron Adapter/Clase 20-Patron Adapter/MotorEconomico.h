
//----------------------------M-Economico-----------------------------------------
#pragma once
#include"Motor.h"
using namespace std;

class MotorEconomico : public Motor {
public:
	MotorEconomico();
	virtual ~MotorEconomico();
	void encender();
	void acelerar();
	void apagar();
};