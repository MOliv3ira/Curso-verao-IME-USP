#include <stdio.h>
#include <stdlib.h>


void main(){
    //CONTADOR DE 1 ATÉ 10
    for(int i = 1; i <= 10; i ++){

        printf("\n%d", i);

    }

    //TABUADA
    for(int i = 1; i <= 10; i++){
        printf("\n5 x %d = %d", i, 5*i);
    }

    //PULANDO DE 2 EM 2
    for(int i = 0; i <= 10; i = i + 2){
        printf("\n%d", i);
    }

    for(int i = 10; i >= 1; i--){
        printf("\n%d", i);
    }

system("pause");
}
