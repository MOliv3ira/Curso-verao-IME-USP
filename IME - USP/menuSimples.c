#include <stdio.h>
#include <stdlib.h>


void main(){

    int opcao;

    while(opcao < 1 || opcao > 4){

    printf("\nEscolha uma opcao:");
    printf("\n1 - opcao 1 ");
    printf("\n2 - opcao 2 ");
    printf("\n3 - opcao 3 ");
    printf("\n4 - opcao 4 \n\n");

    //LENDO OPÇÃO
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("\nA opcao 1 foi escolhida.");
            break;
        case 2:
            printf("\nA opcao 2 foi escolhida.");
            break;
        case 3:
            printf("\nA opcao 3 foi escolhida.");
            break;
        case 4:
            printf("\nA opcao 4 foi escolhida.");
            break;
        default:
            printf("\nOpcao invalida.");
            break;
    }
}

system("pause");
}

