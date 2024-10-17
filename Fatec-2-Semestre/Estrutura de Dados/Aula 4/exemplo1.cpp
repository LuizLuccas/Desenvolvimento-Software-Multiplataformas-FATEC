/*
a variavel "numero" esta sendo passado o endere�o (por causa do &) 
e esse endere�o (apenas o endere�o e n�o o valor) esta sendo obtido 
por um ponteiro de inteiro, e por causa do "*" ele consegue acessar
o valor que esta dentro da variavel "numero" e nisso ele realiza 
aquela equa��o e como foi passado por referencia, n�o precisa retornar nenhum valor
*/

#include <iostream>

using namespace std;

void cubeByReference( int *nPtr ); /* Prot�tipo */

int main(int argc, char *argv[]){
   int numero = 5;

   cout << "O valor original � " << numero << endl;

   /* Passa o endere�o para cubeByReference */
   cubeByReference( &numero );

   cout << "O novo valor � " << numero << endl;

   return 0;
}

void cubeByReference( int *nPtr ) {
   *nPtr = *nPtr * *nPtr * *nPtr;
}
