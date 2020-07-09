#include <stdio.h>
#include <stdlib.h>

int main (){

    int a, b, um = 1, zero = 0;

    printf("\nA: ");
    scanf("%d",&a);

    printf("\nB: ");
    scanf("%d",&b);

    if( a < b){
        printf(" %d\n", um);

    } else if(a >= b){
        printf(" %d\n", zero);

    }


    system("pause");

return 0;
}
