#include <iostream>
#define TAM 50
void leerarray(int,int[]);
void burbuja(int,int[]); //metodo de ordenacion
void listado(int,int[]);
int busBinaria(int,int[],int);
using namespace std;
int  main(void) {
	int n,x[TAM],t,pos;
	cout<<"Ingrese el numero de elementos por favor: \n";
	cin>>n;
	leerarray(n,x);
	burbuja(n,x);
	listado(n,x);
	cout<<"Digite el elemento a buscar: \n";
	cin>>t;
	pos=busBinaria(n,x,t);
	if (pos==-1) {
		cout<<"No se encuentra el elemento!!";
	} else {
		cout<<"Lo encontre en la posicion "<<pos;
	}
	return 0;
}
void leerarray(int n,int x[]){
	for (int i=0;i<n;i++) {    // para recorrer todos los elementos
		cout<<"x["<<i<<"]=";
		cin>>x[i];
	}
	
	
}
int busBinaria(int n,int x[],int t){ //para usar la busqueda binaria
	int mitad,izq,der; //los elementos deben estar ordenados
	izq=0; der=n-1;
	while (izq<=der) {
		mitad=(izq+der)/2;
		if (t>x[mitad]) {
			izq=mitad+1;
		} else {
			if (t<x[mitad]) {
				der=mitad-1;
			} else {
				return mitad;
			}
		}
	}
	return -1; //si retorna -1 el elemento no ha sido encontrado
	
}
void burbuja(int n,int x[]){
	int i,j;
	int temp;
	for (int i=1;i<n;i++) {
		for (int j=n-1;j>=i;j--) {
			if (x[j-1]>x[j]) {
				temp=x[j-1];
				x[j-1]=x[j];
				x[j]=temp;
			} 
		}
	}
}
void listado(int n,int x[]){
	for (int i=0;i<n;i++) {
		cout<<x[i]<<"\t";
		cout<<endl;
	}
	
}
