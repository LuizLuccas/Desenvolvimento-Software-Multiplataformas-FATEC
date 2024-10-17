/*
a variavel "numero" esta sendo passado o endereço (por causa do &) 
e esse endereço (apenas o endereço e não o valor) esta sendo obtido 
por um ponteiro de inteiro, e por causa do "*" ele consegue acessar
o valor que esta dentro da variavel "numero" e nisso ele realiza 
aquela equação e como foi passado por referencia, não precisa retornar nenhum valor
*/

#include <iostream>

using namespace std;

void cubeByReference( int *nPtr ); /* Protótipo */

int main(int argc, char *argv[]){
   int numero = 5;

   cout << "O valor original é " << numero << endl;

   /* Passa o endereço para cubeByReference */
   cubeByReference( &numero );

   cout << "O novo valor é " << numero << endl;

   return 0;
}

void cubeByReference( int *nPtr ) {
   *nPtr = *nPtr * *nPtr * *nPtr;
}
