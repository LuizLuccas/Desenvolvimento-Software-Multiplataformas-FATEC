public class Exercicio3_Ordena
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
}
