#include <iostream>

using namespace std;

int main() {
    // Declaração das variáveis peso (para armazenar o peso adquirido),
    // m (para armazenar o valor da multa) e exc (para armazenar o excesso de peso).
    float peso, m;
    int exc;
    
    // Exibe um cabeçalho para o verificador de peso.
    cout << "\n======================== \n";
    cout << " VERIFICADOR DE PESO \n";
    cout << "======================== \n";
    
    // Solicita ao usuário que informe o peso adquirido em kg.
    cout <<"Informe o peso adquirido: Kg";
    cin >> peso;
    
    // Verifica se o peso adquirido é superior a 50 kg.
    if(peso > 50){
        // Se o peso for superior a 50 kg, calcula o excesso de peso e a multa correspondente.
        exc = peso - 50; // Calcula o excesso de peso.
        m = 4 * exc;     // Calcula a multa, onde cada kg excedente tem o valor de R$ 4.
    }
    else{
        // Se o peso for igual ou inferior a 50 kg, define o excesso e a multa como zero.
        exc = 0;
        m = 0;
    }
    
    // Exibe um cabeçalho para os valores calculados.
    cout << "\n======================== \n";
    cout << "\n V A L O R E S \n";
    cout << "\n========================";
    
    // Exibe o excesso de peso e o valor da multa, se houver.
    cout <<"\n Excessos: "<<exc<<"Kg";
    cout <<"\n Multa: R$"<<m<<"";
    
    return 0;
}
