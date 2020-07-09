#include <stdio.h>
#include <stdlib.h>
#define TAM 3

void main(){

    int vetor [TAM];

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //ADCIONANDO 1 PARA CADA POSIÇÃO
    for(int i = 0; i < TAM; i++){

        vetor[i] = vetor[i] + 1;
    }

    //EXIBINDO OS VALORES DO VETOR
    printf("\nPosicao 0: %d", vetor[0]);
    printf("\nPosicao 1: %d", vetor[1]);
    printf("\nPosicao 2: %d\n\n", vetor[2]);

    //LENDO 3 VALORES PARA O VETOR
    for(int i = 0; i < TAM; i++){

         printf("\nPosicao %d: %d", i , vetor[i]);
    }

    for(int i = 0; i < TAM; i++){

       scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < TAM; i++){

         printf("\nPosicao %d: %d", i , vetor[i]);
    }
system("pause");

}
