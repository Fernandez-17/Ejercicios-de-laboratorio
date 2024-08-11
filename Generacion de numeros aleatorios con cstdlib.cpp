/*
Generación de Números Aleatorios con cstdlib
Objetivo: Generar números aleatorios usando la biblioteca cstdlib.
Instrucciones:
1. Define un juego de "Número Mágico" donde el usuario adivina un número entre 1 y 100.
2. Usa rand y srand para generar números aleatorios.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){
	srand(time(0)); //Inicializamos el generador de números aleaotorios
	int numero_magico = rand() % 100 + 1;
	int intento;
	
	cout << "Adivina el numero magico entre 1 y 100 : " ;
	while (true){
		cin >> intento ;
		if (intento > numero_magico){
			cout << "Muy alto , intentelo de nuevo : ";
		}else if (intento < numero_magico){
			cout << "Muy bajo , intentelo de nuevo : ";
		}else {
			cout << "Correcto el numero magico es  : "<< numero_magico << endl;
			break;
		}
	}
	return 0;
}