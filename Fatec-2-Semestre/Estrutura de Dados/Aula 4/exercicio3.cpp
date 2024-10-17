#include <iostream>
#include <string>

/*
3) Ajuste na aplicação cadastrar carro.
Permitir o cadastro de n carros, onde n será definido pelo
usuário.
*/

using namespace std;

void cadastro(struct revisoes revisao[], int c1);
void cadastro_carro(struct cadastro *carro);	
void cadastro_data(string *data);
void cadastro_local(string *local);

struct cadastro {
    string placa;
    int ano;
    string marca;
};

struct revisoes {
    string data;
    string local;
};

int main() {
    int x, n;
    struct revisoes revisao[2];
    
    cout << "Informe quantos carros serao cadastrados: ";
    cin >> n;
    
    struct cadastro carro[n];
    
    for (x = 0; x < n; x++) {
        cadastro_carro(&carro[x]);
    }
    
    for (int c = 0; c < 1; c++) {
        cout << c+1 << " Revisao" << endl;
        cout << "==================" << endl;
        cadastro_data(&revisao[c].data);
        cadastro_local(&revisao[c].local);
    }
    
    cout << endl;
    for (x = 0; x < n; x++) {
        cout << "Dados do veiculo " << x+1 << endl;
        cout << "=================" << endl;
        cout << "Placa: " << carro[x].placa << endl;
        cout << "Ano: " << carro[x].ano << endl;
        cout << "Marca: " << carro[x].marca << endl;
        cout << "=================" << endl;
    }
    
    for (int c = 0; c < 2; c++) {  // Alterado para 2 porque revisao tem tamanho 2
        cadastro(revisao, c);
    }
    
    return 0;
}

void cadastro_carro(struct cadastro *carro) {
    cout << "Informe a placa do veiculo: ";
    cin >> carro->placa;
    cout << "Informe o ano do veiculo: ";
    cin >> carro->ano;
    cout << "Informe a marca do veiculo: ";
    cin >> carro->marca;
}

void cadastro_data(string *data) {
    cout << "Informe a data (dd/mm/yyyy): ";
    cin >> *data;
}

void cadastro_local(string *local) {
    cout << "Informe o local: ";
    cin >> *local;
}

void cadastro(struct revisoes revisao[], int c1) {
    cout << endl;
    cout << c1+1 << " Revisao" << endl;
    cout << "Data: " << revisao[c1].data << endl;
    cout << "Local: " << revisao[c1].local << endl;
}

