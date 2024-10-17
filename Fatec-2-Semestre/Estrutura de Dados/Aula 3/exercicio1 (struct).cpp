#include <iostream>
#include <string>
/*
Desenvolva uma aplicacao para cadastrar carro
Crie uma estrutura para cadastro (placa, ano, marca)
Crie uma estrutura para revisoes (data, local).
É previsto 5 revisoes
*/

using namespace std;

string cadastro_placa();
int cadastro_ano();
string cadastro_marca();
string cadastro_data();
string cadastro_local();

struct cadastro{
	string placa;
	int ano;
	string marca;
};
	
struct revisoes{
	string data;
	string local;
};
int main() {
	int c;
	struct revisoes revisao[5];
	struct cadastro carro;
	
	carro.placa = cadastro_placa();
	carro.ano = cadastro_ano();
	carro.marca = cadastro_marca();
	
	for (c=0; c<5; c++){
		cout <<c+1<<" Revisao"<<endl;
		cout<<"=================="<<endl;
		revisao[c].data = cadastro_data();
		revisao[c].local = cadastro_local();
	}
	cout <<endl;
	cout <<"Dados do veiculo"<<endl;
	cout<<"================="<<endl;
	cout <<"Placa: "<<carro.placa<<endl;
	cout <<"Ano: "<<carro.ano<<endl;
	cout <<"Marca: "<<carro.marca<<endl;
	cout<<"================="<<endl;
	
	for (c=0; c<5; c++){
		cout <<endl;
		cout <<c+1<<" Revisao"<<endl;
		cout << "Data: "<<revisao[c].data<<endl;
		cout << "Local: "<<revisao[c].local<<endl;
	}
	return 0;
}

string cadastro_placa(){
	string placa;
	cout <<"informe a placa do veiculo: ";
	cin >> placa;
	return placa;
}

int cadastro_ano(){
	int ano;
	cout <<"Informe o ano do veiculo: ";
	cin >>ano;
	return ano;
}

string cadastro_marca(){
	string marca;
	cout <<"informe a marca do veiculo: ";
	cin >>marca;
	return marca;
}

string cadastro_data(){
	string data;
	cout <<"Informe a data (dd/mm/yyyy): ";
	cin >>data;
	return data;
}

string cadastro_local(){
	string local;
	cout <<"Informe o local: ";
	cin >>local;
	return local;
}

