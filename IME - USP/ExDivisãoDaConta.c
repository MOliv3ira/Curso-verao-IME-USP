#include <stdio.h>
#include <stdlib.h>

int main(){

    float conta, felipe;

    printf("Digite o valor total da conta: \n");

    scanf("%f", &conta);

     int x = conta;
     float centavos;

    if(x > conta){

        centavos = x - conta;

    } else if (conta > x){

        centavos = conta - x;

    } else {

        centavos = 0;

    }

            int cadaUm = x / 3;

            felipe = cadaUm + centavos + 2;

                printf("Carlos pagara %d, Andre pagara %d e Felipe pagara %.2f\n", cadaUm, cadaUm, felipe);

system("pause");

return 0;
}
