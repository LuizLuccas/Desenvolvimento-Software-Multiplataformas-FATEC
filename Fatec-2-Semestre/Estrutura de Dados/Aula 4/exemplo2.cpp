
#include <iostream>
#include <string>
/*
1) Ajuste na aplicação cadastrar carro ( aula passada ).

Crie uma funções de cadastro em que ocorra a passagem por
referência.

Crie uma funções para exibir o cadastro em que ocorra a passagem
por valor.
*/

using namespace std;

void cadastro(struct revisoes revisao[], int c1);
string cadastro_placa();
int cadastro_ano();
string cadastro_marca();
void cadastro_data(string *data);
void cadastro_local(string *local);

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
	struct revisoes revisao[5];
	struct cadastro carro;
	
	carro.placa = cadastro_placa();
	carro.ano = cadastro_ano();
	carro.marca = cadastro_marca();
	
	for (int c=0; c<5; c++){
		cout <<c+1<<" Revisao"<<endl;
		cout<<"=================="<<endl;
		cadastro_data(&revisao[c].data);
		cadastro_local(&revisao[c].local);
	}
	cout <<endl;
	cout <<"Dados do veiculo"<<endl;
	cout<<"================="<<endl;
	cout <<"Placa: "<<carro.placa<<endl;
	cout <<"Ano: "<<carro.ano<<endl;
	cout <<"Marca: "<<carro.marca<<endl;
	cout<<"================="<<endl;
	
	for (int c=0; c<5; c++){
		cadastro(revisao,c);
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

void cadastro_data(string *data){
	cout <<"Informe a data (dd/mm/yyyy): ";
	cin >>*data;
}

void cadastro_local(string *local){
	cout <<"Informe o local: ";
	cin >>*local;
}
void cadastro(struct revisoes revisao[], int c1){
 	cout <<endl;
	cout <<c1+1<<" Revisao"<<endl;
	cout << "Data: "<<revisao[c1].data<<endl;
	cout << "Local: "<<revisao[c1].local<<endl;
 }

