#include <iostream>
#include <cmath>

using namespace std;

// Function prototypes Here
int compra_helado(int a, int b);
int find_palindrome(int c, int x, int n);
void mostrar();

int main() {
  // Llamar a la funcion
  mostrar();
  return 0;
}

int compra_helado(int a, int b) {
//a = dinero del que se dispone. b = precio del helado
    cout << "¿Cu\u00E1nto dinero tienes?" << endl;
    cin >> a;
    cout << "¿Cu\u00E1nto cuesta el helado?" << endl; 
    cin >> b;
    cout << "Tienes " << a << "$. El helado cuesta " << b << "$. Te alcanza para " << a/b << " helados." << endl; 
    while (a >= b) { //mientras tengas más dinero que lo que cuesta el helado, se seguirá haciendo la resta y mostrando el dinero que te queda
        a = a-b;
        cout << "Disfruta tu helado." << endl << "Te quedan " << a << "$." << endl;
    }
    if (a == 0) { //si te quedas sin dinero, se mostrará el siguiente mensaje
        cout << "Te quedaste sin plata adulau." << endl;
    }
    else if (a >= 0) { //si te quedas con algo de cambio, el programa muestra el dinero que te queda
        cout << "Ya no te alcanza pa seguir comprando. Tu cambio es " << a << "$." << endl;
        return a;
    }
    //los símbolos que pongo donde corresponden las tildes es un código para que el programa reconozca las tildes en las vocales. Lo estaré usando en códigos posteriores
    return 0;
}

int find_palindrome(int c, int x, int n) {
  n = 0; 
	cout << "Ingrese un n\u00DAmero para verificar que es un pal\u00EDndromo: " << endl;
	cin >> c;
	x = c;
	while (c > 0) { 
		n = n * 10 + (c % 10); //al principio n es igual a cero, pero al final del bucle este número será el inverso del número
		c = trunc(c/10); //la función truncar elimina la parte decimal de un número, en este caso, eliminamos la parte decimal del cociente del número que queremos verificar entre 10
		// Esta operación en excel nos permite encontrar el número ingresado escrito de derecha a izquierda o invertido
	}
	// Comparamos si el número invertido es igual al que leímos al principio
	if (n == x) {
		cout << "El n\u00DAmero es palíndromo" << endl;
	}
	else {
		cout << "El n\u00DAmero no es palíndromo" << endl;
	}
  return 0;
}

void mostrar() {
  int a, b;
  compra_helado(a, b);
  cout << endl;

  int c, x, n;
  find_palindrome(c, x, n);
}