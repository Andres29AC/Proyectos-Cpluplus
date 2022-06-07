# include <iostream>
# include <conio.h>

//programa que calcula el numero de pulsaciones de una persona

using namespace std;
int main(void){
	int edad, nump;
  cout<<"Ingrese la edad de la persona: "<<endl;
  cin>>edad;
  nump=(220-edad)/10;
  cout<<"El numero de pulsaciones es: "<<nump<<endl;
  getch ();
  system("color 75");
  return 0;
}

