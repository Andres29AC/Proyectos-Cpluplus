#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main(){
	system("cls");
	char concat1[100] = "\"start ";
	char concat2[100];
	cout << "Ingrese la url, ejemplo www.google.com" << endl;
	cin >> concat2;
	strcat(concat1,concat2);
	strcat(concat1,"\"");
	system(concat1);
	return 0;
}
