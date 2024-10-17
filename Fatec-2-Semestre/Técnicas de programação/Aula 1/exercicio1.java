public class exercicio1
{
    public static void main (String args[]){
        int a1=1, a2=2;
    
        System.out.println("Soma: " + (a1 + a2));
        System.out.println("Multiplicacao: " + (a1 * a2));
        System.out.println("Subtracao: "+(a1-a2));
        System.out.println("Divisao: " +(a1 / a2));
        System.out.println("Incremento: " + (a1+=a2)); /* a+=b: Esse é um atalho para a = a + b. 
                                                          Ele pega o valor atual de a, adiciona o valor de b a ele e,
                                                          em seguida, atribui o resultado de volta à variável a. */
        
        System.out.println("Decremento: " + (a1-=a2)); /* O operador -= funciona de maneira semelhante ao operador +=, mas para subtração. 
                                                          Em vez de adicionar o valor à esquerda do operador com o valor à direita, ele subtrai 
                                                          o valor à direita do valor à esquerda e, em seguida, atribui o resultado de volta à variável à esquerda*/
        
        System.out.println("Comparação: " + (a1==a2)); /* Compara os dois valores passados e retorna se a condição é verdadeira ou falsa */
        
        System.out.println("Comparação: " + (a1!=a2)); /* Exemplo: 8 >> 2

                                                        Binário: 00001000 (8)
                                                        Deslocamento: Desloca 2 posições para a direita
                                                        Resultado: 00000010 (2)*/
        
        System.out.println("Deslocamento: " + (a1>>a2)); /* Exemplo: 3 << 2

                                                            Binário: 00000011 (3)
                                                            Deslocamento: Desloca 2 posições para a esquerda
                                                            Resultado: 00001100 (12) */
        
        
        
    }
    
}
