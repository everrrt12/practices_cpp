#include <iostream>
#include <string>
using namespace std;

//Prototipo de funciones
void find_Fluffy();
void prueba_suma();
void guess_the_number();
void caracter_counter();
void dont_food();
void pow_without_pow();

int main() {
  //Llamamos la funcion
    find_Fluffy(); //ejercicio 1
    prueba_suma(); //ejercicio 2
    guess_the_number(); //ejercicio 4
    caracter_counter(); //ejercicio 7
    dont_food(); //ejercicio 9
    pow_without_pow(); //ejercicio 11
    return 0;
}

//definir funciones 
void find_Fluffy() {
    string h1, h2, h3, h4;
    cout << "Escribe el color de las casas separadas por un espacio: ";
    //solicitamos al usuario ingresar colores de casas
    cin >> h1 >> h2 >> h3 >> h4;
    if (h4 == h1) {
        cout << "Ingresa en la casa 1" << endl << endl; //si el color de la casa 4 es el mismo que la primera, se muestra:
    } else if (h4 == h2) {
        cout << "Ingresa en la casa 2" << endl << endl; //si el color de la casa 4 es el mismo que la segunda, se muestra:
    } else if (h4 == h3) {
        cout << "Ingresa en la casa 3" << endl << endl; //si el color de la casa 4 es el mismo que la tercera, se muestra:
    } else {
        cout << "Sigue buscando en otra casa" << endl << endl; //si no se cumple ninguna, se muestra
    }
}

void prueba_suma() {
    int x, y, z;
    cout << "Probemos tu capacidad de sumar. Escribe dos dígitos separados por un espacio y el tercer dígito será el resultado: ";
    cin >> x >> y >> z; //el usuario ingresa dos numeros y el tercero debe ser el resultado de la suma
    if (-1000000 <= (x + y) && (x + y) <= 1000000) {
        if (x + y != z) { //definimos un rango de entre -un millon y +un millon, para evitar problemas de calculo
            cout << "ERROR. La suma de " << x << " y " << y << " es " << x + y << endl << endl; //si la suma es incorrecta, el programa muestra error y muestra el resultado
        } else {
            cout << "Buen trabajo" << endl << endl; //damos un mensaje de aliento en caso de estar bien la suma
        }
    } else {
        cout << "ERROR. Prueba a usar números en un rango entre -1 millón y 1 millón" << endl; 
        //si se pone valores menores a -un millon y +un millon, nos muestra un error
    }
}

void guess_the_number() {
    int a = 7; //definimos el numero a adivinar
    int b;
    do { //mientras a sea diferente de b, mencionado despues en 'while', se ejecuta el siguiente bloque de codigo
        cout << "Adivina el número (el número está entre 0 y 9): ";
        cin >> b; //es decir, hasta que se acierte el número, te lo seguirá pidiendo con el cin
    } while (a != b);
    //si adivina el número, mostramos el mensaje:
    cout << "¡Correcto!" << endl; 
}

void caracter_counter() {
    string query;
    cout << "Escribe palabras para contar sus caracteres, separadas por un espacio: ";
    cin.ignore(); //para evitar errores en la ejecucion
    getline(cin, query); // Con cin recibimos y con getline leemos la línea de entrada
    int count = 0;
    for (char c : query) { //se utiliza para recorrer cada caracter de la variable "query" y realizar operaciones específicas en cada uno de ellos
        if (c != ' ') { 
            count++; //el contador detecta que no hay espacios, por lo tanto sigue contando. Si hay espacios, no cuenta nada
        }
    }
    cout << "El número de caracteres sin contar los espacios es: " << count << endl; //mostramos el numero de caracteres sin tomar en cuenta los espacios
}

void dont_food() {
    int idas = 0, val;
    cout << "Quieres torta (0=no, 1=si)?: "; 
    for (;;) { //esto se conoce como bucle infinito, se rompe con la variable 'break'
        cin >> val;
        if (val == 1) {
            cout << "Om-nom-nom :P" << endl; //si ponemos 1, las idas aumentaran
            idas++;
        } else if (val == 0) {
            cout << "No cake :(" << endl; //si no se quiere torta, se muestra el mensaje y se detiene el bucle
            break;
        } else {
          //colocar un numero diferente de 0 y 1 nos devolvera:
            cout << "En este programa solo se leen valores de 0 y 1" << endl;
        }
        if (idas >= 10) {
            //si las idas llegan a 10, ya se habrá acabado la torta, mostramos:
            cout << "There's no more cake :(" << endl;
            break;
        }
    }
}

void pow_without_pow() {
    int base, xp;
    cout << "Ingrese dos números separados por un espacio. El primero será la base y el segundo el exponente: ";
    cin >> base >> xp; //pedimos al usuario ingresar dos numeros, el primero es la base y el segundo el exponente
    long long resultado = 1;
    for (int i = 0; i < xp; i++) { //mientras i sea menor al exponente, se seguira aumentando
        resultado *= base; //se multiplica 'resultado'(inicialmente 1) por la base, hasta que i sea menor que el 'xp' (exponente), por lo tanto es una potenciacion
    }
    cout << "El resultado de " << base << " elevado a " << xp << " es: " << resultado << endl; //mostramos el resultado
}
