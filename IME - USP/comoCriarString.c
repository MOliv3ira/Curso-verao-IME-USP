#include <stdio.h>
#include <stdlib.h>


void main(){

    //VARI�VEL
    char palavra [10];

    //INSTRU��O
    printf("Digite uma palavra");

    //LIMPAR BUFFER
    setbuf(stdin, 0);

    //L� STRING
    fgets(palavra, 255, stdin);

    //LIMPA AS CASAS N�O UTILIZADAS
    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

system("pause");
}
