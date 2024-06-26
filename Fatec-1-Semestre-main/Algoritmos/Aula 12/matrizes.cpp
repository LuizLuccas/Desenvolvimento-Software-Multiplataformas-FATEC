#include <iostream>

/*
2) Elaborar um programa que leia uma matriz A de duas dimensões com 6 linhas e 
5 colunas. Crie uma matriz B de mesma dimensão, que deve ser formada do seguinte modo: para cada 
elemento PAR da matriz A deve ser somado 5 e de cada elemento IMPAR da matriz A deve ser subtraido 4. 
Apresentar ao final as matrizes A e B.

3) Elaborar um programa que leia uma matriz A de duas dimensões com 10 linhas e 7 colunas. Ao final 
apresentar o total de elementos pares e impares existentes na matriz. Apresentar também o percentual
 de elementos pares e impares em relação ao total de elementos da matriz.
Exemplo: Supondo a existência de 20 elementos pares e 50 elementos impares, ter-se-ia 28,6% de 
elementos pares e 71,4% de elementos impares.

4) Elaborar um programa que leia uma matriz A de duas dimensões com 4 linhas e 5 colunas. 
Construir um vetor B de 4 posições que seja preenchido pela somatória dos elementos 
correspondentes de cada linha da matriz A. Construir também um vetor C de 5 posições que 
seja preenchido pela somatória dos elementos de cada coluna da matriz A. Ao final, o programa
deve apresentar a matriz A e os vetores B e C.
*/

using namespace std;

int main() {
    int a[5][4], b[5][4];
    
    for (int c=0; c<= 4; c++){
    	for (int c1=0; c<= 3; c++){
    		cout <<"Informe um numero para A: ";
    		cin >>a[c][c1];
    		if (a[c][c1] % 2 = 0){
    			b[c][c1] = a[c][c1] + 5;
			}
			else{
				b[c][c1] = a[c][c1] - 4;
			}
		}
	}
    
    cout << "Matriz A:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriz B:" << endl;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


/*
EXERCÍCIO 1

using namespace std; 
int main() {
	float ra[9][0];
	float aluno[9][2], tot, media;
	
	for (int c=0; c <= 8; c++){
		media = 0;
		cout <<"Informe o RA do aluno "<<c<<": ";
		cin >> ra[c][0];
	
		cout <<"Informe a nota 1 do aluno "<<c<<": ";
		cin >> aluno[c][0];
		media = media + aluno[c][0];
		
		cout <<"Informe a nota 2 do aluno "<<c<<": ";
		cin >> aluno[c][1];
		media = media + aluno[c][1];
		
		
		cout <<"Informe a nota 3 do aluno "<<c<<": ";
		cin >> aluno[c][2];
		media = media + aluno[c][2];
		media = media / 3;
		
		if (media >= 5){
			tot = tot + 1;
		}
			
		
		cout <<"=========================="<<endl;		
		cout <<endl;
	}
	
    cout << "Aluno com a media maior ou igual a 5: "<<tot;
*/
