//Ejercicio 5 
#include <iostream>
using namespace std; 

int main () {
	int a, b;
	cout << "Introduce dos n�meros enteros positivos" << endl; 
	cin >> a >> b;
	int i=a;
	if (a>0 && b>0) {
		for (i=a; i<=b;++i) {
		cout << i << endl; 
	}}
	else {
	    cout << "Te dije que solo n�meros positivos >:(" << endl;
	}
}
