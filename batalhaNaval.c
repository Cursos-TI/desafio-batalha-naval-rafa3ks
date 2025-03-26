#include <stdio.h>

int main(){

int tabuleiro[10][10];

for(int i = 0; i<=10; i++){

    for(int j = 0; j<=10; j++){

        tabuleiro[i][j] = 0;
    }
}


int coluna = 0;
int linha = 0;

do
{
    for(coluna; coluna<=10; coluna++){
        printf("%d|", tabuleiro[linha][coluna]);
    }
    linha++;
} while (linha<=10);

    return 0;
}
