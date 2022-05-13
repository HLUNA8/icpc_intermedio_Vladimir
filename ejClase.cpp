#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<pair<int, string>>posiciones;

	posiciones.push_back(make_pair(456,"Ignacio Llanos"));
	posiciones.push_back(make_pair(123, "Vladimir Luna"));
	posiciones.push_back(make_pair(1234, "Jorge Funes"));

	sort(reverse(posiciones.begin()),reverse( posiciones.end()));

	for (auto p:posiciones){
	cout<< p.first << " " << p.second <<endl;
}
	return 0;
}
