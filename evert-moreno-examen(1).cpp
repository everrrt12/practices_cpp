#include <iostream>
#include <cstdlib> // para rand() y srand()
#include <ctime> // para time()
using namespace std;
int main() {
    int a, b, c, k, x, y, z;
	char d;
	d = 'Y';
	while(d=='Y' || d=='y') {
    cout << "DECISIONES" << endl << "Eres John, un ladrón que se ha especializado en los sueños lúcidos: controlar sus sueños y tener la capacidad de entrar en los sueños de otras personas. Esto te ha traído graves consecuencias, ya que debido a la cantidad de enemigos que te ganaste, tu familia ha sido asesinada." << endl << "Sigues tu vida, deseando cambiar las cosas pero tienes problemas legales, por lo cual no es fácil para ti. Para tu suerte, una empresa tiene una misión para ti: entrar a los sueños de un objetivo, pero no para robar información, sino para insertar una idea. Además, te ofrecen limpiar tu historial, lo que te permitirá comenzar una nueva vida." << endl << "Se te presentan tres opciones." << endl << "1. Decides completar la misión pero quedarte con tu familia en el mundo de los sueños. " << endl << "2. Decides completar la misión y volver al mundo real." << endl << "3. No hacer la misión. " << endl << "Elige la opción que creas más conveniente: ";
    
    do { 
        cin >> a;
        switch (a) {
            case 1:
                cout << "Te das cuenta que la vida en sueños con tu familia es solo lo que quieres ver, no como hubiera sido en realidad. Tienes dos opciones: Quedarte (1) o regresar al mundo real (2): ";

                do { 
                cin >> x; 
                switch (x) {
                    case 1: 
                        cout << "Estás consciente de que tu familia no es real, pero no importa, decides seguir en una mentira, pero te atormenta el saber que todo es mentira y no la volverás a ver." << endl << "FIN." << endl; 
                        break;
                    case 2: 
                        cout << "Decides volver al mundo real y rehacer tu vida, dejar el espionaje y crear una nueva familia" << endl << "FIN." << endl;
                        break;
               
                    default:
                        cout << "No es una opción válida. Vuelve a ingresar una opción válida: ";
                        break;
                }}  while (x!=1 && x!=2);
                break;
                
            case 2:
                srand(time(NULL));
                y = rand() % 2 + 1;
                switch (y) {
                    case 1: 
                        cout << "Completas la misión, eres libre de problemas legales y te reúnes con tu familia cada vez que puedes en el mundo de los sueños. \n FIN." << endl;
                        break;
                    case 2:
                        cout << "La misión no tiene los resultados esperados" << endl << "No vuelves a dormir bien nunca más, tienes muchos enemigos poderosos que te persiguen, no vuelves a ver a tu familia ni en sueños. De nuevo, se te presentan dos opciones: Entregarte a la ley por delitos de espionaje internacional y someterese a la justicia (1) y Dejar de luchar con tus perseguidores y ser asesinado (2): ";
                        
                        do {
                        cin >> b;
                        switch (b) {
                            case 1:
                                cout << "Vas a la cárcel pero logras salir y puedes tener una nueva vida. FIN" << endl;
                                break;
                            case 2:
                                z = rand() % 2+1;
                                if (z==1) {
                                    cout << "No hay vida después de la vida. \nFIN. " << endl;
                                }
                                else if (z==2) {
                                    cout << "Te reúnes con tu familia en el más allá. \n GOOD ENDING." << endl;
                                }
                                break;
                            default: 
                                cout << "Ingrese una opción válida: ";
                                break;
                        }} while (b!=1 && b!=2);
                    break;
                }
                break;
            case 3:
                cout << "No vuelves a dormir bien nunca más, tienes muchos enemigos poderosos que te persiguen, no vuelves a ver a tu familia ni en sueños. De nuevo, se te presentan dos opciones: Entregarte a la ley por delitos de espionaje internacional y someterese a la justicia (1) y Dejar de luchar con tus perseguidores y ser asesinado (2): ";
                do {
                        cin >> c;
                        switch (c) {
                            case 1:
                                cout << "Vas a la cárcel pero logras salir y puedes tener una nueva vida. FIN" << endl;
                                break;
                            case 2:
                                k = rand() % 2+1;
                                if (k==1) {
                                    cout << "No hay vida después de la vida. \nFIN. " << endl;
                                }
                                else if (k==2) {
                                    cout << "Te reúnes con tu familia en el más allá. \n GOOD ENDING." << endl;
                                }
                                break;
                            default: 
                                cout << "Ingrese una opción válida: ";
                                break;
                        }} while (c!=1 && c!=2);
                break;
            default:
                cout << "No es una opción válida. Vuelve a ingresar una opción válida: ";
    }} while (a!=1 && a!=2 && a!=3);
	cout << "¿Desea volver a jugar? (Y/N)" << endl;
	cin >> d;
	   }
    return 0;
}