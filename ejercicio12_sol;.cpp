//Ejercicio 12
#include <iostream>

using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Ingrese un n�mero entero positivo para hallar su factorial." << endl << "*Consejo: no use n�meros mayores a 50: " << endl;
    cin >> n;
    while (n < 0) {
        cout << "El n�mero ingresado es negativo. Vuelve a intentarlo en la l�nea de abajo." << endl;
        cin >> n;
    }
    if (n > 50) {
        cout << "El resultado se demorara en ser calculado. Intente con un numero mas pequeno. Vuelva a correr el c�digo" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << n << " es " << factorial << endl;
    return 0;
}
