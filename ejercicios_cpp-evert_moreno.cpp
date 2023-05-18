#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes Here
void compra_helado();
void find_palindrome();

int main() {
  // Llamar a la funcion
  compra_helado();
  find_palindrome();
  return 0;
}

void compra_helado() {
  int a, b; //a=dinero del que se dispone. b=precio del helado
    cout << "¿Cu\u00E1nto dinero tienes?" << endl;
    cin >> a;
    cout << "¿Cu\u00E1nto cuesta el helado?" << endl; 
    cin >> b;
    cout << "Tienes " << a << "$. El helado cuesta " << b << "$. Te alcanza para " << a/b << " helados." << endl; 
    while (a>=b) { //mientras tengas más dinero que lo que cuesta el helado, se seguirá haciendo la resta y mostrando el dinero que te queda
        a = a-b;
        cout << "Disfruta tu helado." << endl << "Te quedan " << a << "$." << endl;
    }
    if (a==0) { //si te quedas sin dinero, se mostrará el siguiente mensaje
        cout << "Te quedaste sin plata adulau." << endl;
    }
    else if (a>=0) { //si te quedas con algo de cambio, el programa muestra el dinero que te queda
        cout << "Ya no te alcanza pa seguir comprando. Tu cambio es " << a << "$." << endl;
    }
    //los símbolos que pongo donde corresponden las tildes es un código para que el programa reconozca las tildes en las vocales. Lo estaré usando en códigos posteriores
}

void find_palindrome() {
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
}