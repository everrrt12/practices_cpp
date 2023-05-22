#include <iostream>
#include <string>

using namespace std;

void mostrar();
int sumar_parte_entera(double a, double b); 
double cociente_dos_numeros (double num1, double num2); 
void surname_name(); 
void inv_with_getline();  
void obtener_caracter(); 
int mult_size(int x, int y); 
void docs_finded(); 
void find_Fibonacci();  

int main() {
    mostrar();
    return 0;
}

int sumar_parte_entera(double a, double b) {
    //Lo ponemos como un double para que el programa sea capaz de leer numeros decimales
    cout << "Ingrese un digito decimal" << endl; //pedimos al usuario ingresar un numero decimal
    //cin = console input, se reciben entradas del teclado
    cin >> a; 
    cout << "Ingrese otro para realizar la suma"<<endl; //pedimos al usuario ingresar otro numero para poder realizar la suma
    cin >> b; 
    int result = a + b; //guardamos la suma en la variable 'result' del tipo int, para que nos muestre la parte entera de los dígitos decimales sumados
    cout << "La suma entera de estos dos numeros es " << result << endl << endl;
    return result;
}

double cociente_dos_numeros (double num1, double num2) {
    //double almacena numeros decimales
    double cociente;
    cout << "Ingrese un numero decimal, este sera el dividendo" << endl;
    cin >> num1; //como num1 esta con la variable double, puede leer numeros decimales
    cout << "Escriba otro numero, este sera el divisor" << endl;
    cin >> num2; //como num2 est� con la variable double, puede leer numeros decimales
    cociente = num1 / num2; //cociente es igual a la division '/' entre el primer numero introducido y el segundo
    cout << "El cociente de " << num1 << " entre " << num2 << " es "<< cociente << endl << endl; //mostramos el cociente entre ambos numeros 
    return cociente;
}

void surname_name () {
  cout << "Ingresar nombre y apellido separado por espacios" << endl; //pedimos al usuario ingresar los datos
  string nombre, apellido; //string = cadenas de caracteres
	cin >> nombre >> apellido; 
	cout << apellido << ", " << nombre << endl << endl; //mostrar el apellido primero que el nombre y separados por una coma
}

void inv_with_getline () {
    string libro1, libro2, libro3; //Declaramos las variables
    cout<< "Menciona 3 libros que conozcas" << endl;
    cin.ignore();
    //Almacenamos con "getline" 
    getline(cin, libro1);
    getline(cin, libro2);
    getline(cin, libro3);
    //Invertimos los datos
    cout << libro3 << endl;
    cout << libro2 << endl;
    cout << libro1 << endl << endl;
}

void obtener_caracter () {
    string word1 ,word2, word3, word4, word5; 
    char a, b, c, d, e;
    cout << "Escribe 5 palabras separadas por un espacio" << endl; //Pedimos al usuario escribir 5 palabras
    cin >> word1 >> word2 >> word3>> word4 >> word5 ; 

    //Guardamos el primer caracter de cada palabra leida
    a = word1[0];
    b = word2[0];
    c = word3[0];
    d = word4[0];
    e = word5[0];
    //Lo mostramos en pantalla
    cout<< a <<" "<< b <<" "<< c <<" "<< d <<" "<< e << endl << endl;
}

int mult_size (int x, int y) {
    int add = 0, result = 0, size = 0;
    cout << "Ingresa dos numeros: "; //pedimos al usuario ingresar dos numeros
    cin >> x >> y;
    add = x + y; //guardamos la suma 
    cout << "El resultado de la suma es " << add << endl; //mostramos el resultado de la suma
    size = to_string(add).length(); //con la funcion lenght 'contamos' los caracteres que contiene la palabra/numero hasta el primer espacio
    result = add * size; //guardamos el producto entre la suma por la cantidad de digitos del resultado de la suma
    cout << "El producto de " << add << " por " << size << " es " << result << endl << endl; //mostramos en pantalla
    return result;
}

void docs_finded () {
    int x;
    cout << "Enter a number " << endl; //Pedimos al usuario ingresar un numero
    cin >> x;
    if (x == 0){ 
       cout << "No se encontraron documentos." << endl << endl; //Si el numero ingresado es cero, nos indicara que no se encontraron documentos
    }
    else if (x <= 0) {
        cout << "No es posible que existan numeros de documentos negativos" << endl << endl; //si algun chistoso pone un numero negativo, nos indicara que no existen documentos negativos
    }
    else {
        string y = to_string(x);
        string z = y + " documentos encontrados"s; 
        cout << z << endl << endl; //si no se cumplen las condiciones de arriba, entonces el codigo mostrara el numero de documentos ingresados
    }
}

void find_Fibonacci (){
    int n;
    cout << "Estamos buscando a Fibo. Ingresa el numero del collar que tienes en tu mano" << endl;
    cin >> n; //pedimos al usuario ingresar un numero
    if (n==1123581321) {
        cout << "Se encontro a Fibonacci" << endl; //si el numero contiene la secuencia de Fibonacci, se muestra el mensaje
    }
    else {
        cout << "Este collar no es de Fibonacci" << endl; //sino se cumple la funcion, devuelve que el collar no pertenece a Fibo
    }   
}

void mostrar() {
    double a, b;
    sumar_parte_entera(a, b);
    cout << endl;

    double num1, num2;
    cociente_dos_numeros(num1, num2);
    cout << endl;
    
    surname_name();
    
    cin.ignore();
    inv_with_getline();
    
    obtener_caracter();
    
    int x, y;
    mult_size(x, y);
    cout << endl;
    
    docs_finded();
    
    find_Fibonacci();
}