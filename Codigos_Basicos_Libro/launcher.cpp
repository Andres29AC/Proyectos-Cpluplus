#include <iostream>
#include <stdlib.h>

using namespace std;

void launcher();

int main(){
	launcher();
	return 0;
}

void launcher(){
	system("cls");
	int opciones;
	cout << endl;
	cout << "                       BIENVENIDO AL LAUNCHER DEL USUARIO" << endl;
	cout << "________________________________________________________________________________" << endl;
	cout << endl;
	cout << "1 Abrir aplicacion" << endl;
	cout << "2 Abrir el leeme" << endl;
	cout << "3 Abrir la documentacion" << endl;
	cout << "4 Abrir el instalador" << endl;
	cout << "5 Cerrar aplicacion" << endl;
	cout << "6 Cerrar el leeme" << endl;
	cout << "0 Salir" << endl;
	cin >> opciones;
	switch(opciones){
	case 1:
		system(" start C:\\CarpetaLauncher\\aplicacion.exe");
		launcher();
		break;
	case 2:
		system(" start C:\\CarpetaLauncher\\leeme.txt");
		launcher();
		break;
	case 3:
		system("start C:\\CarpetaLauncher\\Documentacion.pdf");
		launcher();
		break;
	case 4:
		system("start C:\\CarpetaLauncher\\instalador.exe");
		launcher();
		break;
	case 5:
		system("taskkill /IM aplicacion.exe");
		launcher();
		break;
	case 6:
		system("taskkill /IM notepad.exe");
		launcher();
		break;
	case 0:
		exit(0);
		break;
	default:
		cout << endl;
		cout << "Por favor ingrese una opcion valida" << endl;
		break;
	}
	system("pause>null");
	
}
