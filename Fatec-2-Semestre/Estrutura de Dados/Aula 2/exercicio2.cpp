/*  				Exercício 2

	DESENVOLVA UMA APLICAÇÃO PARA CADASTRAR CLIENTE
	QUE FARÁ UM CRÉDITO EM ATÉ 12 VEZES. INSIRA NA 
	ESTRUTURA INFORMAÇÕES PERTINENTES AO CLIENTE
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Parte do código que fala para o 
// programa que as funções estão após o main

string cadastro_nome();
string cadastro_cpf();
float cadastro_valor();


int main() {
	// Estrutura que define os tipos
	// de dados que serão utilizados
	// na mesma variável
	
	struct cadastro{
		string nome;
		string cpf;
		float total;
		float parcela;
	};
	
	// Declaração da variável que será
	// usada para armazenar os valores
	// das tipos que estão na estrutura
	// cadastro
	
	struct cadastro cliente;
	
	// Chamada para as funções que obteram as respostas
	// (as mesmas se encontram abaixo do main)

	cliente.nome = cadastro_nome();
	cliente.cpf = cadastro_cpf();
	cliente.total = cadastro_valor();
	
	//calculo do crédito
	cliente.parcela = (cliente.total/12);
	
	// Saída de dados com os resultados já obtidos

	cout <<endl<<             "========================" << endl;
	cout << "   DADOS DO CLIENTE" << endl;
	cout << "========================"<<endl;
	cout <<endl;
	cout<<"Nome: " << cliente.nome << endl;
	cout<<"CPF: " << cliente.cpf << endl;
	cout<<"Valor total: " << cliente.total  << endl;
	cout<<"Credito [12x]: " << cliente.parcela << endl;
	cout << "========================";
	
	return 0;
}

// Funções que obteram os dados

string cadastro_nome(){
	string nome_recebido;
	cout <<"Nome: ";
	cin >>nome_recebido;
	return nome_recebido;
}

string cadastro_cpf(){
	string cpf_recebido;
	cout <<"Informe o CPF: ";
	cin >>cpf_recebido;
	return cpf_recebido;
}

float cadastro_valor(){
	float total_recebido;
	cout <<"Informe o valor total: ";
	cin >>total_recebido;
	return total_recebido;
}

