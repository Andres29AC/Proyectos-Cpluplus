#include <iostream>
using namespace std;
int mcdrecursivo(int,int);
int main(int argc, char *argv[]) {
	int a,b,n;
	cout<<"Ingrese el primer numero: \n";
	cin>>a;
	cout<<"Ingrese el segundo numero: \n";
	cin>>b;
	if (a>b) {
		n=mcdrecursivo(a,b);
	} else {
		n=mcdrecursivo(b,a);
	}
	cout<<"El mcd es: "<<n;
	return 0;
}
int mcdrecursivo(int a,int b){
	if (a%b==0) {
		return b;
	} else {
		return mcdrecursivo(b,a%b);
	}
}
