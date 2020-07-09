#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b, c, triangulo = 180;

    printf("entre com o valor de a:\n ");
    scanf("%d",&a);
    printf("entre com o valor de b:\n ");
    scanf("%d",&b);
    printf("entre com o valor de c:\n ");
    scanf("%d",&c);

    if(a+b+c == triangulo){

        printf("Sim, A: %d, B: %d, C: %d\n", a, b, c);
    } else {

        printf("NAO, %d\n", a+b+c);
    }

    system("pause");
return 0;
}
