#include <iostream>
using namespace std;
 
 
int main() {
    int n[4], m; 
	
	for (int c=1; c <= 4; c++){
		cout << "Numero " <<c<< ": ";
		cin >> n[c];
		m = m + n[c];
	}
	
	cout << "A soma dos numeros e: "<<m;
    return 0;
}
