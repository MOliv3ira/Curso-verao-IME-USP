#include <stdio.h>
#include <stdlib.h>

// FUNÇÃO PRINCIPAL DO PROGRAMA
void main (){
    //DEFININDO VARIÁVEIS
    int a = 5, b = 3;

    //SOMA
    printf("\n A soma de %d e %d = %d\n",a , b, a + b);

    //SUBTRAÇÃO
    printf("\n A subtracao de %d e %d = %d\n",a , b, a - b);

    //DIVISÃO
    printf("\n A divisao de %d e %d = %d\n",a , b, a / b);

    //MULTIPLICAÇÃO
    printf("\n A multiplicacao de %d e %d = %d\n",a , b, a * b);

    //RESTO DA DIVISÃO
    printf("\n O resto da divisao entre %d e %d = %d\n",a , b, a % b);

    //VALOR ABSOLUTO
    printf("\n O valor absoluto de -3 = %d\n", abs(-3));


    //PAUSA O PROGRAMA APÓS EXECUTAR
    system("pause");

}
