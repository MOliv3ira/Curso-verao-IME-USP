#include <stdio.h>
#include <stdlib.h>
#include <time.h> //B�BLIOTECA PARA GERAR N�MEROS ALEAT�RIOS


void main(){

    //RESPONS�VEL POR ALIMENTAR O RAND DE FORMA DIFERENTE

    srand((unsigned)time(NULL));

    //VARI�VEIS QUE RECEBE O RESTO DA DIVIS�O DO N�MERO POR 3 (ALEAT�RIA ENTRE 0 E 2)

    int aleatorio = rand() % 3;

    //VARI�VEIS QUE RECEBE O RESTO DA DIVIS�O DO N�MERO POR 5 (ALEAT�RIA ENTRE 1 E 5)

     int aleatorioSegundo = rand() % 5 + 1;

    //IMPRIME VALOR
    printf("%d", aleatorioSegundo);


system("pause");
}
