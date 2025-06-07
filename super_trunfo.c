#include <stdio.h>
#include <string.h>

int main() {

    //Declaração das variáveis
    char estado, estado2;
    char codigo[10], codigo2[10];
    char nomeCidade[100], nomeCidade2[100];
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    printf("Digite os dados da primeira carta:\n\n");

    // Leitura dos dados
    printf("Digite o estado com uma letra (ex:A): ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo);

    // Limpar buffer antes do fgets
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 100, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n\nAgora digite os dados da segunda carta:\n\n");

    // Leitura dos dados
    printf("Digite o estado com uma letra (ex:A): ");
    scanf(" %c", &estado2);

    printf("Digite o código (ex: A01): ");
    scanf("%s", codigo2);

    // Limpar buffer antes do fgets
    while (getchar() != '\n');

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 100, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculos adicionais

    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;

    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;

    pib_per_capita = (float) (pib + 1e9) / populacao;
    pib_per_capita2 = (float) (pib2 + 1e9) / populacao2;

    // Impressão dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²", densidade_populacional);
    printf("Renda Per Capita: R$ %.2f\n", pib_per_capita);

   // Impressão dos dados da carta 2
    printf("Carta 2:\n");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²", densidade_populacional2);
    printf("Renda Per Capita: R$ %.2f\n", pib_per_capita2);

    //testes de alteração//

    return 0;
}

