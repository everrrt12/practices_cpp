//Ejercicio 6
#include <iostream>
using namespace std; 

int main () {
	int a, b, i;
	cout << "Introduce dos números enteros" << endl; 
	cin >> a >> b;
	
	if (a<b) {
		for (i=a; i<=b;++i) {
		cout << i << endl; 
	}}
	else if (a>b) {
		for (i=a; i>=b;--i)
{
			cout << i << endl;
	}}
	return 0;
	}
