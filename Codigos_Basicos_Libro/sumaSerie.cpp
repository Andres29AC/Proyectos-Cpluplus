#include <iostream>
using namespace std;
int main (){
	int i,n;
	float x,t=1,s=1;
	cout<<"ingrese numero de terminos"<<endl;
	cin>>n;
	cout<<"ingrese el valor de x"<<endl;
	cin>>x;
	for (int i=1;i<=n;i++) {
		t=t*x/i;
		s=s+t;	
	}
	cout<<"la suma es: "<<s<<endl;
	

	system("color 43");
	return 0;
}

