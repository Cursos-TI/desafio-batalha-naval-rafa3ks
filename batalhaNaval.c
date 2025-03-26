#include <stdio.h>

int main(){

int tabuleiro[10][10];

for (int coluna = 0; coluna < 10; coluna++)
{
    for (int linha = 0; linha < 10; linha++)
    {
        tabuleiro[coluna][linha]=0;
    }
    
}


    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (i!=9)
            {
                printf("|%d|", tabuleiro[j][i]);
            }else
            {
                printf("|%d| \n", tabuleiro[j][i]);
            }
            
        }
        
    }
    

    return 0;
}
