//---------------------------------M-Gaston.h----------------------------
#pragma once
#include"Motor.h"
using namespace std;

class MotorGaston : public Motor {
public:
	MotorGaston();
	virtual ~MotorGaston();
	void encender();
	void acelerar();
	void apagar();
};