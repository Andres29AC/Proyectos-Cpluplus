#include <iostream>
using namespace std;
int NumCombinatorio(int, int);
int main(void)
{
	int n, r, nc;
	cout << "Ingrese n: "; cin >> n;
	cout << "Ingrese r : "; cin >> r;
	nc = NumCombinatorio(n, r);
	cout << "El numero combinatorio es: "<< nc;
	return 0;
} // fin main( )
int NumCombinatorio(int n, int r)
{
	int i, c=1;
	for (i=1; i<=r; i++) c = c*(n-i+1)/i;
	return c;
} // fin NumCombinatorio( )
