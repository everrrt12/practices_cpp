//Ejercicio 11
#include <iostream>
using namespace std;
int main() {
    int base, xp, resultado = 1, i;
    cout << "Ingrese dos n\u00FAmeros separados por un espacio. El primero ser\xA1 la base de una potencia y el segundo; el exponente." << endl;
    cin >> base >> xp;
    for (i = 0; i < xp; i++) {
        resultado = resultado * base;
    }
    cout << "El resultado de " << base << " elevado a " << xp << " es: " << resultado << endl;

    return 0;
}
