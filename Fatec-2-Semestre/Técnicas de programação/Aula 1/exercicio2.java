public class exercicio2
{
    public static void main(String args[]){
        int valor = (int)(Math.random()*65); //Sorteador

        if (valor % 2 == 0){
            System.out.println(valor + " Valor par");
        }
        
        else {
            System.out.println(valor + " valor impar");
        }
        
        switch(valor % 2){
            case 0:
                System.out.println(valor + " PAR");
            default:
                System.out.println(valor + " IMPAR");
        }
    }
}
