/*
Funciones paso por Valor y por Referencia
• Objetivo: Mostrar la diferencia entre pasar parámetros por valor y por referencia, y cuándo se usaría
cada uno.
• Instrucciones:
o Define dos funciones: una que pase un parámetro por valor y otra por referencia.
o Modifica el valor del parámetro dentro de cada función y muestra el resultado.

Paso por valor para evitar modificar la variable original, y paso por referencia para permitir modificaciones.
*/
#include <iostream>
using namespace std;

// funcion por valor
void por_valor( int a){
	a=10;
	cout << "\nDentro de por valor , a = " << a << endl;
}

// funiocn por referencia
void por_referencia(int &a){
	a =10;
	cout << "\nDentro de por referencia , a = " << a << endl;
}

int main (){
	int num = 5;
	cout << "\nAntes de pasar por valor , num = " << num << endl;
	por_valor(num);
	cout << "\nLuego de pasar por valor , num = " << num << endl;
	
	cout << "\nAntes de pasar por referencia , num = " << num << endl,
	por_referencia(num);
	cout << "\nLuego de pasar por referencia , num = " << num << endl;
	
	return 0;
}