//Ejercicio 2 
#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	cout << "Probemos tu capacidad de sumar. Escribe dos digitos separados por un espacio y el tercer dígito es el resultado" << endl;
	cin >> x >> y >> z;
	if (-1000000 <= (x+y) && (x+y) <= 1000000){
		if (x+y!=z){
			cout << "ERROR. La suma de " << x << " y " << y << " es "  << x+y << endl;
			}
		else { 
		}}
	else { 
	cout << "ERROR. Prueba a usar números en un rango entre -1 millón y 1 millón" << endl;
	}
	return 0;
}
