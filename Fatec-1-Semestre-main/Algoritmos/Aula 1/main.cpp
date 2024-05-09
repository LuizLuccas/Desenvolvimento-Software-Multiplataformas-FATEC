#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
	cout << "";mostra dados/mensagens na tela (escreva) Sintaxe: cout << "";
	cin >> variavel; faz a leitura dos dados pelo teclado e armazena na variavel (leia) Sintaxe: cin >> nome;
	\n : Digito que faz a separação das linhas (Escreval)
*/

using namespace std;
int main() {
	int N1, N2, N3, N4, idade, dias, meses, idade2;
	float compr, larg, area, peri, media, cel, faren;
	
	//lendo dados exercicio 1
	cout << "\n==================================== \n";
	cout << "  CALCULADOR DE PERIMETRO E AREA \n";
	cout << "==================================== \n";
	cout << "Informe a largura do retangulo: ";
	cin >> larg;
	
	cout << "Informe o comprimento do retangulo: ";
	cin >> compr;
	
	// Processamento exercicio 1 (Calculo)
	area = larg * compr;
	peri = (compr*2) + (larg*2);
	
	//Saida de dados exercicio 1
	cout << "area do retangulo: " << area;
	cout << "\nPerimetro do retangulo:" << peri <<       "\n";
	
	cout << "\n==================================== \n";
	cout << "C A L C U L A D O R  D E  M E D I A: \n";
	cout << "==================================== \n";
	cout << "Numero 1: ";
	cin >> N1;
	cout << "Numero 2: ";
	cin >> N2;
	cout << "Numero 3: ";
	cin >> N3;
	cout << "Numero 4: ";
	cin >> N4;
	media = (N1 + N2 + N3 + N4) / 4;
	cout << "Media dos numeros digitados: " << media <<  "\n";
	
	cout << "\n======================= \n";
	cout << "Conversor de temperatura \n";
	cout << "======================== \n";
	cout << "Informe a temperatura em graus Celsius: ";
	cin >> cel;
	faren = (cel * 1.8) + 32;
	cout << "\n Temperatura em graus Farenheit:" << faren  ;
	
	cout << "\n====================\n";
	cout << "Calculador de idade: \n";
	cout << "======================\n";
	cout << "Informe sua idade: ";
	cin >> idade;
	cout << "Informe os meses: ";
	cin >> meses;
	cout << "Informe os dias: ";
	cin >> dias;
	idade2 = (idade * 365) + (meses * 30) + dias;
	cout << "\nVoce tem: " << idade2 << " Dias de vida."  ;
	return 0;
}
//Fim está no último ricolchete
