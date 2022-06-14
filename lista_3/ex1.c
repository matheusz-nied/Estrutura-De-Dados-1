/* Exercício 1 - Implemente a função abaixo para realizar as operações na estrutura FILA simples (vetor) sem rearranjo de posições.
               - Atenção: NÃO há rearranjo da FILA após a operação de desenfileirar (logo temos as variáveis de controle externo).
   
    *Parâmetros de entrada
        n ..........: tamanho máximo da FILA (int)
        
        x ..........: valor a ser inserido na FILA (int)
        
        operacao ...: indica a operação a ser realizada na FILA (char)
                    "i" - insere (enfileira) o número x na FILA
                    "r" - retira (desenfileira) um valor da fila
                    "t" - retorna o total de elementos na FILA 
                    "v" - retorna 1 se a FILA está vazia, e 0 caso contrário 
                    "c" - retorna 1 se a FILA está cheia, e 0 caso contrátio 
   
    *Parâmetros de saída
        success ....: retorna 1 se a operação foi realizada, e 0 caso contrário
        
    *Variáveis de controle externo
        inicio_fila_1: posição inicial da FILA (iniciado com -1, FILA vazia) deve ser atualizado a cada operação
        fim_fila_1...: posição final da FILA (iniciado com -1, FILA vazia) deve ser atualizado a cada operação
        
--------------------------------------------------------------------------------------------------*/
/* INFORMAÇÕES ADICIONAIS 
    0) Todos os valores de uma FILA vazia são setados em -1
    1) Só é possível inserir(enfileirar) um elemento no fim da FILA
    2) Só é possível inserir(enfileirar) um elemento se a FILA não está cheia
    3) Só é possível remover(desenfileirar) o primeiro elemento da FILA
    4) Só é possível remover(desenfileirar) se a FILA não está vazia
    5) Ao desenfileirar um elemento o valor na posição deve ser setado em -1
*/


#include <stdio.h>
extern int inicio_fila_1;
extern int fim_fila_1;

int ex1(int n, int fila[], char operacao, int x){
    int success = 0;
    switch (operacao)
    {
        case 'i':
            success = enfileira(n, &fila,  x);
        break;
    
        case 'r':
            success = desenfileira(n, &fila,  x);
        break;
       
        case 't':
         get_quantity_elements();
         success = 1;
        break;
       
        case 'v':
         success = is_empty();
        break;
        
        case 'c':
         success = is_full(n);
        break;
        
       default:
         //Instruções;
         break;
    }    
    return success;
}

int enfileira(int n, int fila[], int x){
    if(is_full() == 0){
        fim_fila_1 += 1;
        fila[fim_fila_1] = x;
        return 1;
    } else {
        return 0;
    }
}

int desenfileira(int n, int fila[], int x){
    if(is_empty() == 0){
        inicio_fila_1 += 1;
        fila[inicio_fila_1] = -1;
        return 1;
    } else{
        return 0;
    }
}

int get_quantity_elements(){
    return fim_fila_1 - 1;
}

int is_empty(){
    if(inicio_fila_1 == fim_fila_1){
        return 1;
    }
    else {
        return 0;
    }
}

int is_full(int n){
    if(fim_fila_1 == n){
        return 1;
    } else {
        return 0;
    }
}


