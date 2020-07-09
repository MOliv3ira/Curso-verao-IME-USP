#include <stdio.h>
#include <stdlib.h>

int main(){

    int h, a, b;
    float auxH, somaAB ;

    printf("entre com o valor de h:\n ");
    scanf("%d",&h);
    printf("entre com o valor de a:\n ");
    scanf("%d",&a);
    printf("entre com o valor de b:\n ");
    scanf("%d",&b);

         auxH = h^2;
         somaAB = ((a^2) + (b^2));

            if(somaAB == auxH){

           printf("1, %d", auxH);

        } else {

            printf("0");

        }


    system("pause");
return 0;
}
