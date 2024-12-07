/*
Uso de cmath
Objetivo: Usar varias funciones matemáticas de la biblioteca cmath.
Instrucciones:
1. Solicita un número al usuario.
2. Realiza varias operaciones matemáticas con el número: raíz cuadrada, valor absoluto, potencia,
redondeo, seno, coseno y tangente.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double num;
	cout << "Ingrese un numero: ";
	cin  >> num;
	cout <<endl;
	cout << "Valor absoluto                  : " << fabs (num)    << endl;
	cout << "Raiz cuadrada                   : " << sqrt (num)    << endl;
	cout << "Potencia                        : " << pow  (num,2)  << endl;
	cout << "Redondeo del entero más cercano : " << round(num)    << endl;
	cout << "Redondeo hacia arriba           : " << ceil (num)    << endl;
	cout << "Redondeo hacia abajo            : " << floor(num)    << endl;
	cout << "Seno                            : " << sin  (num)    << endl;
	cout << "Coseno                          : " << cos  (num)    << endl,
	cout << "Tangente                        : " << tan  (num)    << endl;
		
	return 0;
}