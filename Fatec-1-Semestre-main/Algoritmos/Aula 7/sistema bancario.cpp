#include <iostream>

using namespace std;

int main() {
    // Declara��o de vari�veis
    int resp, conta, sair, c1, c, fim; // Vari�veis de controle e de armazenamento de dados
    float dp1, dp2, valor, saque; // Saldo das contas e valores para opera��es
    
    // Loop principal do programa
    do {
        // Exibe o menu de sele��o de conta
        cout << endl;
        cout << "----------------- \n";
        cout << "Sistema Bancario \n";
        cout << "----------------- \n";
        cout << "Qual conta voce deseja acessar? \n";
        cout << "[1] Conta 1 \n";
        cout << "[2] Conta 2 \n";
        cout << "[3] Sair \n";
        cin >> conta; // L� a escolha do usu�rio
		c1 = 0; // Inicializa vari�vel de controle
		if (conta == 3){
            sair = 1;
            c1 = 1;
            cout << "Saindo...";
        }

        // Loop para opera��es na conta selecionada
        while (c1 == 0){
            if (conta == 1){
                // Menu para opera��es na Conta 1
                cout <<endl; 
                cout <<"================== \n";
                cout << "     Conta 1\n";
                cout <<"================== \n";
                cout << "Menu \n";
                cout << "[1] Deposito \n";
                cout << "[2] Saque \n";
                cout << "[3] Consulta \n";
                cout << "[4] Transferencia entre contas \n";
                cout << "[5] Sair \n";
                cin >> resp; // L� a escolha do usu�rio

                switch (resp){
                    case 1:
                        // Opera��o de dep�sito na Conta 1
                        system("cls"); 
                        cout << "Digite o valor: R$";
                        cin >> valor;
                        dp1 = dp1 + valor;
                        cout << "Valor: R$"<<valor<<" depositado com sucesso \n";
                        break;

                    case 2:
                        // Opera��o de saque na Conta 1
                        system("cls");
                        c = 0;
                        if (dp1 == 0){
                            // Verifica se h� saldo dispon�vel
                            cout <<"================== \n";
                            cout << "S E M  S A L D O \n";
                            cout <<"================== \n";
                        }
                        while (c == 0 & dp1 > 0){	
                            cout << "\n Valor do saque: R$";
                            cin >> saque;
                            if (saque <= dp1){
                                // Verifica se o valor do saque � v�lido
                                dp1 = dp1 - saque;
                                cout << "Valor: R$"<<saque<<" sacado com sucesso \n";
                                cout <<"Saldo restante: R$"<<dp1;
                                c = 1;
                            }
                            else{
                                // Informa que o saldo � insuficiente
                                cout <<"\n Saldo indisponivel, valor muito alto \n"; 
                                cout <<"======================================= \n";
                                cout <<"O valor precisa ser abaixo ou igual a R$"<<dp1;
                            }
                        }
                        break;
                    
                    case 3:
                        // Consulta de saldo na Conta 1
                        system("cls");
                        cout <<"================== \n";
                        cout <<"  FATEC   CONTAS \n";
                        cout <<"================== \n";
                        cout <<"Saldo: R$"<<dp1;
                        cout << endl;
                        cout <<"================== \n";
                        break;
                    
                    case 4:
                        // Transfer�ncia para Conta 2
                        conta = 2;
                        cout << "Transferindo... \n";
                        break;
                    
                    case 5:
                        // Sair da Conta 1
                        c1 = 1;
                        break;
                }
            }
            if (conta == 2){
                // Menu para opera��es na Conta 2
                sair = 0;
                cout <<"================== \n";
                cout << "     Conta 2\n";
                cout <<"================== \n";
                cout << "Menu \n";
                cout << "[1] Deposito \n";
                cout << "[2] Saque \n";
                cout << "[3] Consulta \n";
                cout << "[4] Transferencia entre contas \n";
                cout << "[5] Sair \n";
                cin >> resp; // L� a escolha do usu�rio

                switch (resp){
                    case 1:
                        // Opera��o de dep�sito na Conta 2
                        system("cls"); 
                        cout << "Digite o valor: R$";
                        cin >> valor;
                        dp2 = dp2 + valor;
                        cout << "Valor: "<<valor<<" depositado com sucesso \n";
                        break;

                    case 2:
                        // Opera��o de saque na Conta 2
                        system("cls");
                        c = 0;
                        if (dp2 == 0){
                            // Verifica se h� saldo dispon�vel
                            cout <<"================== \n";
                            cout << "S E M  S A L D O \n";
                            cout <<"================== \n";
                        }
                        while (c == 0 & dp2 > 0){	
                            cout << "\n Valor do saque: R$";
                            cin >> saque;
                            if (saque <= dp2){
                                // Verifica se o valor do saque � v�lido
                                dp2 = dp2 - saque;
                                cout << "Valor: R$"<<saque<<" sacado com sucesso \n";
                                cout <<"Saldo restante: R$"<<dp2 << endl;
                                c = 1;
                            }
                            else{
                                // Informa que o saldo � insuficiente
                                cout <<"\n Saldo indisponivel, valor muito alto \n"; 
                                cout <<"======================================= \n";
                                cout <<"O valor precisa ser abaixo ou igual a R$"<<dp2;
                            }
                        }
                        break;			
                    
                    case 3:
                        // Consulta de saldo na Conta 2
                        system("cls");
                        cout <<"================== \n";
                        cout <<"  FATEC   CONTAS \n";
                        cout <<"================== \n";
                        cout <<"Saldo: R$"<<dp2;
                        cout << endl;
                        cout <<"================== \n";
                        break;
                    
                    case 4:
                        // Transfer�ncia para Conta 1
                        conta = 1;
                        cout << "Transferindo... \n";
                        break;
                    
                    case 5:
                        // Sair da Conta 2
                        c1 = 1;
                        break;
                }
            }
        }
    } while (sair == 0); // Continua o loop principal at� o usu�rio sair

	
	return 0;
}
