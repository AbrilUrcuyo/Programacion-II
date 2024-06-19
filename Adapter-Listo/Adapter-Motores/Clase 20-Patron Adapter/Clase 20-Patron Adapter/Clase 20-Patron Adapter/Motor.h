#pragma once
#include <iostream>
#include <sstream>

class Motor {  // <<Abstracta>>
public:
	virtual ~Motor() {};
	virtual void encender() = 0;  // M.V:P.
	virtual void acelerar() = 0;  // M.V:P.
	virtual void apagar() = 0;  // M.V:P.
};