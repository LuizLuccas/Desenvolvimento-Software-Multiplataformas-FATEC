import java.util.Scanner;

public class Exercicio
{
    public static void main(String[] args) {
        
      int[] numero = new int[10];
      Scanner teclado = new Scanner(System.in);
      
      for (int c=0;c < numero.length; c++){
          System.out.println("Digite um numero: ");
          numero[c] = teclado.nextInt();
      }
        
      for (int c=0;c < numero.length; c++){
          for (int c2=c+1;c2 < numero.length; c2++){
              if (numero[c] > numero[c2]){
                  int aux = numero[c];
                  numero[c] = numero[c2];
                  numero[c2] = aux;
              }
          }
      }
    
      for (int c=0;c < numero.length; c++){
          System.out.println(numero[c]);
      }
    }
}
