#include <iostream>
using namespace std;
int main(void){
		int dia,mes;
				cout<<"---------------------------: "<<endl;
				cout<<"ADIVINA TU SIGNO: "<<endl;
				cout<<"---------------------------: "<<endl;
				cout<<"Ingrese el dia y mes de nacimiento"<<endl;
				cin>>dia>>mes;
				switch(mes){
						case 1:if(dia<21)cout<<"capricornio";
											 else cout<<"acuario";break;
						case 2:if(dia<20)cout<<"acuario";
											 else cout<<"piscis";break;
						case 3:if(dia<21)cout<<"piscis";
											 else cout<<"aries";break;
						case 4:if(dia<21)cout<<"aries";
											 else cout<<"tauro";break;
						case 5:if(dia<21)cout<<"tauro";
											 else cout<<"geminis";break;
						case 6:if(dia<22)cout<<"geminis";
											 else cout<<"cancer";break;
						case 7:if(dia<23)cout<<"cancer";
											 else cout<<"leo";break;
						case 8:if(dia<23)cout<<"leo";
											 else cout<<"virgo";break;
						case 9:if(dia<23)cout<<"virgo";
											 else cout<<"libra";break;
						case 10:if(dia<23)cout<<"libra";
												else cout<<"escorpio";break;
						case 11:if(dia<22)cout<<"escorpio";
												else cout<<"sagitario";break;
						case 12:if(dia<22)cout<<"sagitario";
												else cout<<"capricornio";break;
						default:cout<<"mes incorrecto";
				}
		
				
				
				return 0;
}
