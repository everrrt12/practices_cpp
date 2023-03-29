//Ejercicio 1 
//Buscar a Fluffy
#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string h1, h2, h3, h4;
    cout << "Escribe el color de las casas separadas por un espacio" << endl;
    cin >> h1 >> h2 >> h3 >> h4;
    if (h4==h1){
        cout << "Ingresa en la casa 1" << endl;
    }
    else if (h4==h2){
        cout << "Ingresa en la casa 2" << endl;
    }
    else if (h4==h3) {
        cout << "Ingresa en la casa 3" << endl;
    }
    else {
        cout << "Sigue buscando en otra casa" << endl;
    }
}
 
