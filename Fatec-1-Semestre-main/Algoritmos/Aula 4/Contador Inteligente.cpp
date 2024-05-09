#include <iostream> 
using namespace std; 

int main() { 

	int ini, fim; // Declaração das variáveis ini e fim para armazenar os valores inicial e final da contagem.

	cout << "Informe o valor inicial: "; // Solicita ao usuário que informe o valor inicial da contagem.
	cin >> ini; 

	cout << "\n Informe o valor final: "; // Solicita ao usuário que informe o valor final da contagem.
	cin >> fim; 

	if (ini > fim) { // Verifica se o valor inicial é maior que o valor final, indicando uma contagem decrescente.
		cout << "\n Contagem Decrescente \n"; 
		for (int i = ini; i >= fim; i = i - 1) { // Inicia um loop for para a contagem decrescente, iniciando em 'ini' e indo até 'fim'.
			cout << i << endl; 
		}
	}
	else { // Se o valor inicial não for maior que o valor final, indica uma contagem crescente.
		cout << "\n Contagem Crescente \n"; 
		for (int i = ini; i <= fim; i = i + 1) { // Inicia um loop for para a contagem crescente, iniciando em 'ini' e indo até 'fim'.
			cout << i << endl;
		}
	}

	return 0; // Retorna 0 para indicar que o programa foi executado com sucesso.
}
