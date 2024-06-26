#include <iostream>
using namespace std;
 
int main() {
    int n[5], aux; 
	
	for (int c=1; c <= 5; c++){
		cout << "Numero " <<c<< ": ";
		cin >> n[c];
	}
	
	for (int c=5; c > 0; c--){
		cout << n[c] << endl;

	}
	
    return 0;
}
