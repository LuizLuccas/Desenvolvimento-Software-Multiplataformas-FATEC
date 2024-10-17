import java.util.Scanner;
import java.util.InputMismatchException;

public class exercicio3{
    public static void main (String args[]){
        Scanner teclado = new Scanner(System.in);
        int resp;
        System.out.println("Digite um numero: ");
        
        try{
            resp = teclado.nextInt();
            if(resp > 0){
                System.out.println("Positivo!");
            }
            else{
                System.out.println("Negativo!");
            }
        }
        catch (InputMismatchException e) {
            System.out.println("Digite um numero!");
            
            /* InputMismatchException ocorre quando 
               você usa um método do Scanner que espera 
               um tipo específico de dado (como nextInt()
               para inteiros ou nextDouble() para números decimais)
               e o usuário fornece um tipo diferente (como texto
               ou caracteres não numéricos). Isso indica que a
               entrada não corresponde ao esperado. */
        }
        finally {
            System.out.println("Fim");
        }
    }
}
