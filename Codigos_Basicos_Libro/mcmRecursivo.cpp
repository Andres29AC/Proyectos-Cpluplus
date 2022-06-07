#include<iostream>
using namespace std;
int mcmrecursivo(int,int);
int main(int argc, char *argv[]){
	int n1,n2;
	cout<<"Ingrese el primer numero por favor: \n";
	cin>>n1;
	cout<<"Ingrese el segundo numero por favor: \n";
	cin>>n2;
	cout<<"El Minimo Comun Multiplo es :"<<n1*n2/mcmrecursivo(n1,n2);
	return 0;
}

int mcmrecursivo(int a,int b){  
	if(a>=b && a%b==0){
	return b;
}
else{
	return mcmrecursivo(b,a%b);
}
}
