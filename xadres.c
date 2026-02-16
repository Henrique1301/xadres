#include <stdio.h>

int main (){

    int torre = 0;
    int bispo = 0;
    int rainha = 0;

    
    printf("Movimento Torre\n");//imprime aviso movimento torre
    //estrutura for - move a torre 5 vezes para a direita
    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n"); //imprime o movimento
    }

    printf("\n");
    printf("Movimento Bispo...\n"); //imprime aviso movimento torre

    //estrutura while - move o bispo 5 vezes para a diagonal, representado pro "Cima, Direita"
    while (bispo < 5)
    {
        printf("Cima, Direira\n"); //imprime aviso movimento bispo
        
        bispo++;
    }

    printf("\n");
    printf("Movimento Rainha...\n"); //estrutura for - move a torre 5 vezes para a direita
    
    //estrutura do while - move a Rainha 8 vezes para a esquerda
    do
    {
        printf("Esquerda\n"); //imprime aviso movimento rainha
        rainha++;
    } while (rainha < 8);
    
    

    return 0;
}