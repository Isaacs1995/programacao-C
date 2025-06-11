#include <stdio.h>

int main(){

    // Criando a Matriz
    int matriz[10][10]= {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };

    // Posicionando os navios
    for (int i = 0; i < 3; i++)
    {
        matriz[0][i] = 3;
    }
    
    for (int j = 4; j < 7; j++)
    {
        matriz[j][5] = 3;
    }

    // Posicionando o navio na diagonal

    for (int i = 1; i < 4; i++)
    {
        matriz[i][i] = 3;
    }
    
    // Exibindo o tabuleiro
    printf("Tabuleiro Batalha Naval:\n\n");
    printf("  "); 

    // Exibindo as letras das colunas
    for (int j = 0; j < 10; j++) {
        printf("%c ", 'A' + j);
    }
    printf("\n");


    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);// Exibindo o número de cada linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
