import java.util.Scanner;
/**
 Escreva uma classe em JAVA que tenha um método chamado
 crescente que receba três números e mostre na tela esses
 números em ordem crescente. Nessa mesma classe crie um
 método executável que solicite três números para o usuário, via
 teclado, que serão passados ao método crescente;
 */
public class Exercicio2
{
   public void crescente(int valor1,int valor2,int valor3){
      int menor, medio, maior;
      
      if (valor1 <= valor2 && valor1 <= valor3){
          menor = valor1;
      }
      else if (valor2 <= valor1 && valor2 <= valor3){
          menor = valor2;
      }
      else {
          menor = valor3;
      }
      
      if (valor1 >= valor2 && valor1 >= valor3){
          maior = valor1;
      }
      else if (valor2 >= valor1 && valor2 >= valor3){
          maior = valor2;
      }
      else {
          maior = valor3;
      }
      
      if ((valor1 <= valor2 && valor1 >= valor3) || (valor1 >= valor2 && valor1 <= valor3)){
          medio = valor1;
      }
      else if ((valor2 <= valor1 && valor2 >= valor3) || (valor2 >= valor1 && valor2 <= valor3)){
          medio = valor2;
      }
      else {
          medio = valor3;
      }
      
      System.out.println("Valores em crescente: "+menor+" . "+medio+" . "+maior);
   }
    
   public static void main(String arg[]){
       Scanner entrada = new Scanner(System.in);
       Exercicio2 passagem = new Exercicio2();
       
       System.out.print("Digite o 1 valor: ");
       int v1 = entrada.nextInt();
       
       System.out.print("Digite o 2 valor: ");
       int v2 = entrada.nextInt();
       
       System.out.print("Digite o 3 valor: ");
       int v3 = entrada.nextInt();
       
       passagem.crescente(v1,v2, v3);
   }
   
}
