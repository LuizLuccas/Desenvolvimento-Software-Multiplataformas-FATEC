#include <iostream>

using namespace std;
int main(int argc, char** argv) {
	int a[10], b[10], c[10];
    
    for (int i=1; i <= 10; i++){
    	cout << "A"<<i<<": ";
    	cin >>a[i];
	}
    
    for (int i=1; i <= 10; i++){
    	cout << "B"<<i<<": ";
    	cin >>b[i];	
	}
	
	for (int i=1; i <= 10; i++){
		if (i%2==0){
			c[i]= a[i];
		}
		else {
			c[i]= b[i];
		}	
	}
	
	cout << "========================"<<endl;
	for (int i=1; i <= 10; i++){
    	cout << "C"<<i<<": "<<c[i]<<endl;
	}		
    cout << "========================";

	return 0;
}
