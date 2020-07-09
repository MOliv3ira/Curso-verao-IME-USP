#include <stdio.h>
#include <stdlib.h>

//CONDICIONAL SIMPLES

void main(){
    int a = 4, opcao = 1;
    float b = 2.5;
    char c = 'x';

    if(a == 5){
        printf("\n A variavel a = 5");
    }
    if (b == 2.5){
        printf("\n A variavel b == 2.5");
    }
    if(c == 'x'){
        printf("\n A variavel c = a letra x");
    }

    if(a % 2 == 1){

        printf("\n A variavel eh impar");

    } else {

        printf("\n A variavel eh par");

    }

    if(opcao == 1){

        printf("\n A opcao = 1");

    } else if(opcao == 2){

        printf("\n A opcao = 2");

    } else {

        printf("\n A opcao nao eh igual a 1 nem 2");

    }

    system("pause");

}
