#include <stdio.h>
#include <stdlib.h>


void main(){

    //VARIÁVEL
    char palavra [10];

    //INSTRUÇÃO
    printf("Digite uma palavra");

    //LIMPAR BUFFER
    setbuf(stdin, 0);

    //LÊ STRING
    fgets(palavra, 255, stdin);

    //LIMPA AS CASAS NÃO UTILIZADAS
    palavra[strlen(palavra)-1] = '\0';

    printf("%s", palavra);

system("pause");
}
