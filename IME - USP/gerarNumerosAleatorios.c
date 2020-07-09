#include <stdio.h>
#include <stdlib.h>
#include <time.h> //BÍBLIOTECA PARA GERAR NÚMEROS ALEATÓRIOS


void main(){

    //RESPONSÁVEL POR ALIMENTAR O RAND DE FORMA DIFERENTE

    srand((unsigned)time(NULL));

    //VARIÁVEIS QUE RECEBE O RESTO DA DIVISÃO DO NÚMERO POR 3 (ALEATÓRIA ENTRE 0 E 2)

    int aleatorio = rand() % 3;

    //VARIÁVEIS QUE RECEBE O RESTO DA DIVISÃO DO NÚMERO POR 5 (ALEATÓRIA ENTRE 1 E 5)

     int aleatorioSegundo = rand() % 5 + 1;

    //IMPRIME VALOR
    printf("%d", aleatorioSegundo);


system("pause");
}
