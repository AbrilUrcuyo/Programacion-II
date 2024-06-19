#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class ObjetoBase {
public:
	//Como es Abstracta no necesita constructor
	virtual ~ObjetoBase();
	virtual string toString() const = 0 ;

};


//Se crea la clase adaptador para poder retornar el tipo de clase
//que se maneja en el momento
class AdaptadorBase : public ObjetoBase {
public:
	virtual string toString() const;

};

ostream& operator <<(ostream& salida, const ObjetoBase& obj) ;

