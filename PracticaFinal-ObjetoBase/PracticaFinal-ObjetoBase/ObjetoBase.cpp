#include "ObjetoBase.h"

ObjetoBase::~ObjetoBase()
{
	cout << "Elimando el objeto base"<<endl;
}

string adaptadorBase::toString() const
{
	return typeid(*this).name();
}

ostream& operator<<(ostream& out, const ObjetoBase& obj)
{
	out << obj.toString();
	return out;
}

