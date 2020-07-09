#include <stdio.h>
#include <stdlib.h>

//FUNÇÃO PRINCIPAL

void main() {

    int a = 5, b = 10, c = 15;
    char d = 'x';
    //MAIOR
    if(a > 2){

        printf("\n %d eh maior que 2", a);
    }
    //MAIOR OU IGUAL
    if(c >= b){

        printf("\n %d eh maior ou igual a %d", c , b);
    }
    //MENOR OU IGUAL
    if(a <= 10){

        printf("\n %d eh menor ou igual 10", a);
    }
    //DIFERENTE
    if(c != 10){

        printf("\n %d nao eh 10", c);
    }

    //CHAR
    if(d != 'a'){

        printf("\n %c nao eh a", d);
    }


        system("pause");
}
