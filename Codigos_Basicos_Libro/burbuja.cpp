#include <iostream>
using namespace std;
void LeerArray(int, float [ ]);
void Burbuja(int, float [ ]);
void MuestraArray(int, float [ ]);
int main(void)
{
	float x[50];
	int n;
	cout << "Número de datos a leer: "; cin>>n;
	LeerArray(n, x); // hace ingreso datos en array
	Burbuja(n, x); // ordena por burbuja
	cout << endl<< "Elementos ordenados: " << endl;
	MuestraArray(n, x); // muestra array ordenado
	return 0;
} // fin main( )
void LeerArray(int n, float array[ ])
{ int i;
for (i=0; i<n; i++)
{ cout << "Ingrese elemento "<< i << ": ";
cin >> array[i];
}
} // fin LeerArray( )
void Burbuja(int n, float x[])
{ int i, j;
float temp;
for ( i=1; i<n; i++)
	for ( j=n-1; j>=i; j--)
		if ( x[j-1] > x[j] ) { temp = x[j-1];
			x[j-1] = x[j];
		x[j] = temp;
}
} // fin Burbuja( )
void MuestraArray(int n, float array[ ])
{ int i;
for(i=0; i<n; i++)
	cout << "Elemento "<< i << " = " << array[i] << endl;
} // fin MuestraArray( )
