#include <iostream>
using namespace std;

/* Escreva um programa com uma fun��o chamado
soma. Este programa deve somar todos os valores entre
0 e n, onde n � o par�metro passado para a fun��o.
Exemplo, n= 5, o retorno da fun��o ser� 15 ( 5+4+3+2+1)

Utilize la�o de repeti��o.
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
