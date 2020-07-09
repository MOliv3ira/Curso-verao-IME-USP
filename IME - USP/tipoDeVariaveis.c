#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main (){

    //DEFININDO VARIÁVEIS
    int a;
    float b;
    char c;
    bool d;

    //PASSANDO VALORES
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //TRUE = 1; FALSE = 0;

    //ESCREVENDO NA TELA
    printf("\n O valor de a = %d",a);
    printf("\n O valor de b = %.1f\n", b);
    printf("\n O valor de c = %c\n", c);
    printf("\n O valor de d = %d\n", d);

    //LENDO VALORES
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c",&c);
    scanf("%d", &d);

    //ESCREVENDO NA TELA
    printf("\n O valor de a = %d",a);
    printf("\n O valor de b = %.1f\n",b);
    printf("\n O valor de c = %.c\n", c);
    printf("\n O valor de d = %d\n",  d);

    //PAUSANDO
    system("pause");

}
