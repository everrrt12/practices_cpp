//Ejercicio 8 
#include <iostream>
#include <string>
#include <wchar.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string original, word;
    cout << "Escribe palabras separadas por un espacio." << endl << "El programa hará un listado con cada palabra en una línea y cada palabra estará entre corchetes" << endl;
    getline (cin, original);
    for (char c : original) {
        if (c != ' ') {
            word += c;
        } else {
            cout << "[" << word << "] "<< endl;
            word = "";
        }
    }
    cout << "[" << word << "]" << endl;
    return 0;
}
