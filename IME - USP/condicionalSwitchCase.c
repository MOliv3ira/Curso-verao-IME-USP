#include <stdio.h>
#include <stdlib.h>


void main(){

    //DEFININDO VARIÁVEIS
    int a = 2;
    char b = 'x';

    if(a == 1){
        printf("\nOpcao escolhida 1.");

    } else if (a == 2){
        printf("\nOpcao escolhida 2.");

    } else if (a == 3){
        printf("\nOpcao escolhida 3.");

    } else {
        printf("\nOpcao invalida.");

    }


    switch(a){
        case 1:
            printf("\nOpcao escollhida 1.");
            break;
        case 2:
            printf("\nOpcao escollhida 2.");
            break;
        case 3:
            printf("\nOpcao escollhida 3.");
            break;
        default:
            printf("\nOpcao invalida.");
            break;
    }

    switch(b){
        case 'x':
            printf("\n A letra eh x.");
            break;
        default:
            printf("\nOpcao invalida.");
            break;
    }

    system("pause");
}
