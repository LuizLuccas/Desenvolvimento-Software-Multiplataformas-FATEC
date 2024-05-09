#include <iostream> 

using namespace std;
int main() {

	int resp, n, s; // Declaração das variáveis resp para a resposta do usuário, n para o número a ser adivinhado e s para o status do jogo.

	n = 7; // Atribuição do número a ser adivinhado.

	do { // Inicia um loop do-while para permitir múltiplas tentativas.

		cout <<"+===== JOGO DA ADIVINHACAO =====+ \n: ";
		cout <<"Numero: ";
		cin >>resp; // Recebe a resposta do usuário.

		if (resp != 7){ // Verifica se a resposta do usuário é diferente do número a ser adivinhado.
			cout <<"Que pena, voce errou\n"; 
			cout <<"=========================================== \n";
			s = 2; // Define o status do jogo como "2" (indicando que o usuário errou).
		}
		else { // Se a resposta do usuário for igual ao número a ser adivinhado.
			cout <<"Voce acertou \n"; 
			cout <<"=========================================== \n"; 
			s = 1; // Define o status do jogo como "1" (indicando que o usuário acertou).
		}
	} while (s == 2); // Continua o loop enquanto o status do jogo for "2" (indicando que o usuário errou).

	return 0;
}
