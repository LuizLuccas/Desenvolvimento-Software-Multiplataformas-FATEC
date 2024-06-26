#include <iostream>

using namespace std;

int main() {
    float n[10];
	int total=0, soma=0;
	
	for (int c=1; c <= 10; c++){
		cout << "Informe o numero "<<c<<": ";
		cin >> n[c];
		if (n[c] >= 0){
			soma = soma + n[c];
		}
		else {
			total = total + 1;
		}
	}
	
	cout << "A soma dos numeros positivos e de: "<<soma<< endl << "O total de numeros negativos e de: " << total;
	return 0;
}



