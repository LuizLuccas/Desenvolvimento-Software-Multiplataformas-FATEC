/*  				Exerc�cio 2

	DESENVOLVA UMA APLICA��O PARA CADASTRAR CLIENTE
	QUE FAR� UM CR�DITO EM AT� 12 VEZES. INSIRA NA 
	ESTRUTURA INFORMA��ES PERTINENTES AO CLIENTE
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Parte do c�digo que fala para o 
// programa que as fun��es est�o ap�s o main

string cadastro_nome();
string cadastro_cpf();
float cadastro_valor();


int main() {
	// Estrutura que define os tipos
	// de dados que ser�o utilizados
	// na mesma vari�vel
	
	struct cadastro{
		string nome;
		string cpf;
		float total;
		float parcela;
	};
	
	// Declara��o da vari�vel que ser�
	// usada para armazenar os valores
	// das tipos que est�o na estrutura
	// cadastro
	
	struct cadastro cliente;
	
	// Chamada para as fun��es que obteram as respostas
	// (as mesmas se encontram abaixo do main)

	cliente.nome = cadastro_nome();
	cliente.cpf = cadastro_cpf();
	cliente.total = cadastro_valor();
	
	//calculo do cr�dito
	cliente.parcela = (cliente.total/12);
	
	// Sa�da de dados com os resultados j� obtidos

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

// Fun��es que obteram os dados

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

