#include <iostream>
#include <vector> // nos permite usar vectores
#include <algorithm> // para operaciones 


using namespace std;

int main(){
/*

	vector<int>enteros; // inicializacion de vectores
	//vector<int>enteros2(4); //== int enteros2[4]
//insercion 
	enteros.push_back(1); // == list.append(4)
//	enteros.push_front(2); // == agrega un valor al principio del vector 

for (int i = 0; i <100; i++){
	enteros.push_back(i);
}

vector<int>::iterator it;
for (it = enteros.begin(); it != enteros.end(); it++){
	//[1,2,3,4,5] 
	cout << *it << endl;

}
/*
for (int i=0; i<2;i++){
	cout<<enteros[i] << " ";
}

// int puede ser remplazada por auto, solo funciona en c++ 11 y c++17
for (int entero:enteros){
	cout<< entero << endl;
}

*/
// parte dos

vector<int> numeros;

numeros.push_back(5);
numeros.push_back(3);
numeros.push_back(13);
numeros.push_back(7);

sort(numeros.begin(), numeros.end());
sort(numeros.rbegin(), numeros.rend());
reverse(numeros.begin(), numeros.end());
for (int numeros:numeros){

	cout<< numeros << endl;
}
	return 0;
}
