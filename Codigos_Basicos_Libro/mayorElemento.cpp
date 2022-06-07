#include <iostream>
#define LIM 50
using namespace std;
int mayoelerecursivo(int,int[]);
int main() {
	int i,n,x[LIM];
	cout<<"Ingrese el numero de elementos por favor: \n";
	cin>>n;
	for (int i=0;i<n;i++) {
		cout<<"Elemento "<<i+1<<": ";
		cin>>x[i];
	}
	cout<<"El mayor elemento es : "<<mayoelerecursivo(n,x);
}
int mayoelerecursivo(int n,int x[ ]){
	if (n==1) {
		return x[0];
	} 
	if (x[n-1]>mayoelerecursivo(n-1,x)){
		return x[n-1];
	} else {
		return mayoelerecursivo(n-1,x);
	}
}
