#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int n[5], menor, maior=0, c, c1;
	
	for (int i=1; i <= 5; i++){
		cout << "Informe um valor para N" <<i<<": ";
		cin >> n[i];
		
		if (n[i] > maior){
			maior = n[i];
			c = i;
		} 
		if (n[i] < menor || menor == 0){
			menor = n[i];
			c1 = i;
		}
	}
	
	cout<<"================" << endl;
	cout <<"Maior numero: "<<n[c] <<endl;
	cout <<"Posicao: " <<c<<endl;
	cout<<"================" << endl;
	cout <<"Menor numero: "<<n[c1] <<endl;
	cout <<"Posicao: " <<c1<<endl;
	cout<<"================"; 
	return 0;
}
