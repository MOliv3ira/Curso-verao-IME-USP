#include <stdio.h>
#include <stdlib.h>

int main () {
    int x, cont = 0;

    scanf("%d", &x);
    if (x % 2 == 0){
        do{
            x = x + 1;
            printf("%d\n", x);

            cont++;
            x++;
        }while (cont < 6);

    } else if (x % 2 == 1){
            do{
                printf("%d\n", x);

                cont++;
                x = x +2;
            }while (cont < 7);
    }
    system("pause");
    return 0;
}
