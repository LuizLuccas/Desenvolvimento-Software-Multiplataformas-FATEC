import java.util.Scanner;

class pesagem
{
    public static void main(String arg[]){
        Scanner teclado = new Scanner(System.in);
        pessoas usuario1 = new pessoas();
        pessoas usuario2 = new pessoas();
        
        System.out.println("Digite seu nome: ");
        String n = teclado.nextLine();
        usuario1.recebe_nome(n);
        
        System.out.println("Digite sua idade: ");
        int i = teclado.nextInt();
        usuario1.recebe_idade(i);
        
        System.out.println("Digite seu peso: ");
        double p = teclado.nextDouble();
        usuario1.recebe_peso(p);
        
        System.out.println("Digite sua altura: ");
        double a = teclado.nextDouble();
        usuario1.recebe_altura(a);
        
        usuario1.calcula_imc(p,a);
        
        usuario1.mostra_nome();
        usuario1.mostra_idade();
        usuario1.mostra_peso();
        usuario1.mostra_altura();
        usuario1.mostra_imc();
        usuario1.mostra_tabela();
        
        
        
    }
}
