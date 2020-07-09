#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, b, aux;

    printf("\nA: ");
    scanf("%d", &a);

    printf("\nB: ");
    scanf("%d", &b);

    aux = a;
    a = b;
    b = aux;

    printf("O valor de A eh %d\n", a);

    printf("O valor de B eh %d\n", b);


    system("pause");

return 0;
}
