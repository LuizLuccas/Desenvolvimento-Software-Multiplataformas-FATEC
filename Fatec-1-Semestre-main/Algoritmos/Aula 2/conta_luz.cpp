#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    int opcao, cod; // Variáveis para armazenar o código do relógio e a opção de tipo de ligação
    string nome; // Variável para armazenar o nome do usuário
    float conta, lan, lat, consumo; // Variáveis para armazenar o valor da conta, leitura anterior, leitura atual e consumo

    // Solicita informações ao usuário
    cout <<"Informe o Codigo do relogio: ";				
    cin >> cod;
    cout <<"Informe o seu nome: ";
    cin >> nome;
    cout <<"Leitura Anterior: ";
    cin >> lan;
    cout <<"Leitura Atual: ";
    cin >> lat;

    // Exibe opções de tipo de ligação
    cout << "\n======================= \n";
    cout <<"Informe o Tipo de ligacao \n";
    cout <<"1 Residencia \n";
    cout <<"2 Comercial \n";
    cout <<"3 Industrial \n";
    cin >> opcao;
    cout <<"\n";

    // Calcula o consumo de energia
    consumo = lat - lan;
    
    // Calcula a conta com base na opção de tipo de ligação
    if (opcao == 1){
        conta = consumo * 0.6;
    }
    if (opcao == 2){
        conta = consumo * 0.48;
    }
    if (opcao == 3){
        conta = consumo * 1.29;
    } 

    // Exibe a conta de luz
    cout << "\n======================= \n";
    cout << "C O N T A  D E  L U Z \n";
    cout << "======================== \n";
    cout <<"Nome: "<< nome<<"\n";	
    cout <<"Consumo: "<< consumo<<"\n";
    cout <<"Valor total: "<< conta<<"R$";

    return 0;
}

