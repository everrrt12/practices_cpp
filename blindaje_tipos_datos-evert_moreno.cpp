#include <iostream>

using namespace std;

//Blindaje y tipos de datos
void Hamlet_quot(); //ejercicio 2
void robot_task(); //ejercicio 3
void Manchester_Liverpool(); //ejercicio 5
void wood_balance(); //ejercicio 8

int main () {
    Hamlet_quot();
    robot_task();
    Manchester_Liverpool();
    wood_balance();
}

void Hamlet_quot() {
  /*En este codigo, con cout basicamente mostramos todo lo que está entre comillas
  endl quiere decir salto de linea, como un "enter"
  usamos la barra invertida '\' para blindar algunos datos que normalmente significan otra cosa en c++
  por ejemplo, las comillas
  */
    cout << "The quote from \"Hamlet\":" << endl;
    cout << "To be, or not to be, that is the question:" << endl;
    cout << "Whether 'tis nobler in the mind to suffer" << endl;
    cout << "The slings and arrows of outrageous fortune," << endl;
    cout << "Or to take arms against a sea of troubles" << endl;
    cout << "And by opposing end them." << endl << endl;
}

void robot_task() {
    string robot = "IS250"; //nombre del robot
    string task = "cargar"; //tarea del robot
    cout << "Se solicita al robot " << robot << " " << "para " << task << "." << endl << endl;
    //Mostramos el nombre del robot, guardada en la variable 'robot' de tipo string, seguido de su tarea ('task') de igual forma en una variable string
    //string = cadena de caracteres o palabras
}

void Manchester_Liverpool() {
    string x = "Manchester", y = "Liverpool", z = " ";
    cout << "Antes del programa:" << endl << "La variable x es " << x << "." << endl << "La variable y es " << y << "." << endl;
    z = x; //haciendo uso de una variable de ayuda, en este caso 'z', lo escribimos de tal forma que 'y' sea 'x' y viceversa
    x = y;
    cout << "Después del programa:" << endl << "La variable x es " << x << "." << endl;
    y = z; //como 'z' ahora vale lo que valia anteriormente 'x', lo pasamos a 'y'
    cout << "La variable y es " << y << "." << endl << endl;
    //mostramos el resultado
}

void wood_balance() {
    int wood_balance=1500; //inicialmente tenemos 1500 unidades de madera
    int w1 = 4, d1 = 3, h1 = 5, w2 = 8, d2 = 6 ,h2 = 10, w3 = 12, d3 = 9, h3 = 15; //w es weight(peso), h es height (altura) y d es depth (profundidad)
    //En este problema, calculamos el area de un prisma rectangular con las medidas anteriores
    int area1 = w1*d1+2*(w1*h1+d1*h1), area2 = w2*d2+2*(w2*h2+d2*h2), area3 = w3*d3+2*(w3*h3+d3*h3); //la formula del area
    //realizamos la resta de las unidades de madera menos las unidades de área y lo mostramos en la terminal
    cout << "Madera contrachapada restante: " << wood_balance - area1 << endl; 
    cout << "Madera contrachapada restante: " << wood_balance - area2 << endl;
    cout << "Madera contrachapada restante: " << wood_balance - area3 << endl;
}