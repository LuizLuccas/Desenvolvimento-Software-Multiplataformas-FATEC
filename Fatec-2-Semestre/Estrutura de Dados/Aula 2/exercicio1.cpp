/*  				Exerc�cio 1

	DESENVOLVA UMA APLICA��O PARA CADASTRAR CARROS.
	INSIRA NA ESTRUTURA INFORMA��ES PERTINENTES AO CARRO
*/
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

// Parte do c�digo que fala para o 
// programa que as fun��es est�o ap�s o main

string cadastro_marca();
string cadastro_modelo();
int cadastro_ano_fab();
string cadastro_placa();
string cadastro_cor();
float cadastro_preco();


int main() {
	// Estrutura que define os tipos
	// de dados que ser�o utilizados
	// na mesma vari�vel
	
	struct cadastro{
		string marca;
		string modelo;
		int ano_fab;
		string placa;
		string cor;
		float preco;
	};
	
	// Declara��o da vari�vel que ser�
	// usada para armazenar os valores
	// das tipos que est�o na estrutura
	// cadastro
	
	struct cadastro carro;
	
	// Chamada para as fun��es que obteram as respostas
	// (as mesmas se encontram abaixo do main)

	carro.marca = cadastro_marca();
	carro.modelo = cadastro_modelo();
	carro.ano_fab = cadastro_ano_fab();
	carro.placa = cadastro_placa();
	carro.cor = cadastro_cor();
	carro.preco = cadastro_preco();
	
	// Sa�da de dados com os resultados j� obtidos

	cout << "========================" << endl;
	cout << "   DADOS DO VEICULO" << endl;
	cout << "========================";
	cout <<endl;
	cout<<"Marca: " << carro.marca << endl;
	cout<<"Modelo: " << carro.modelo << endl;
	cout<<"Ano de fabricacao: " << carro.ano_fab << endl;
	cout<<"Placa: " << carro.placa << endl;
	cout<<"Cor: " << carro.cor << endl;
	cout<<"Preco: " << carro.preco << endl;
	cout << "========================";
	
	return 0;
}

// Fun��es que obteram os dados

string cadastro_marca(){
	string marca_recebida;
	cout <<"Informe a marca do carro: ";
	cin >>marca_recebida;
	return marca_recebida;
}

string cadastro_modelo(){
	string modelo_recebido;
	cout <<"Informe o modelo do carro: ";
	cin >>modelo_recebido;
	return modelo_recebido;
}

int cadastro_ano_fab(){
	int ano_fab_recebido;
	cout <<"Informe o ano de fabricacao do carro: ";
	cin >>ano_fab_recebido;
	return ano_fab_recebido;
}

string cadastro_placa(){
	string placa_recebida;
	cout <<"Informe a placa do carro: ";
	cin >>placa_recebida;
	return placa_recebida;
}

string cadastro_cor(){
	string cor_recebida;
	cout <<"Informe a cor do carro: ";
	cin >>cor_recebida;
	return cor_recebida;
}

float cadastro_preco(){
	float cor_recebida;
	cout <<"Informe o valor do carro: ";
	cin >>cor_recebida;
	return cor_recebida;
}
