/*
 * Exercício para nota 01.
 *
 * Prof. Me. Orlando Saraiva Jr
 * Aplicado em : 28/09/2024
 
   Aluno: Luiz Henrique de Luccas 28/09/2024 - 12:28
   
 */

#include <iostream>

#define TAMANHO_PILHA 10

using namespace std;

struct Carro {
    string  placa;
    int     ano;
};

struct Pilha {
    Carro   data[TAMANHO_PILHA];
    int     contador;
};
/* Protótipos das funções. Desenvolver a partir da linha 59 */
void inicializar(Pilha *S);
void estacionar(Pilha *S, string placaa, int anoo);
void estacionar(Pilha *S, Carro carroo);
Carro sair(Pilha *S);
void imprime_pilha(Pilha *S);
void imprime_tudo(Pilha *S);
int quantidade_vagas(Pilha S);


int main() {
    Pilha estacionamento;
    inicializar(&estacionamento);
    Carro carro_comum;
    
    estacionar(&estacionamento,"ABC1234", 1999);
    carro_comum.placa = "DOW5782";
    carro_comum.ano = 2004;
    estacionar(&estacionamento, carro_comum);
    cout << "Quantidade de vagas " << quantidade_vagas(estacionamento) << endl;
    imprime_pilha(&estacionamento);
    estacionar(&estacionamento,"XYZ3215", 2022);
    estacionar(&estacionamento,"WQT2245", 2020);
    estacionar(&estacionamento,"GIN3285", 2017);
    estacionar(&estacionamento,"HIX5215", 2008);
    imprime_pilha(&estacionamento);

    carro_comum = sair(&estacionamento);
    cout <<"\n";
    cout << "Saiu o carro: " << carro_comum.placa << endl;
    imprime_pilha(&estacionamento);
    cout << "Quantidade de vagas " << quantidade_vagas(estacionamento) << endl;
    imprime_tudo(&estacionamento);

}

/* Desenvolver as funções propostas a partir daqui*/
void inicializar(Pilha *S) {
    S->contador = 0;
    int x;
	for (x = TAMANHO_PILHA-1; x >= 0 ; x--){
		S->data[x].placa = "AAA0000" ;
        S->data[x].ano = 0 ;
    }
}

void estacionar(Pilha *S, string placaa, int anoo){
	if (S->contador < TAMANHO_PILHA){
		S->data[S->contador].placa = placaa;
		S->data[S->contador].ano = anoo;
		S->contador ++;
	}
	else {
		cout <<"Pilha cheia!!";
	}
}

void estacionar(Pilha *S, Carro carroo){
	if (S->contador < TAMANHO_PILHA){
		S->data[S->contador].placa = carroo.placa;
		S->data[S->contador].ano = carroo.ano;
		S->contador ++;
	}
	else {
		cout <<"Pilha cheia!!";
	}
}

Carro sair(Pilha *S){
	Carro retorno;
	
    if (S->contador == 0) {
        std::cerr << "Erro: pilha vazia\n";
        exit(-1);
    } else {
        S->contador--;
        retorno = S->data[S->contador];
        S->data[S->contador].placa = "XXX0000"; 
        S->data[S->contador].ano = 0;
        return retorno;
    }
}
 
void imprime_pilha(Pilha *S){
	cout <<"PILHA DE CARROS \n";
	cout <<"================ \n";
	for (int x = S->contador; x > 0; x--){
		cout << S->data[x - 1].placa << " ";
        cout << S->data[x - 1].ano << " ";
		cout << endl;
	}
}

void imprime_tudo(Pilha *S){
	cout <<"TODA A PILHA \n";
	cout <<"================ \n";
	for (int x = 10; x > 0; x--){
		cout << S->data[x - 1].placa << " ";
        cout << S->data[x - 1].ano << " ";
		cout << endl;
	}
}

int quantidade_vagas(Pilha S){
	cout <<"\n";
	int quantidade=10;
	quantidade = quantidade - S.contador;
	return quantidade;
}

