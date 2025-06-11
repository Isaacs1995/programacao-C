#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0){
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0){
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){

    //TORRE
int torre = 1;

printf("Movimentação da torre, 5 casas a direita: \n");
    moverTorre(5);

    //BISPO
int bispo = 1;

printf("\nMovimentação diagonal do bispo, 5 casas à cima e à direita: \n");
    moverBispo(5);

    //RAINHA
int rainha;

printf("\nMovimentação da rainha, 8 casas à esquerda: \n");
    moverRainha(8);

    //CAVALO
printf("\nMovimentação do cavalo em L, 2 casas para baixo e 1 casa à esquerda: \n");

for (int i = 1; i < 2; i++)
{
    for (int j = 1; j <= 2; j++)
    {
        printf("Cima \n");
    }
    
    printf("Direita \n");
}

    return 0;
}
