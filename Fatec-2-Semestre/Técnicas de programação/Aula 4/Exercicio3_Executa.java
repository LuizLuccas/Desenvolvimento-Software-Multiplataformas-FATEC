import java.util.Scanner;
/**
  Escreva uma classe em JAVA com apenas um método chamado
  que receba três números e mostre na tela esses números em
 ordem crescente.
 Crie uma segunda classe que contenha apenas um método executável
 que instancie a classe anterior e use o método crescente para mostrar
 três números ordenados, que tenham sido lidos do teclado;
 */
public class Exercicio3_Executa
{
    public static void main(String arg[]){
       Scanner entrada = new Scanner(System.in);
       Exercicio3_Ordena passagem = new Exercicio3_Ordena();
        
       System.out.print("Digite o 1 valor: ");
       int v1 = entrada.nextInt();
       
       System.out.print("Digite o 2 valor: ");
       int v2 = entrada.nextInt();
       
       System.out.print("Digite o 3 valor: ");
       int v3 = entrada.nextInt();
       
       passagem.crescente(v1,v2,v3);
        
    }
}
