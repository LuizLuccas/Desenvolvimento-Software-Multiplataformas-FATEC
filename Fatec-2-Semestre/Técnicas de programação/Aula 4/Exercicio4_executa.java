import java.util.Scanner;
/**
Escreva uma classe em JAVA que tenha um método construtor em que deve-se
passar como parâmetro uma string que será o nome do usuário. Essa classe também
deve ter um método chamado crescente que receba três números como parâmetro e
mostre na tela esses números em ordem crescente.
Crie uma segunda classe que contenha apenas um método executável que leia um
nome via teclado, instancie a classe anterior e use o método crescente para mostrar
três números ordenados saudando o usuário pelo nome, que também tenham sido
lidos do teclado;
*/
public class Exercicio4_executa
{
    public static void main(String args[]){
        Scanner entrada = new Scanner(System.in);
        
        System.out.print("Digite seu nome: ");
        String nome = entrada.nextLine();
        
        Exercicio4_ordena passagem = new Exercicio4_ordena(nome);
        
        System.out.print("Digite o 1 valor: ");
       int v1 = entrada.nextInt();
       
       System.out.print("Digite o 2 valor: ");
       int v2 = entrada.nextInt();
       
       System.out.print("Digite o 3 valor: ");
       int v3 = entrada.nextInt();
       
       passagem.crescente(v1,v2,v3);
    }
}
