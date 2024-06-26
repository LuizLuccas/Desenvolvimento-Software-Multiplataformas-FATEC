#include <iostream>

using namespace std;

float soma(float num1, float num2){

	return num1 + num2;
}

float multi(float num1, float num2){
	
	return num1 * num2;
}

float divi(float num1, float num2){
	
	return num1 / num2;
}

float sub(float num1, float num2){
	
	return num1 - num2;
}

string parouimpar(int num1){
	string r;
	
	if (num1 % 2 == 0){
		r = "Par";
	}
	else{
		r = "Impar";
	}
	return r;
}

int fat(int num1){
	int c=1;
   for(;num1 > 0; num1 = num1 - 1){
		c = c * num1;
	}
	return c;
}

int main() {
	float n1=0, n2=0;
	int n3, c=1, op, n4,n5;
		
	do{
		cout<<"+=======MENU=======+ \n";
		cout<<"|1 - SOMA          | \n";
		cout<<"|2 - SUBTRACAO     | \n";
		cout<<"|3 - MULTIPLICACAO | \n";
		cout<<"|4 - DIVISAO       | \n";
		cout<<"|5 - Par/impar     | \n";
		cout<<"|6 - Fatorial      | \n";
		cout<<"|7 - SAIR          | \n";
		cout<<"+==================+ \n";
		cout<<"Escolha uma opcao: ";
		cin>>op;
		
		if(op!=7 & op!=6 & op!=5){

			cout<<"Informe o primeiro numero \n";
			cin>>n1;

			cout<<"Informe o segundo numero \n";
			cin>>n2;

		}

		switch(op){

			case 1:
				cout<<"+==== SOMA ====+\n";
				cout<<"Resultado: "<<soma(n1,n2) << endl;
				break;

			case 2:
				cout<<"+==== SUBTRACAO ====+\n";
				cout<<"Resultado: "<<sub(n1,n2) << endl;
				break;

			case 3:
				cout<<"+==== MULTIPLICACAO ====+\n";
				cout<<"Resultado: "<<multi(n1,n2) << endl;
				break;

			case 4:
				cout<<"+==== DIVISAO ====+\n";
				cout<<"Resultado: "<<divi(n1,n2) << endl;
				break;

			case 5:
				cout << "Informe o Numero a ser Verificado: ";
				cin >>n3;
				cout << "Resultado: " << parouimpar(n3) << endl;
				break;
				
			case 6:
				cout << "Informe o Numero do fatorial: ";
				cin >>n4;
				n5 = n4;
				for (;n5 > 0; n5 = n5 - 1){
				   cout << n5 << "!";
				}
				cout << " = " << fat(n4) << endl;
				break;
				
			case 7:
				cout << "Saindo...";
				break;
			
			default:
				cout <<"Opcao Invalida";
		}

	}while (op!=7);
 
	return 0;
 
}
