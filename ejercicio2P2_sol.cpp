//Ejercicio 2 practico 2
#include <iostream>
#include <cmath> // Incluyo la librería para usar la función truncar, que consiste en eliminar la parte decimal de un número, está en Excel y funciona, entre otras cosas, para identificar palíndromos
using namespace std;
int main () {
	int a, x, n = 0; 
	cout << "Ingrese un número: " << endl;
	cin >> a;
	x = a;
	while (a > 0) { 
		n = n * 10 + (a % 10); //al principio n es igual a cero, pero al final del bucle este número será el inverso del número
		a = trunc(a/10); //la función truncar elimina la parte decimal de un número, en este caso, eliminamos la parte decimal del cociente del número que queremos verificar entre 10
		// Esta operación en excel nos permite encontrar el número ingresado escrito de derecha a izquierda o invertido
	}
	// Comparamos si el número invertido es igual al que leímos al principio
	if (n == x) {
		cout << "El número es palíndromo" << endl;
	}
	else {
		cout << "El número no es palíndromo" << endl;
	}
	return 0;
}