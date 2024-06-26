#include <iostream>
using namespace std;
 
int main() {
    int n[5], aux; 
	
	for (int c=1; c <= 5; c++){
		cout << "Numero " <<c<< ": ";
		cin >> n[c];
	}
	
	for (int c=1; c <= 4; c++){
		for (int c1=c + 1; c1 <= 5; c1++){
			if (n[c] > n[c1]){
				aux = n[c1];
				n[c1] = n[c];
				n[c] = aux;
			}
		}
	}
	
	for (int c=1; c <= 5; c++){
		cout << n[c] << endl;
	}

    return 0;
}
