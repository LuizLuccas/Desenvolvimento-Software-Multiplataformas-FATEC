#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int n[10], menor, maior=0, media=0;
	
	for (int c=1; c <= 10; c++){
		cout << "Informe um valor para N" <<c<<": ";
		cin >> n[c];
		
		media = media + n[c];
		if (n[c] > maior){
			maior = n[c];
		} 
		if (n[c] < menor || menor == 0){
			menor = n[c];
		}
	}
	media = media / 10;
	
	cout << "=========" << endl;
	cout << "NUMEROS:"<< endl;
	cout << "========="<<endl;
	for (int c=1; c <= 10; c++){
		cout << "N"<<c<<": "<<n[c] << endl;
	}
	cout << "Dos numeros digitados o maior foi " <<maior <<endl<<"O menor numero foi "<<menor <<endl<< "E a media dos numeros foi de: "<<media; 

	return 0;
}
