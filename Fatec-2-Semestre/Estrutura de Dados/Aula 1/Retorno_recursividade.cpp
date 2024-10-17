#include <iostream>
using namespace std;

/* Escreva um programa com uma função chamado
soma. Este programa deve somar todos os valores entre
0 e n, onde n é o parâmetro passado para a função.
Exemplo, n= 5, o retorno da função será 15 ( 5+4+3+2+1)

Utilize recursividade
*/

#include <iostream>
using namespace std;

// Função recursiva para somar todos os valores de 0 até n
int soma(int n) {
    // Caso base: se n é 0, a soma é 0
    if (n == 0) {
        return 0;
    }
    // Caso recursivo: soma o valor atual (n) com a soma de (n-1)
    else {
        return n + soma(n - 1);
    }
}

int main() {
    int n;

    cout << "Numero: ";
    cin >> n;


    // Chama a função soma e exibe o resultado
    cout << "Soma: " << soma(n) << endl;

    return 0;
}

