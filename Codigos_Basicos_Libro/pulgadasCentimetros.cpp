#include <iostream>
using namespace std;
float Conversion (float);
int main (){
	float a,k; // k Valor convertido
	cout<<"----------------------------------------------"<<endl;
	cout<<"BIEMBENIDO A TU PROGRAMA DE CONVERSIONES :) : "<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"Ingrese por favor el valor en pulgadas a convertir (in): ";
	cin>>a;	
	k=Conversion(a);
	cout<<"El valor convertido en centimetros es (cm): "<<k;
	return 0;
}
float Conversion (float a){
	float k;
	k=a*2.54;
	return k;
}
