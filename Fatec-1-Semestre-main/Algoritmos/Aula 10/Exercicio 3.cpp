#include <iostream>
using namespace std;
 
int main() {
    int n[8], n2, c=1;
    bool aux=true;
	
	for (int i=1; i <= 8; i++){
		cout << "Numero " <<i<< ": ";
		cin >> n[i];
	}
	
	cout << "Digite um numero: ";
	cin >> n2;
	
	while (aux == true){
		if (n2 == n[c]){
			aux = false;
		}
		else {
			c = c + 1;
		}
	}
	if (aux == false){
		cout << "O numero " <<n2<< " foi encontrado na posicao: " <<c;
	}
	else {
		cout << "O numero nao foi localizado";
	}
    return 0;
}