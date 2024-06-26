#include <iostream> 

using namespace std; 

  

int atualizar_estoque(int estoque[][4], int prod) { 

    int cod; 

    cout << "Informe o codigo do produto: "; 

    cin >> cod; 

    for (int l = 0; l < prod; l++) { 

        if (cod == estoque[l][0]) { 

            cout << "Informe o novo valor de estoque: "; 

            cin >> estoque[l][1]; 

            cout << "Estoque atualizado com sucesso! \n"; 

            return estoque[l][1]; 

        } 

    } 

    cout << "Codigo do produto nao encontrado.\n"; 

    return -1; 

} 

  

void cadastrar_produto(int matriz[][4], string nome[], int add) { 

    cout << "Informe o nome do produto: "; 

    cin >> nome[add]; 

    cout << "Informe o codigo do produto: "; 

    cin >> matriz[add][0]; 

    cout << "Informe a quantidade do estoque: "; 

    cin >> matriz[add][1]; 

    cout << "Informe a quantidade minima do estoque: "; 

    cin >> matriz[add][2]; 

    cout << "Informe o preco do produto: RS"; 

    cin >> matriz[add][3]; 

    cout << "Produto cadastrado com Sucesso! \n"; 

} 

  

int main() { 

    int produtos; 

    cout << "Quantos produtos serao cadastrados: "; 

    cin >> produtos; 

  

    int op, add = -1, matriz[produtos][4], aux, codigo; 

    string nome[produtos]; 

    bool sai = false; 

  

    do { 

        cout << "===================== MENU ======================== \n"; 

        cout << "|1| Cadastrar Produto                              |\n"; 

        cout << "|2| Atualizar Quantidade em Estoque                |\n"; 

        cout << "|3| Exibir Relatorio de produtos                   |\n"; 

        cout << "|4| Listar Produtos em Baixa Quantidade de Estoque |\n"; 

        cout << "|5| Buscar Produto por Codigo                      |\n"; 

        cout << "|6| Sair                                           |\n"; 

        cout << "=================================================== \n"; 

        cout << "Digite sua resposta: "; 

        cin >> op; 

  

        switch (op) { 

            case 1: 

                add = add + 1; 

                if (add < produtos) { 

                    cadastrar_produto(matriz, nome, add); 

                } else { 

                    cout << "Numero de cadastros cheio! \n"; 

                } 

                break; 

            case 2: 

                aux = atualizar_estoque(matriz, produtos); 

                break; 

            case 3: 

                system("cls"); 

                cout << "========== Produtos Cadastrados ============= \n"; 

                for (int l = 0; l < produtos; l++) { 

                    cout << "Produto: " << nome[l] << endl; 

                    cout << "Estoque: " << matriz[l][1] << endl; 

                    cout << "Preco: RS" << matriz[l][3] << endl; 

                    cout << "============================================== \n"; 

                } 

                break; 

            case 4: 

                system("cls"); 

                cout << "========= Produtos abaixo da quantidade minima ========= \n"; 

                for (int l = 0; l < produtos; l++) { 

                    if (matriz[l][1] <= matriz[l][2]) { 

                        cout << "Produto: " << nome[l] << endl; 

                        cout << "Estoque: " << matriz[l][1] << endl; 

                        cout << "Quantidade Minima: " << matriz[l][2] << endl; 

                        cout << "Preco: RS" << matriz[l][3] << endl; 

                        cout << "======================================================== \n"; 

                    } 

                } 

                break; 

            case 5: 

                do { 

                    cout << "========== Busca por Codigo ============= \n"; 

                    cout << "Informe o codigo do produto: "; 

                    cin >> codigo; 

                    for (int l = 0; l < produtos; l++) { 

                        if (codigo == matriz[l][0]) { 

                            sai = true; 

                            system("cls"); 

                            cout << "========== Informacoes ============= \n"; 

                            cout << "Produto: " << nome[l] << endl; 

                            cout << "Estoque: " << matriz[l][1] << endl; 

                            cout << "Quantidade Minima: " << matriz[l][2] << endl; 

                            cout << "Preco: RS" << matriz[l][3] << endl; 

                        } 

                    } 

                    if (sai == false) { 

                        cout << "Codigo inexistente, tente novamente \n"; 

                    } 

                } while (sai == false); 

                break; 

            case 6: 

                cout << "Saindo..."; 

                break; 

        } 

    } while (op != 6); 

  

    return 0; 

} 
