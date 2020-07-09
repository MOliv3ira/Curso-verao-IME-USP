#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int main(){


//CRIANDO UMA MATRIZ

    int matriz [2][2];

//PASSANDO VALORES
    matriz [0][0] = 1;
    matriz [0][1] = 2;
    matriz [1][0] = 3;
    matriz [1][1] = 4;

//IMPRIMINDO VALORES NA TELA
    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            //cout << "\ni = " << i << ", j = " << j;

            cout << matriz[i][j] << " ";
        }
            cout << "\n";
    }

    //LENDO VALORES

     for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            cin >> matriz[i][j];

        }

    }

    for(int i = 0; i < 2; i++){

        for(int j = 0; j < 2; j++){

            //cout << "\ni = " << i << ", j = " << j;

            cout << matriz[i][j] << " ";
        }
            cout << "\n";
    }



system("pause");
}
