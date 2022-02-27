#include<bits/stdc++.h>

//Es basicamente un archivo de encabezado
//que incluye todas las bibliotecas estándar.
//En los concursos de programación, usar este archivo es
//una buena idea, cuando se quiere reducir el tiempo perdido
//en hacer tareas; especialmente cuando su rango es sensible al tiempo.
//Pero no es buena idea usarla consume tiempo de compilacion
using namespace std;

int main(){
		vector<int>v;
		int arr(50);

		v.push_back(22);
		v.push_back(43);
		v.push_back(67);
		cout<<"|----Clase de Vectores----| \n";

		cout<<"Tamano del vector: "<<v.size()<<endl;

		for(int i=0;i<v.size();i++){
				cout<<v[i]<<" ";
		}
		cout<<endl;

		for(auto it=v.begin();it!=v.end();it++){
				cout<<*it<<" ";
		}
		cout<<endl;

		cout<<v.back()<<endl;
		//back metodo de vector devuelve el ultimo elemento
		cout<<"|-----Clase de Sets-----| \n";

		set<int>st;

		st.insert(23);
		st.insert(34);
		st.insert(49);
		st.insert(57);

		for(auto ac=st.begin();ac!=st.end();ac++){
				cout<<*ac<<" ";
		}
		cout<<endl;

		//Utiliza el método erase() para eliminar un elemento de un vector en C++

		cout<<"|---Clase de Mapas----| \n";

		map<int,int>mp;
		//Clave -->Valor
		
		mp[2] = 15;

		mp[3] = 23;

		mp[6] = 56;

		mp[8] = 79;

		cout<<mp[6]<<endl;

		mp[6] = 65;

		cout<<mp[6]<<endl;

		for(auto ca=mp.begin();ca!=mp.end();ca++){
				cout<<ca->first<<" "<<ca->second<<endl; 
		}
		cout<<endl;

		cout<<"|-----Mas de Arrays-----| \n";

		int n[10];

		for(auto k= 0; k <10;k++){
				n[k] = k + 100;
		}
		cout<< "Elementos:" << setw(13) << "Valor:" <<endl;
		for(auto p = 0;p <10;p++){
				cout<< setw(7) << p << setw(13) << n[p] <<endl;
		}
		//setw: La función Setw establece el ancho del campo o 
		//el número de caracteres que se mostrarán antes de un campo en particular.
		return 0;

}

//Podemos añadir un elemento nuevo a un vector con su subinstrucción push_back()
//En CPP o C++ existe la palabra clave “auto” al declarar variables, su uso permite 
//al programador ahorrar la declaración del tipo en una variable.
//Dicho de otra manera, “auto” permite la inicialización de variables sin especificar el tipo

//Funciones de Arrays:Begin y end 
//La función begin() se usa para devolver un iterador que apunta al primer elemento del 
//contenedor de la matriz. La función begin() devuelve un iterador bidireccional al primer 
//elemento del contenedor.

//end() devuelve un iterador que apunta al elemento más allá del final en el contenedor de la matriz.

