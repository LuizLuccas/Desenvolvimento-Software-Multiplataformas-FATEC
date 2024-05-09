#include <iostream>  
using namespace std;

int main() { 

	int n, r; // Declaração das variáveis 'n' para armazenar o número da tabuada e 'r' para armazenar o resultado.

	cout <<"Informe o N° da tabuada: "; // Solicita ao usuário que informe o número para gerar a tabuada.
	cin >> n; 
	cout << endl;

	for (int c=1; c<= 10; c = c + 1 ){ // Loop for para gerar a tabuada de 1 a 10.

		r = n * c; // Calcula o resultado da multiplicação entre 'n' e 'c' e armazena em 'r'.
		cout << n << "X" << c << "=" << r << endl; 
	}

	return 0;
}
