//Ejercicio 9
#include <iostream>
using namespace std;

int main() {
    int idas, h=1, val;
    for (;;) {
        cin >> val;
        
        if (val == 1) {
            cout << "Om-nom-nom :P" << endl;
            idas++;
        } 
        else if (val == 0) {
            cout << "No cake :(" << endl;
            break;
        } 
        else {
            cout << "En este programa solo se leen valores de 0 y 1" << endl;
        }
        if (idas >= 10) {
            cout << "There's no more cake :(" << endl;
            break;
        }
    }
    return 0;
}
