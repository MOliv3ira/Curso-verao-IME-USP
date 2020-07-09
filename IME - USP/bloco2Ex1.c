#include <stdio.h>
#include <stdlib.h>


int main(){

    int x, y, maior, menor;

    printf("X: ");
    scanf("%d",&x);

    printf("\nY: ");
    scanf("%d",&y);

    if(x > y){
        maior = x;
        printf("\n %d", maior);

    } else {
        menor = y;
        printf("\n %d", menor);
    }

    system("pause");

return 0;
}
