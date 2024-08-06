#include<iostream>
using namespace std;

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
				//depositar
				break;
			case 2:
				//retirar
				break;
			case 3:
				//mostrar
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