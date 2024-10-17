import java.util.Scanner;

class Exercicio1 {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        double raio;
        
        System.out.println("Informe o raio: ");
        raio = teclado.nextDouble();
        
        // Cálculo do diâmetro
        double diametro = 2 * raio;
        
        // Cálculo da circunferência
        double pi = Math.PI;
        double circunferencia = 2 * pi * raio;
        
        // Exibição dos resultados
        System.out.println("Diâmetro: " + diametro);
        System.out.println("Perímetro (Circunferência): " + circunferencia);
        
        teclado.close();  // Fechar o Scanner
    }
}
