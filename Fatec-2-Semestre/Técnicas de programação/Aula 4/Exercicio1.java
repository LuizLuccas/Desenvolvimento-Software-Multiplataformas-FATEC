
import java.util.Scanner;

/**
Escreva uma classe em JAVA que tenha apenas o método
executável que solicite 3 números o usuário através do
teclado e retorne os números digitados em ordem crescente;
 */


public class Exercicio1
{
    public static void main(String a[]) {
        Scanner entrada = new Scanner(System.in);
        
        System.out.print("Digite o 1 valor: ");
        int valor1 = entrada.nextInt();
        
        System.out.print("Digite o 2 valor: ");
        int valor2 = entrada.nextInt();
        
        System.out.print("Digite o 3 valor: ");
        int valor3 = entrada.nextInt();
        
        if (valor1 > valor2 && valor2 > valor3){
            System.out.println("Valores em crescente: "+valor3+" . "+valor2+" . "+valor1);
        }
        
        else if (valor1 > valor2 && valor2 < valor3){
            System.out.println("Valores em crescente: "+valor2+" . "+valor3+" . "+valor1);
        }
        
        else if (valor2 > valor1 && valor1 > valor3){
            System.out.println("Valores em crescente: "+valor3+" . "+valor1+" . "+valor2);
        }
        
        else if (valor2 > valor3 && valor3 > valor1){
            System.out.println("Valores em crescente: "+valor1+" . "+valor3+" . "+valor2);
        }
        
        else if (valor3 > valor1 && valor1 > valor2){
            System.out.println("Valores em crescente: "+valor2+" . "+valor1+" . "+valor3);
        }
        
        else if (valor3 > valor2 && valor2 > valor1){
            System.out.println("Valores em crescente: "+valor1+" . "+valor2+" . "+valor3);
        }
        
        
    }
}
