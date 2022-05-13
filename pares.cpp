#include <iostream>
// cstlib - pair - algorithms - bits/stdc++.h
using namespace std;

int main(){
	pair<int, string> par; //declaracion del par
	// revisar struct

	// se puede usar . o ->
//	par = make_pair(1,"Vladimir");
	par.first = 1;
	par.second = "Vladimir";
	cout<< "llave : " << par.first << endl << "valor : " << par.second << endl;

	return 0;
}
