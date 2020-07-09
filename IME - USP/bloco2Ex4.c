#include <stdio.h>
#include <stdlib.h>

int main () {

    int a, b;

    printf("\nA: ");
    scanf("%d", &a);

    int um = 1, zero = 0;

    if(a % 2 == 0){
        printf("O numero eh PAR: %d\n", um);

    } else {
        printf("O numero eh IMPAR: %d\n", zero);

    }

    system("pause");

return 0;
}
