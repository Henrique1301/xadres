#include <stdio.h>

void torre(int casaTorre){
    if (casaTorre > 0)
    {
        printf("Direita\n");
        torre(casaTorre - 1);
    }
}

void bispo(int casaBispo){
    if (casaBispo > 0)
    {
        printf("Cima, Direira\n");
        bispo(casaBispo - 1);
    }
    
}

    void rainha(int casarainha){
        if (casarainha > 0)
        {
          printf("Esquerda\n");
          rainha(casarainha - 1);  
        }
        
    }

int main (){
    
    int movimentoCavalo = 1;
    
    printf("Movimento Torre\n");//imprime aviso movimento torre
    torre(5);
    printf("\n");

    printf("Movimento Bispo...\n"); //imprime aviso movimento torre
    bispo(5);
    printf("\n");

    printf("Movimento Rainha...\n"); //estrutura - move a torre 5 vezes para a direita
    rainha(8);
    printf("\n");

    printf("Movimento Cavalo...\n"); //estrutura de repetição aninhada - move o cavalo em L
    while (movimentoCavalo == 1) //estrura while 
    {
        for (int i = 1; i <= 2; i++) //estrutura for
        {
            printf("Cima\n");
        }

        printf("Direita");
        
        movimentoCavalo--;
    }

    return 0;
}