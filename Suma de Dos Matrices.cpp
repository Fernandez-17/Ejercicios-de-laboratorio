/*
Suma de Dos Matrices
Objetivo: Implementar la suma de dos matrices de la misma dimensión.
*/

#include <iostream>

using namespace std;

int main (){
	int matriz [3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	int matriz_2 [3][3] = {
		{9, 8, 7},
		{6, 5, 4},
		{3, 2, 1}	
	};
	
	// Sumamos las matrices
	int suma [3][3] ;       // definimos la variable matriz suma 
	
	for (int i =0 ; i<3 ; i++){
		for (int j=0 ; j<3 ; j++){
			suma[i][j] = matriz[i][j] + matriz_2[i][j];
		}
	}
	 
	// Mostramos la matriz resultante 
	for (int i=0 ; i<3 ; i++){
		for (int j =0 ; j<3 ; j++){
			cout << suma [i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
