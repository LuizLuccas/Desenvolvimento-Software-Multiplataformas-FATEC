#include <iostream>
using namespace std;

/* Escreva um programa com uma função chamado
soma. Este programa deve somar todos os valores entre
0 e n, onde n é o parâmetro passado para a função.
Exemplo, n= 5, o retorno da função será 15 ( 5+4+3+2+1)

Utilize laço de repetição.
*/

int soma (int n){
	int aux;
	for (int c; c<=n; c++){
		aux = aux + c;	
	}
	
	return aux;
}

int main() {
	int n;
	
	cout <<"Numero: ";
	cin >>n;
	n = soma(n);
	
	cout <<"Soma: "<<n;
	return 0;
}
