#pragma once
#include <iostream>
#include <sstream>
#include <iostream>

using namespace std;

class ObjetoBase {//Abstracta
public:
	virtual ~ObjetoBase();
	virtual string toString() const = 0;
	
};

class adaptadorBase : public ObjetoBase {
public:
	virtual string toString() const;
};

ostream& operator <<(ostream& out, const ObjetoBase& obj);


