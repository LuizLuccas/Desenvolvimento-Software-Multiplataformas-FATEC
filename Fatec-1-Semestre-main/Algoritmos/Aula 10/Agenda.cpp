#include <iostream>
using namespace std;
 
int main() {
    string nomes[20]; // tipo nome[tamanho]
    string telefones[20];
    int op;
    int posicao=0;
    while(op != 3){
        cout << " *** Agenda Telefonica *** \n";
        cout << "1 - Cadastrar contato \n";
        cout << "2 - Listar contatos \n";
        cout << "3 - Sair \n";
        cout << "Escolha a opcao: ";
        cin >> op;
        switch(op){
            case 1:
                if(posicao <= 19){
                    cout << "Informe um nome " << posicao+1 << " \n";
                    cin >> nomes[posicao];
                    cout << "Informe o Telefone \n";
                    cin >> telefones[posicao];
                    posicao++;
                }else{
                    cout << "Agenda cheia!! \n";
                }
                break;
            case 2:
                cout << "Exibindo os dados \n";
                for(int i=0; i <= posicao-1; i++){
                    cout << nomes[i] << endl;
                }    
                break;
        }
    }
    return 0;
}
