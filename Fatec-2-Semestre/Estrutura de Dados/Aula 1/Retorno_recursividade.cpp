#include <iostream>
using namespace std;

/* Escreva um programa com uma fun��o chamado
soma. Este programa deve somar todos os valores entre
0 e n, onde n � o par�metro passado para a fun��o.
Exemplo, n= 5, o retorno da fun��o ser� 15 ( 5+4+3+2+1)

Utilize recursividade
*/

#include <iostream>
using namespace std;

// Fun��o recursiva para somar todos os valores de 0 at� n
int soma(int n) {
    // Caso base: se n � 0, a soma � 0
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


    // Chama a fun��o soma e exibe o resultado
    cout << "Soma: " << soma(n) << endl;

    return 0;
}

