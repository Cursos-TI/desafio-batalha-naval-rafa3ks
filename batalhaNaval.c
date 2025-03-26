#include <stdio.h>

int main(){

//variavéis dos navios
int navio1 = 1;
int navio2 = 4;
//variavel para criação do tabuleiro da Batalha Naval
int tabuleiro[10][10];

//preenchimento do tabuleiro para preencher com água
for (int coluna = 0; coluna < 10; coluna++)
{
    for (int linha = 0; linha < 10; linha++)
    {
        tabuleiro[coluna][linha]=0;
    }
    
}

//impressão do tabuleiro somente com valores 0 para representar água
printf("***Tabuleiro Batalha Naval*** \n");

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 0; j <= 9; j++)
        {
            if (j!=9)
            {
                printf("|%d|", tabuleiro[j][i]);
            }else
            {
                printf("|%d| \n", tabuleiro[j][i]);
            }
            
        }
        
    }
    
    //alocação dos navios, representados pelo numero "3", no tabuleiro
    //alocação do primeiro návio na vertical
    do
    {
        tabuleiro[3][navio1] = 3;
        //alocação do segundo návio na horizontal
        while (navio2 <= 8)
        {
            tabuleiro[navio2][7] = 3;
            navio2++;
        }
        
        navio1++;
    } while (navio1<5);
    
    
    printf("  \n");
    printf("***Tabuleiro Batalha Naval*** (com navios) \n");

    for (int k = 0; k <= 9; k++)
    {
        for (int u = 0; u <= 9; u++)
        {
            if (u!=9)
            {
                printf("|%d|", tabuleiro[u][k]);
            }else
            {
                printf("|%d| \n", tabuleiro[u][k]);
            }
            
        }
        
    }

    return 0;
}
