#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main() {
	int c, resp, n, r, escolha;
	
	srand (time(NULL));
	
	cout << "SELECIONE A DIFICULDADE \n";
	cout <<"[1] Facil \n";
	cout <<"[2] Medio \n";
	cout <<"[3] Dificil \n";
	cin >> escolha;
	switch (escolha){
		case 1:
			n = rand() % 10 + 1;
			c = 8;
			break;
		case 2:
			n = rand() % 15 + 1;
			c = 7;
			break;
		case 3:
			n = rand() % 20 + 1;
			c = 6;
	}
	r = n - 1;	
	for (c > 0; c = c - 1;){
		cout <<"\n+================================+ \n: ";
		cout <<"+===== JOGO DA ADIVINHACAO =====+ \n: ";
		cout <<"+===== Numero secreto: !-! =====+ \n: ";
		cout <<"+===== Palpites restantes: " << c << " =====+ \n: ";
		cout <<"+===============================+ \n: ";
		cout <<"Numero: ";
		cin >>resp;
		if (resp != n){
			cout <<"Que pena, voce errou\n";
			if(resp > n){
				cout << "Mais baixo"; 
			}
			else if (resp < n){
				cout << "Mais Alto";
			}
		}
		else {
			cout <<"Voce acertou \n";
			cout <<"=========================================== \n";
			c = 1;
			r = n;
		}
	}
	system("cls");
	if (r != n){
		cout <<"\n+================================+ \n: ";
		cout <<"+===== VOCE ERROU TODAS =====+ \n: ";
		cout <<"+===== O Numero secreto era: " << n << " =====+ \n: ";
		cout <<"+================================+ \n: ";
	}
	
	else {
		cout <<"\n+=============================+ \n: ";
		cout <<" VOCE ACERTOU PARABENS!!! ";
		cout <<"\n+=============================+ \n: ";
	}


	return 0;
}

