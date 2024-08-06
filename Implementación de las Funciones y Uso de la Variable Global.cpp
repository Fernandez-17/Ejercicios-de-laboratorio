//Implementacion de las Funciones y Uso de la Variable Global
/*
Objetivo: Implementar las funciones de depositar, retirar y mostrar saldo utilizando una variable global para
el saldo.
Instrucciones:
1. Definir una Variable Global para el Saldo:
o Define una variable global int saldo inicializada a 0.
2. Crear las Funciones void:
o void depositar(): Aumenta el saldo en 100 unidades.
o void retirar(): Disminuye el saldo en 100 unidades si hay suficiente saldo.
o void mostrarSaldo(): Muestra el saldo actual.
3. Modificar la Función menu:
o Actualiza la función menu (descomentando) para invocar las funciones depositar, retirar
y mostrarSaldo en las opciones correspondientes.

#include<iostream>
using namespace std;
*/

#include<iostream>
using namespace std;
// variable global para saldo
int saldo = 0;
// funcion para depositar dinero
void depositar (){
	saldo += 100;
	cout << "\nSe han depositado 100 unidades. Nuevo saldo: " << saldo << endl;
}
// funcion para retirar dinero
void retirar (){
	if (saldo >= 100){
		saldo -= 100;
		cout << "\nSe han retirado 100 unidades. Nuevo saldo: " << saldo << endl;
	} else{
		cout << "\nSaldo insuficiente." << endl;
	}
}
// funcion para mostrar el saldo
void mostrar_saldo(){
	cout << "\nSaldo actual: " << saldo << endl;
}

// funcion para mostrar el menu y ejecutar la opcion sleccionada
void menu (){
	int opcion;
	do{
		cout << "\n--- CAJERO AUTOMATICO ---" << endl;
		cout << "\n1. Depositar 100" << endl;
		cout << "\n2. Retirar 100"   << endl;
		cout << "\n3. Mostrar saldo"<< endl;
		cout << "\n4. Salir"         << endl;
		cout << "\n- - - - - - - - - - - - -" << endl;
		cout << "\nSeleccione un opcion por favor: ";
		cin  >> opcion;
		
		switch (opcion) {
			case 1:
				depositar();
				break;
			case 2:
				retirar();
				break;
			case 3:
				mostrar_saldo();
				break;
			case 4 :
				cout << "\nSaliendo . . . " << endl;
				break;
			default:
				cout << "\nOpcion no valida, intentelo nuevamente por favor." << endl;	
		}	
	} while (opcion != 4);
}

int main (){
	menu();
	return 0;
}



