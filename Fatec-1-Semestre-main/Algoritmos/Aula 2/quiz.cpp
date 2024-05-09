#include <iostream>

using namespace std;

int main() {

    string resp; // Armazena a resposta do usuário
    int cont, erro; // Contadores de respostas corretas e incorretas
    erro = 0; // Inicializa o contador de erros
    cont = 0; // Inicializa o contador de acertos
    
    // Exibe o cabeçalho do jogo
    cout << "\n======================= \n";
    cout << "J O G O  D O  M I L H A O \n";
    cout << "======================== \n";
    cout <<"------------- \n";

    // Pergunta 1
    cout << "QUESTAO 1 \n";
    cout << "------------ \n";
    cout << "QUEM E O AUTOR DO MANIFESTO PAULISTA? \n";
    cout << endl;
    cout << "ALTERNATIVA A: LENIN \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA B: JOSE BONIFACIO \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA C: KARL MAX \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA D: ALAN KARDEC \n";
    cout << "----------------------- \n";
    cout <<"RESPOSTA: ";
    cin >> resp;

    // Verifica a resposta da pergunta 1
    if (resp == "b"){
        cout <<"\n Parabens, Certa resposta :D";
        cont = cont + 1; // Incrementa o contador de acertos
        cout << "\n";
    }
    else {
        cout <<"\n Que pena, Resposta errada :c";
        erro = erro + 1; // Incrementa o contador de erros
        cout << "\n";
    }

    // Pergunta 2
    cout << "QUESTAO 2 \n";
    cout << "------------ \n";
    cout << "QUAL FRUTO E CONHECIDO NO NORTE E NORDESTE DO BRASIL COMO JERIMUN? \n";
    cout << endl;
    cout << "ALTERNATIVA A: CAJU \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA B: ABOBORA \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA C: CHUCHU \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA D: COCO \n";
    cout << "----------------------- \n";
    cout <<"RESPOSTA: ";
    cin >> resp;

    // Verifica a resposta da pergunta 2
    if (resp == "b"){
        cout <<"\n Parabens, Certa resposta :D";
        cont = cont + 1; // Incrementa o contador de acertos
        cout << "\n";
    }
    else {
        cout <<"\n Que pena, Resposta errada :c";
        erro = erro + 1; // Incrementa o contador de erros
        cout << "\n";
    }


    // Pergunta 3
    cout << "QUESTAO 3 \n";
    cout << "------------ \n";
    cout << "O QUE E VIA LACTA? \n";
    cout << endl;
    cout << "ALTERNATIVA A: MARCA DE LEITE \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA B: CIVILIZACAO ANTIGA\n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA C: CARRO \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA D: GALAXIA \n";
    cout << "----------------------- \n";
    cout <<"RESPOSTA: ";
    cin >> resp;

    // Verifica a resposta da pergunta 3
    if (resp == "d"){
        cout <<"\n Parabens, Certa resposta :D";
        cont = cont + 1; // Incrementa o contador de acertos
        cout << "\n";
    }
    else {
        cout <<"\n Que pena, Resposta errada :c";
        erro = erro + 1; // Incrementa o contador de erros
        cout << "\n";
    }

    // Pergunta 4
    cout << "QUESTAO 4 \n";
    cout << "------------ \n";
    cout << "QUEM E A MULHER DO TARZAN? \n";
    cout << endl;
    cout << "ALTERNATIVA A: DIANA \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA B: LOUIS LANE \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA C: JANE \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA D: CHITA \n";
    cout << "----------------------- \n";
    cout <<"RESPOSTA: ";
    cin >> resp;

    // Verifica a resposta da pergunta 4
    if (resp == "c"){
        cout <<"\n Parabens, Certa resposta :D";
        cont = cont + 1; // Incrementa o contador de acertos
        cout << "\n";
    }
    else {
        cout <<"\n Que pena, Resposta errada :c";
        erro = erro + 1; // Incrementa o contador de erros
        cout << "\n";
    }

    // Pergunta 5
    cout << "QUESTAO 5 \n";
    cout << "------------ \n";
    cout << "QUAL DESSAS SIGLAS SIGNIFICA QULOMETRO? \n";
    cout << endl;
    cout << "ALTERNATIVA A: KD \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA B: KM \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA C: KG \n";
    cout << "----------------------- \n";
    cout << "ALTERNATIVA D: KGF \n";
    cout << "----------------------- \n";
    cout <<"RESPOSTA: ";
    cin >> resp;

    // Verifica a resposta da pergunta 5
    if (resp == "b"){
        cout <<"\n Parabens, Certa resposta :D";
        cont = cont + 1; // Incrementa o contador de acertos
        cout << "\n";
    }
    else {
        cout <<"\n Que pena, Resposta errada :c";
        erro = erro + 1; // Incrementa o contador de erros
        cout << "\n";
    }
	
	// Apresenta o número de acertos e erros do usuário
    cout <<"Sua pontuacao foi de: "<<cont<<" Acertos e "<<erro<<" Erros";
	return 0;
}

