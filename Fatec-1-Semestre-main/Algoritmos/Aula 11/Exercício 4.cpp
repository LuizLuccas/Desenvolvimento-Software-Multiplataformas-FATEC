#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int n[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Informe um valor para N" << i + 1 << ": ";
        cin >> n[i];
    }
    
    cout << "================" << endl;
    cout << "Numeros repetidos: " << endl;
    for (int i = 0; i < 9; i++) {
        for (int c = i + 1; c < 10; c++) {
            if (n[i] == n[c]) {
                cout << n[i] << endl;
            }
        }
    }
	return 0;
}
