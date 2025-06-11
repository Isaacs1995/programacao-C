#include <stdio.h>

int main(){

    //TORRE
int torre = 1;

printf("Movimentação da torre, 5 casas a direita: \n");
while (torre <= 5)
{
    printf("Direita\n");
    torre++;
}

    //BISPO
int bispo = 1;

printf("\nMovimentação diagonal do bispo, 5 casas à cima e à direita: \n");

do
{
    printf("Cima,Direita\n");
    bispo++;
} while (bispo <= 5);

    //RAINHA
int rainha;

printf("\nMovimentação da rainha, 8 casas à esquerda: \n");

for (rainha = 1; rainha <= 8; rainha++)
{
    printf("Esquerda \n");
}

    //CAVALO
printf("\nMovimentação do cavalo em L, 2 casas para baixo e 1 casa à esquerda: \n");

for (int i = 1; i < 2; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        printf("Baixo \n");
    }
    
    printf("Esquerda \n");
}

    return 0;
}
