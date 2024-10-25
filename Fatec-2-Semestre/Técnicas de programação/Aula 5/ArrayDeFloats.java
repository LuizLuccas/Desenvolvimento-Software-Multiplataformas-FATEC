class ArrayDeFloats
{
    private float[] array;
    ArrayDeFloats(int numeros){
        array = new float[numeros];
    }
    
    public int tamanho(){
        return array.length;
    }
    
    public void modifica(int posicao, float valor){
        if((posicao >= 0) && (posicao < array.length)){
            array[posicao] = valor;
        }
    }
    
    public float valor(int posicao){
        if((posicao>=0) && (posicao<array.length)){
           return array[posicao]; 
        }
        else return Float.NaN;
    }
    
    public float[] paraArray(){
        return array;
    }
    
    public float menorValor(){
        float menor = array[0];
        for(int i=1;i<array.length; i++)
            if(array[i] < menor) menor = array[i];
            return menor;
    }
    
    public float maiorValor(){
        float maior = array[0];
            for(int i=1; i<array.length;i++)
            if(array[i] > maior) maior = array[i];
            return maior;
    }
    
    public String toString(){
        String resultado = "O array tem " + array.length+"elementos:\n";
        for(int i=0;i<array.length;i++)
        resultado += array[i] + "\n";
        return resultado;
    }
    
}
