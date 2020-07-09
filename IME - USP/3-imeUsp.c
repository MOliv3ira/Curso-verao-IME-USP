#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, termo = 1;
    scanf("%d", &n);

    for(int i = 0; i < 15; i++){

       printf("%d\n", termo);
       termo = termo + n;
    }


    system("pause");
return 0;
}
