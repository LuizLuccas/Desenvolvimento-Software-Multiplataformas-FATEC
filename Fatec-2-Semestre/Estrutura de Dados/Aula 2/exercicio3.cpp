/*		COM ERROS!!!!!!

  				Exercício 2

	DESENVOLVA UMA APLICAÇÃO PARA CADASTRAR OS PROFESSORES DA FATEC
*/

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Parte do código que fala para o 
// programa que as funções estão após o main

string cadastro_nome();
string cadastro_apelido();
string cadastro_disciplina();
string cadastro_telefone();

int main() {
	int resp;
	// Estrutura que define os tipos
	// de dados que serão utilizados
	// na mesma variável
	
	struct cadastro{
		string nome;
		string disciplina;
		string apelido;
		string telefone;
	};
	
	// Declaração da variável que será
	// usada para armazenar os valores
	// das tipos que estão na estrutura
	// cadastro
	cout << "Quantos professores serão cadastrados: ";
	cin >>resp;
	struct cadastro professor[resp];
	
	// Chamada para as funções que obteram as respostas
	// (as mesmas se encontram abaixo do main)

	for (int c=0; c<=resp;c++){
		professor[c].nome = cadastro_nome();
		professor[c].disciplina = cadastro_disciplina();
		professor[c].apelido = cadastro_apelido();
		professor[c].telefone = cadastro_telefone();
		
	}
	
	// Saída de dados com os resultados já obtidos
	
	cout << "=========================" << endl;
	cout << "  DADOS DOS PROFESSORES" << endl;
	cout << "========================="<<endl;
	cout <<endl;
	for (int c=0; c<=resp;c++){
		cout<<"Nome: " << professor[c].nome << endl;
		cout<<"Disciplina: " << professor[c].disciplina << endl;
		cout<<"Apelido: " << professor[c].apelido  << endl;
		cout<<"telefone: " << professor[c].telefone << endl;
		cout << "========================";
	}
	return 0;
	}

// Funções que obteram os dados

string cadastro_nome(){
	string nome_recebido;
	cout <<"Nome: ";
	cin >>nome_recebido;
	return nome_recebido;
}

string cadastro_disciplina(){
	string disciplina_recebido;
	cout <<"Informe a disciplina: ";
	cin >>disciplina_recebido;
	return disciplina_recebido;
}

string cadastro_apelido(){
	string apelido_recebido;
	cout <<"Informe o apelido: ";
	cin >>apelido_recebido;
	return apelido_recebido;
}

string cadastro_telefone(){
	string telefone_recebido;
	cout <<"Informe o telefone: ";
	cin >>telefone_recebido;
	return telefone_recebido;
}
