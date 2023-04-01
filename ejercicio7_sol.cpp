//Ejercicio 7 
//Contador de caracteres 
#include <iostream>
#include <string>

using namespace std;

int main() {
    string query;
    cout << "Escribe palabras para contar sus caracteres, solo separadas por un espacio" << endl;
    getline(cin, query); // Con cin recibimos y con getline leemos la l�nea de entrada

    int inicio, fin, tamano = query.size();

    while (fin < tamano) {
        // Buscar el siguiente espacio en blanco
        while (fin < tamano && query[fin] != ' ') {
            fin++;
        }

        // Mostrar el �ndice de la primer palabra
        cout << fin << endl;

        // Mover el �ndice de inicio a la siguiente palabra, luego del espacio
        //El programa tambi�n cuenta el espacio al contar las siguientes palabras
        inicio = fin + 1;
        fin = inicio;
    }

    return 0;
}
