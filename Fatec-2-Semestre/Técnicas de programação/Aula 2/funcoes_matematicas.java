class funcoes_matematicas
{
    public static void main(String args[]){
        //Random
        double r;
        r=0;
        r=Math.random()*7; //Serve para sortear um numero aleatório 
                           //(no caso como esta fazendo * 7 
                           //ira no máximo até 7
        
        System.out.println("Resultado Random: "+r);
            
        //Floor
        double f=0;
        f=Math.floor(5.2); //Arredonda um numero do tipo 
                           //double para seu anterior (5.2 -> 5)
        System.out.println("Resultado Floor: "+f);          
        
        //Ceil
        double c=0;
        c=Math.ceil(5.2); //Arredonda um numero do tipo 
                           //double para seu sucessor (5.2 -> 6)
        System.out.println("Resultado Ceil: "+c);  
        
        //Max
        double max=0;
        max=Math.max(5.2,3.1); //Verifica qual o maior entre
                             //dois numeros (5.2 vs 3.1 -> 5.2!!!)
        System.out.println("Resultado Max: "+max);  
        
        //Min
        double min=0;
        min=Math.min(5.2,3.1); //Verifica qual o menor entre 
                           //dois numeros (5.2 vs 3.1 -> 3.1!!!)
        System.out.println("Resultado Min: "+min);  
        
        //SQRT
        double sqrt=0;
        sqrt=Math.sqrt(4); //Calcula raiz quadrada de um numero 
                          //do tipo double (√4 = 2) 
        System.out.println("Resultado SQRT: "+sqrt);  
        
        //Pow
        double pow=0;
        pow=Math.pow(5,2); //Eleva um numero a qualquer valor 
                          //de potencia (5² = 25)
        System.out.println("Resultado POW: "+pow); 
        
        //Length
        String nome="Luiz Henrique";
        int tamanho = nome.length(); //Retorna o numero de caracteres
                                     //(Luiz Henrique = 13 caracteres)
        System.out.println("String usada para length: "+nome);
        System.out.println("Resultado length: "+tamanho); 
        
        //charAt()
        String nome1="Luiz";
        System.out.println("String usada para charAt: "+nome1);
        System.out.println("Resultado posicao 2: "+nome1.charAt(2)); 
        //Retorna o caractere de uma determinada
        //posição da String (Posição 2, Luiz = i)
        
        //toUpperCase()
        String nome2="Henrique";
        System.out.println("String usada para toUpperCase: "+nome2);
        System.out.println("Resultado: "+nome2.toLowerCase());
        //Converte todos os caracteres da string para maiusculo
        //(Henrique -> HENRIQUE)
        
        //toLowerCase()
        String nome3="LUCCAS";
        System.out.println("String usada para toUpperCase: "+nome3);
        System.out.println("Resultado: "+nome3.toLowerCase());
        //Converte todos os caracteres da string para minusculo
        //(LUCCAS -> luccas)
        
        //Substring()
        String nome4="Aprendendo Java";
        System.out.println("String usada para Substring: "+nome4);
        System.out.println("Do 3° ate o fim: "+nome4.substring(2));
        System.out.println("Do 1° ate o 10°: "+nome4.substring(0,9));
        System.out.println("Do 12° ate o 15°: "+nome4.substring(11,14));
        
        //trim()
        String nome5="java é 10!";
        System.out.println("*       "+nome5+"         *");
        System.out.println("* "+nome5.trim()+"               *");
        //remove todos os espaços em branco do inicio e do final 
        //de uma string (LUCCAS -> luccas)
        
        //replace()
        String nome6 = "banana nanica";
        System.out.println("String de replace: " + nome6);
        System.out.println("Resultado de a por u: " + nome6.replace('a','u'));
        
        
        }
        
    }