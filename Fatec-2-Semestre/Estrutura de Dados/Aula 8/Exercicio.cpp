#include <iostream>
#include <fstream>
#include <string>

using namespace std;

#define N 50

struct Aluno {
    int id;
    string nome;
    int ra;
    string curso;
};

struct Lista {
    Aluno elementos[N];
    int numeroElementos;
};

// Função para inicializar a lista
void inicializarLista(Lista* lista) {
    lista->numeroElementos = 0;
}

// Função para exibir a lista de alunos
void exibirLista(Lista* lista) {
    cout << "Lista de Alunos:" << endl;
    for (int i = 0; i < lista->numeroElementos; i++) {
        cout << "ID: " << lista->elementos[i].id
             << ", Nome: " << lista->elementos[i].nome
             << ", RA: " << lista->elementos[i].ra
             << ", Curso: " << lista->elementos[i].curso << endl;
    }
}

// Função para busca sequencial por RA
int buscaSequencialRA(Lista* lista, int ra) {
    for (int i = 0; i < lista->numeroElementos; i++) {
        if (lista->elementos[i].ra == ra) {
            return i;
        }
    }
    return -1;
}

// Função para inserir aluno de forma ordenada por RA
bool inserirAlunoOrdenado(Lista* lista, Aluno aluno) {
    if (lista->numeroElementos >= N) return false;
    
    int pos = lista->numeroElementos;
    while (pos > 0 && lista->elementos[pos - 1].ra > aluno.ra) {
        lista->elementos[pos] = lista->elementos[pos - 1];
        pos--;
    }
    lista->elementos[pos] = aluno;
    lista->numeroElementos++;
    return true;
}

// Função para remover aluno por RA
bool removerAluno(Lista* lista, int ra) {
    int pos = buscaSequencialRA(lista, ra);
    if (pos == -1) return false;
    
    for (int i = pos; i < lista->numeroElementos - 1; i++) {
        lista->elementos[i] = lista->elementos[i + 1];
    }
    lista->numeroElementos--;
    return true;
}

// Função para gravar lista de alunos em arquivo
void gravarEmArquivo(Lista* lista, const string& nomeArquivo) {
    ofstream arquivo(nomeArquivo.c_str());  // Convertendo string para const char*
    for (int i = 0; i < lista->numeroElementos; i++) {
        arquivo << lista->elementos[i].id << " "
                << lista->elementos[i].nome << " "
                << lista->elementos[i].ra << " "
                << lista->elementos[i].curso << endl;
    }
    arquivo.close();
}


// Função para ler lista de alunos de arquivo
void lerDeArquivo(Lista* lista, const string& nomeArquivo) {
    ifstream arquivo(nomeArquivo.c_str());  // Convertendo string para const char*
    lista->numeroElementos = 0;
    
    while (arquivo >> lista->elementos[lista->numeroElementos].id) {
        arquivo >> lista->elementos[lista->numeroElementos].nome
                >> lista->elementos[lista->numeroElementos].ra
                >> lista->elementos[lista->numeroElementos].curso;
        lista->numeroElementos++;
    }
    arquivo.close();
}

int main() {
    Lista lista;
    inicializarLista(&lista);

    // Inserindo 
    Aluno aluno1 = {1, "Alice", 123, "Sistemas para Internet"};
    Aluno aluno2 = {2, "Bob", 456, "Engenharia"};
    Aluno aluno3 = {3, "Carol", 789, "Sistemas para Internet"};
    
    inserirAlunoOrdenado(&lista, aluno1);
    inserirAlunoOrdenado(&lista, aluno2);
    inserirAlunoOrdenado(&lista, aluno3);
    
    // Exibindo a lista inicial
    exibirLista(&lista);

    // Buscando aluno por RA
    int raBusca = 456;
    int posicao = buscaSequencialRA(&lista, raBusca);
    if (posicao != -1) {
        cout << "Aluno com RA " << raBusca << " encontrado na posição " << posicao + 1 << endl;
    } else {
        cout << "Aluno com RA " << raBusca << " não encontrado" << endl;
    }

    // Removendo aluno
    removerAluno(&lista, 123);
    cout << "Lista após remover o aluno com RA 123:" << endl;
    exibirLista(&lista);

    // Gravando e lendo de arquivo
    gravarEmArquivo(&lista, "alunos.txt");
    inicializarLista(&lista);  
    lerDeArquivo(&lista, "alunos.txt");
    cout << "Lista após ler do arquivo:" << endl;
    exibirLista(&lista);

    return 0;
}

