/*
Transposición de una Matriz
 Transpuesta basicamente consiste en intercambiar las filas por las columnas
Objetivo: Calcular la transpuesta de una matriz usando una función.
*/

#include <iostream>
using namespace std;

void matriz_transpuesta( int matriz [][3],int transpuesta[][3], int filas , int columnas){
	for (int i =0 ; i<filas ; i++){
		for (int j =0 ; j<columnas ; j ++){
			transpuesta [j][i] = matriz [i][j];
		}
	}
}

void mostrar_matriz( int matriz[][3], int filas, int columnas){
	for (int i =0 ; i< filas; i++){
		for (int j =0; j<columnas; j++){
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}
}

int main (){
	int matriz [3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{5, 6, 7}
	};
	
	int transpuesta [3][3];
	cout << "- - - - Matriz original - - - -" << endl;
	mostrar_matriz(matriz,3,3);
	cout << "- - - Matriz Transpuesta - - -" << endl;
	matriz_transpuesta(matriz,transpuesta,3,3);
	mostrar_matriz(transpuesta,3,3);

	return 0;
}