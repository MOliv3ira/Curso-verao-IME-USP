#include <stdio.h>
#include <stdlib.h>

// FUN��O PRINCIPAL DO PROGRAMA
void main (){
    //DEFININDO VARI�VEIS
    int a = 5, b = 3;

    //SOMA
    printf("\n A soma de %d e %d = %d\n",a , b, a + b);

    //SUBTRA��O
    printf("\n A subtracao de %d e %d = %d\n",a , b, a - b);

    //DIVIS�O
    printf("\n A divisao de %d e %d = %d\n",a , b, a / b);

    //MULTIPLICA��O
    printf("\n A multiplicacao de %d e %d = %d\n",a , b, a * b);

    //RESTO DA DIVIS�O
    printf("\n O resto da divisao entre %d e %d = %d\n",a , b, a % b);

    //VALOR ABSOLUTO
    printf("\n O valor absoluto de -3 = %d\n", abs(-3));


    //PAUSA O PROGRAMA AP�S EXECUTAR
    system("pause");

}
