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

    return 0;
}
