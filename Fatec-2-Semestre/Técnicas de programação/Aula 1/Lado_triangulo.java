public class Lado_triangulo
{
    public static void main(String argumentos[])
    {
        float lado1, lado2, lado3;
        lado1 = 3;
        lado2 = lado1 + 1;
        lado3 = 4;
        boolean igualdade12, igualdade23;
        igualdade12 = (lado1 == lado2);
        igualdade23 = (lado2 == lado3);
        System.out.print("Lado 1 igual a lado 2?");
        System.out.println(igualdade12);
        System.out.print("Lado 2 igual a lado 3?");
        System.out.println(igualdade23);
        boolean equilatero;
        equilatero = (igualdade12 & igualdade23);
        System.out.println("Triangulo equilatero?" + equilatero);
        
    }
}