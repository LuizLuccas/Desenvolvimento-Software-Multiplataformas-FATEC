#include <iostream>
#include <cstdlib>
#include <string>

struct Carro {
    std::string placa;
    std::string modelo;
    int ano;
};

struct Estacionamento {
    Carro carros[10]; // Array fixo para armazenar até 10 carros
    int tamanho;
};

Estacionamento* inicializar() {
    Estacionamento* e = new Estacionamento;
    e->tamanho = 0;
    return e;
}

void estacionar_carro(Estacionamento* e) {
    if (e->tamanho >= 10) {
        std::cout << "Estacionamento cheio!" << std::endl;
        return;
    }

    Carro novo_carro;
    std::cout << "Digite a placa do carro: ";
    std::cin >> novo_carro.placa;
    std::cout << "Digite o modelo do carro: ";
    std::cin >> novo_carro.modelo;
    std::cout << "Digite o ano do carro: ";
    std::cin >> novo_carro.ano;

    e->carros[e->tamanho] = novo_carro; // Adiciona o carro no próximo espaço
    e->tamanho++;
    std::cout << "Carro estacionado com sucesso!" << std::endl;
}

void checkout_carro(Estacionamento* e) {
    if (e->tamanho == 0) {
        std::cout << "Não há carros para sair!" << std::endl;
        return;
    }

    e->tamanho--; // Remove o carro do topo (último carro estacionado)
    Carro carro_removido = e->carros[e->tamanho];
    std::cout << "Carro removido: Placa: " << carro_removido.placa 
              << ", Modelo: " << carro_removido.modelo 
              << ", Ano: " << carro_removido.ano << std::endl;
}

void listar_carros(Estacionamento* e) {
    if (e->tamanho == 0) {
        std::cout << "Não há carros estacionados." << std::endl;
        return;
    }

    std::cout << "Carros estacionados (" << e->tamanho << "):" << std::endl;
    for (int i = 0; i < e->tamanho; i++) {
        std::cout << "Placa: " << e->carros[i].placa 
                  << ", Modelo: " << e->carros[i].modelo 
                  << ", Ano: " << e->carros[i].ano << std::endl;
    }
}

void destruir_estacionamento(Estacionamento* e) {
    delete e; // Libera a memória alocada para o estacionamento
}

int main() {
    Estacionamento* meu_estacionamento = inicializar();
    int opcao;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Estacionar carro\n";
        std::cout << "2. Check-out de carro\n";
        std::cout << "3. Listar carros estacionados\n";
        std::cout << "4. Sair\n";
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                estacionar_carro(meu_estacionamento);
                break;
            case 2:
                checkout_carro(meu_estacionamento);
                break;
            case 3:
                listar_carros(meu_estacionamento);
                break;
            case 4:
                std::cout << "Saindo do sistema." << std::endl;
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
        }
    } while (opcao != 4);

    destruir_estacionamento(meu_estacionamento);
    return 0;
}

