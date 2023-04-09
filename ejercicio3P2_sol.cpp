//Ejercicio 3 Practico 2
#include <iostream>
using namespace std;

int main () {
	int dec, bin=0, i=1; //dec=decimal, bin=binario, i=exponente iniciado con 1
	cout << "Ingrese un número en sistema decimal: ";
	cin >> dec;
	while (dec > 0) { //hasta que el cociente de la división del decimal entre 2 sea cero, el bucle se seguirá ejecutando
		bin = bin+(dec%2)*i; //sumamos binario al resto de la división del decimal entre 2 multiplicada por el exponente, que en un principio es igual a 1. Se almacena en la misma variable
		dec = dec/2; //dividimos el decimal entre 2 y el resultado lo almacenamos en la misma variable decimal
		i = i*10; //aumentamos el exponente para la siguiente iteración en el mismo bucle, multiplicandolo por 10
	}
	cout << "El número decimal convertido a binario es: " << bin << endl;
	return 0;
}