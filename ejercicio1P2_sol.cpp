// Ejercicio 1 practico 2
#include <iostream>
using namespace std;
int main() {
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
    return 0;
}