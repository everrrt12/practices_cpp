// Ejercicio 4 Practico 2
#include <iostream>
using namespace std;

int main () {
	int x;
	cout << "Ingrese un n\u00FAmero entre 1 y 7" << endl;
	cin >> x;
	//Usamos switch para ejecutar un bloque de códigos en función al valor que se haya declarado
	switch (x) { 
		case 1:
			cout << "Lunes" << endl;
			break; 
			//Importante usar break para que no se sigan ejecutando los bloques de los siguientes valores
		case 2:
			cout << "Martes" << endl;
			break;
		case 3:
			cout << "Mi\u00E9rcoles" << endl;
			break;
		case 4:
			cout << "Jueves" << endl;
			break;
		case 5:
			cout << "Viernes" << endl;
			break;
		case 6:
			cout << "S\u00E1bado" << endl;
			break;
		case 7:
			cout << "Domingo" << endl;
			break;
		default:
			//Default es para cuando los valores no están entre el intérvalo declarado
			cout << "Opci\u00F3n no v\u00E1lida. Use n\u00FAmeros en el int\u00E9rvalo 1-7" << endl;
			// Los códigos como \u00F3 son las vocales con acento
			break;
		}
		return 0;
	}