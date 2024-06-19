#include "ImpConRelleno.h"
#include "ImpSinRelleno.h"
#include "Circulo.h"
#include "Cuadrado.h"


int main(){
	//Probar el modelo con datos quemados
	//Seria bueno escribir una interfaz de usuario TAREA MORAL
	Implementador* ImpS = new ImpSinRelleno;
	Implementador* ImpC = new ImpConRelleno;

	Circulo ci1(1, 2, 3, *ImpS);
	Circulo ci2(1, 2, 3, *ImpC);

	Cuadrado cu3(11, *ImpS);
	Cuadrado cu4(22, *ImpC);



	Figura* vec[4];
	vec[0] = &ci1;
	vec[1] = &ci2;
	vec[2] = &cu3;
	vec[3] = &cu4;

	cout << "----------------------------------" << endl;
	for (int i = 0; i < 4; i++) {
		vec[i]->dibujar();
	}
	cout << endl << endl;




	system("pause");
	return 0;
}