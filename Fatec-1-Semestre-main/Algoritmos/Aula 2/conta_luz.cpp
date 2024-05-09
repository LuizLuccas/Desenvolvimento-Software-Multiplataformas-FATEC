#include <iostream>

using namespace std;

int main() {
    // Declara��o de vari�veis
    int opcao, cod; // Vari�veis para armazenar o c�digo do rel�gio e a op��o de tipo de liga��o
    string nome; // Vari�vel para armazenar o nome do usu�rio
    float conta, lan, lat, consumo; // Vari�veis para armazenar o valor da conta, leitura anterior, leitura atual e consumo

    // Solicita informa��es ao usu�rio
    cout <<"Informe o Codigo do relogio: ";				
    cin >> cod;
    cout <<"Informe o seu nome: ";
    cin >> nome;
    cout <<"Leitura Anterior: ";
    cin >> lan;
    cout <<"Leitura Atual: ";
    cin >> lat;

    // Exibe op��es de tipo de liga��o
    cout << "\n======================= \n";
    cout <<"Informe o Tipo de ligacao \n";
    cout <<"1 Residencia \n";
    cout <<"2 Comercial \n";
    cout <<"3 Industrial \n";
    cin >> opcao;
    cout <<"\n";

    // Calcula o consumo de energia
    consumo = lat - lan;
    
    // Calcula a conta com base na op��o de tipo de liga��o
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

