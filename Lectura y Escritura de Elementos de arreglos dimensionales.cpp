/*
Lectura y Escritura de Elementos de arreglos dimensionales
*/

#include <iostream>

using namespace std;

int main() {
	// definimos la matriz
	int matriz[3][3];
	// lesctura de la matriz
	
	for (int i=0; i<3 ;i++){
		for (int j =0 ; j < 3;j++){
			cout << "Ingrese el valor para la matriz [" << i << "] [" << j << "]: " << endl;
			cin  >> matriz [i][j];
		}
	}
	// Escritura de elementos
	
	cout << "CONTENIDO DE LA MATRIZ" << endl;
	for (int i =0 ; i< 3 ; i++){
		for (int j=0 ; j<3 ; j++){
			cout << matriz [i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
