#include <stdio.h>
#include <string.h>

int main() {

    //Declaração das variáveis
    char estado, estado2;
    char codigo[10], codigo2[10];
    char nomeCidade[100], nomeCidade2[100];
    unsigned long int populacao, populacao2;
    float area, area2, pib, pib2;
    int pontosTuristicos, pontosTuristicos2;

    printf("Digite os dados da primeira carta:\n\n");

    // Leitura dos dados da primeira carta
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
    scanf("%lu", &populacao);

    printf("Digite a área (km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("\n\nAgora digite os dados da segunda carta:\n\n");

    // Leitura dos dados da segunda carta
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
    scanf("%lu", &populacao2);

    printf("Digite a área (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculos adicionais - densidade, renda per capita, super poder

    float densidade_populacional, densidade_populacional2;
    float rendaPerCapita, rendaPerCapita2;
    float inversoDensidade, inversoDensidade2;
    float superPoder, superPoder2;

    densidade_populacional = populacao / area;
    inversoDensidade = 1.0 / densidade_populacional;

    densidade_populacional2 = populacao2 / area2;
    inversoDensidade2 = 1.0 / densidade_populacional2;

    rendaPerCapita = (pib * 1e9) / populacao;
    rendaPerCapita2 = (pib2 * 1e9) / populacao2;

    superPoder = populacao + area + pib + pontosTuristicos + rendaPerCapita + inversoDensidade;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + rendaPerCapita2 + inversoDensidade2;

    /* Impressão dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("Renda Per Capita: R$ %.2f\n", rendaPerCapita);
    printf("\nSuper Poder da Cidade: %.2f\n\n", superPoder);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("Renda Per Capita: R$ %.2f\n", rendaPerCapita2);
    printf("\nSuper Poder da Cidade: %.2f\n\n", superPoder2);*/

    //comparação das cartas (Lógica de decisão + menu de seleção)

    int opcao;

    printf("\n\nPor favor, escolha qual atributo deseja utilizar para a comparação:\n\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Área\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Número de pontos turísticos\n");
    printf("Opção 5 - Densidade demográfica\n");
    scanf("%d" , &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao > populacao2) {
        printf("\nCarta 1 - Cidade %s \nPopulacao %lu", nomeCidade, populacao);
        printf("\nCarta 2 - Cidade %s \nPopulacao %lu", nomeCidade2, populacao2);
        printf("\nA carta 1 venceu!\n");

        }    
        else if(populacao < populacao2){
        printf("\nCarta 1 - Cidade %s \nPopulacao %lu", nomeCidade, populacao);
        printf("\nCarta 2 - Cidade %s \nPopulacao %lu", nomeCidade2, populacao2);
        printf("\nA carta 2 venceu!\n");
        }   
        else{
        printf("\nEmpate!\n");
        }
        break;
    
    case 2:
        if (area > area2) {
        printf("\nCarta 1 - Cidade %s \nÁrea %.2f Km²", nomeCidade, area);
        printf("\nCarta 2 - Cidade %s \nÁrea %.2f Km²", nomeCidade2, area2);
        printf("\nA carta 1 venceu!\n");

        }    
        else if(area > area2){
        printf("\nCarta 1 - Cidade %s \nÁrea %.2f Km²", nomeCidade, area);
        printf("\nCarta 2 - Cidade %s \nÁrea %.2f Km²", nomeCidade2, area2);
        printf("\nA carta 2 venceu!\n");
        }   
        else{
        printf("\nEmpate!\n");
        }
        break;

    case 3:
        if (pib > pib2) {
        printf("\nCarta 1 - Cidade %s \nPIB %.2f", nomeCidade, pib);
        printf("\nCarta 2 - Cidade %s \nPIB %.2f", nomeCidade2, pib2);
        printf("\nA carta 1 venceu!\n");

        }    
        else if(pib > pib2){
        printf("\nCarta 1 - Cidade %s \nPIB %.2f", nomeCidade, pib);
        printf("\nCarta 2 - Cidade %s \nPIB %.2f", nomeCidade2, pib2);
        printf("\nA carta 2 venceu!\n");
        }   
        else{
        printf("\nEmpate!\n");
        }
        break;

    case 4:
        if (pontosTuristicos > pontosTuristicos2) {
        printf("\nCarta 1 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade, pontosTuristicos);
        printf("\nCarta 2 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade2, pontosTuristicos2);
        printf("\nA carta 1 venceu!\n");

        }    
        else if(pontosTuristicos > pontosTuristicos2){
        printf("\nCarta 1 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade, pontosTuristicos);
        printf("\nCarta 2 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade2, pontosTuristicos2);
        printf("\nA carta 2 venceu!\n");
        }   
        else{
        printf("\nEmpate!");
        }
        break;

    case 5:
        if (densidade_populacional < densidade_populacional2) {
        printf("\nCarta 1 - Cidade %s \nDensidade demográfica %.2f", nomeCidade, densidade_populacional);
        printf("\nCarta 2 - Cidade %s \nDensidade demográfica %.2f", nomeCidade2, densidade_populacional2);
        printf("\nA carta 1 venceu!\n");

        }    
        else if(densidade_populacional > densidade_populacional2){
        printf("\nCarta 1 - Cidade %s \nDensidade demográfica %.2f", nomeCidade, densidade_populacional);
        printf("\nCarta 2 - Cidade %s \nDensidade demográfica %.2f", nomeCidade2, densidade_populacional2);
        printf("\nA carta 2 venceu!\n");
        }   
        else{
        printf("\nEmpate!\n");
        }
        break;
    
    default:
        printf("\nOpção de atributo inválida!\n");
        break;
    }

    return 0;
}

