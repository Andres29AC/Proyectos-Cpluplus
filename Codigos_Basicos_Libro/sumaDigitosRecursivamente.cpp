#include <iostream>
using namespace std;
int sumarecurdigitos(int);
int main() {
	int numero;
	cout<<"Ingrese un numero por favor: \n";
	cin>>numero;
	cout<<"La suma de los digitos del numero es: "<<sumarecurdigitos(numero);
	return 0;
}
int sumarecurdigitos(int n){
	if (n==0) {
		return n;
	} else {
		return n%10+sumarecurdigitos(n/10);
	}
	
}
