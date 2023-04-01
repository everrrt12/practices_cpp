// Ejercicio 3 
#include <iostream>
using namespace std;
int main() {
  int x, y;
  cin >> x >> y; 
  if (x==y) { 
    cout << "La naranja se divide en dos partes iguales." << endl;
  }
  else if (x>=y) {
      cout << "Cortar " << x-y << " de la primera parte" << endl; 
  }
  else if (x<=y) {
      cout << "Cortar " << y-x << " de la segunda parte" << endl;
  }
 return 0;
}
