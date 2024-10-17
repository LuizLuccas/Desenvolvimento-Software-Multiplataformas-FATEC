
 class pessoas
{
    String nome;
    int idade;
    double peso, altura, imc;
    
    String recebe_nome(String n){
        nome = n;
        return nome;
    }
    
    void mostra_nome(){
        System.out.println("Nome: "+nome+ "\n");
    }
    
    int recebe_idade(int i){
        idade = i;
        return idade;
    }
    
    void mostra_idade(){
        System.out.println("Idade: "+idade+ "\n");
    }
    
    double recebe_peso(double p){
        peso = p;
        return peso;
    }
    
    void mostra_peso(){
        System.out.println("Peso: "+peso+ "\n");
    }
    
    double recebe_altura(double a){
        altura = a;
        return altura;
    }
    
    void mostra_altura(){
        System.out.println("Altura: "+altura+ "\n");
    }
    
    double calcula_imc(double pes, double alt){
        imc = pes / (alt * alt);
        return imc;
    }
    
    void mostra_imc(){
        System.out.println(nome+", Seu IMC é de: "+imc+ "\n");
    }
    
    void mostra_tabela(){
        System.out.println("+-----------------------+-----------------------------------------------+");
        System.out.println("| Faixa de IMC          | Categoria                                     |");
        System.out.println("+-----------------------+-----------------------------------------------+");
        
        System.out.printf("| ABAIXO DE 18,5        | VOCÊ ESTÁ ABAIXO DO PESO IDEAL                |\n");
        System.out.printf("| ENTRE 18,5 E 24,9     | PARABÉNS, VOCÊ ESTÁ EM SEU PESO NORMAL        |\n");
        System.out.printf("| ENTRE 25,0 E 29,9     | VOCÊ ESTÁ ACIMA DE SEU PESO (SOBREPESO)       |\n");
        System.out.printf("| ENTRE 30,0 E 34,9     | OBESIDADE GRAU I                              |\n");
        System.out.printf("| ENTRE 35,0 E 39,9     | OBESIDADE GRAU II                             |\n");
        System.out.printf("| 40,0 E ACIMA          | OBESIDADE GRAU III                            |\n");
        
        System.out.println("+-----------------------+-----------------------------------------------+");
    }

}
