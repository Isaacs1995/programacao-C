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

    //comparação das cartas (Lógica de decisão + menu de seleção)

    int opcao1, opcao2;
    int resultado1, resultado2;

    //escolhendo a primeira opção de atributo

    printf("\n\nPor favor, escolha dois atributos para realizarmos a comparação:\n Escolha o primeiro atributo\n\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Área\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Número de pontos turísticos\n");
    printf("Opção 5 - Densidade demográfica\n");
    scanf("%d" , &opcao1);


    switch (opcao1)
    {
    case 1:
        printf("\nVocê escolheu a primeira opção População!\n");
        printf("\nCarta 1 - Cidade %s \nPopulacao %lu", nomeCidade, populacao);
        printf("\nCarta 2 - Cidade %s \nPopulacao %lu", nomeCidade2, populacao2);
        resultado1 = populacao > populacao2 ? 1 : 2;
   
        break;
    
    case 2:
        printf("\nVocê escolheu a primeira opção Área!\n");
        printf("\nCarta 1 - Cidade %s \nÁrea %.2f Km²", nomeCidade, area);
        printf("\nCarta 2 - Cidade %s \nÁrea %.2f Km²", nomeCidade2, area2);
        resultado1 = area > area2 ? 1 : 2;

        break;

    case 3:
        printf("\nVocê escolheu a primeira opção PIB!\n");
        printf("\nCarta 1 - Cidade %s \nPIB %.2f", nomeCidade, pib);
        printf("\nCarta 2 - Cidade %s \nPIB %.2f", nomeCidade2, pib2);
        resultado1 = pib > pib2 ? 1 : 2;
      
        break;

    case 4:
        printf("\nVocê escolheu a primeira opção Pontos turísticos!\n");
        printf("\nCarta 1 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade, pontosTuristicos);
        printf("\nCarta 2 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade2, pontosTuristicos2);
        resultado1 = pontosTuristicos > pontosTuristicos2 ? 1 : 2;
        
        break;

    case 5:
        printf("\nVocê escolheu a primeira opção Densidade demográfica!\n");
        printf("\nCarta 1 - Cidade %s \nDensidade demográfica %.2f", nomeCidade, densidade_populacional);
        printf("\nCarta 2 - Cidade %s \nDensidade demográfica %.2f", nomeCidade2, densidade_populacional2);
        resultado1 = densidade_populacional < densidade_populacional2 ? 1 : 2;

        break;
    
    default:
        printf("\nOpção de atributo inválida!\n");
        break;
    }

    printf("\n\nAgora, escolha o segundo atributo para realizarmos a comparação:\n\n");
    printf("Opção 1 - População\n");
    printf("Opção 2 - Área\n");
    printf("Opção 3 - PIB\n");
    printf("Opção 4 - Número de pontos turísticos\n");
    printf("Opção 5 - Densidade demográfica\n");
    scanf("%d" , &opcao2);

    //validando se a escolha está repetida

    if (opcao1 == opcao2)
    {
        printf("Você escolheu o mesmo atributo");
    }
    else{

        switch (opcao2)
        {
        case 1:
            printf("\nVocê escolheu a segunda opção População!\n");
            printf("\nCarta 1 - Cidade %s \nPopulacao %lu", nomeCidade, populacao);
            printf("\nCarta 2 - Cidade %s \nPopulacao %lu", nomeCidade2, populacao2);
            resultado2 = populacao > populacao2 ? 1 : 2;
    
            break;
        
        case 2:
            printf("\nVocê escolheu a segunda opção Área!\n");
            printf("\nCarta 1 - Cidade %s \nÁrea %.2f Km²", nomeCidade, area);
            printf("\nCarta 2 - Cidade %s \nÁrea %.2f Km²", nomeCidade2, area2);
            resultado2 = area > area2 ? 1 : 2;

            break;

        case 3:
            printf("\nVocê escolheu a segunda opção PIB!\n");
            printf("\nCarta 1 - Cidade %s \nPIB %.2f", nomeCidade, pib);
            printf("\nCarta 2 - Cidade %s \nPIB %.2f", nomeCidade2, pib2);
            resultado2 = pib > pib2 ? 1 : 2;
        
            break;

        case 4:
            printf("\nVocê escolheu a segunda opção Pontos turísticos!\n");
            printf("\nCarta 1 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade, pontosTuristicos);
            printf("\nCarta 2 - Cidade %s \nNúmero de pontos turísticos %d", nomeCidade2, pontosTuristicos2);
            resultado2 = pontosTuristicos > pontosTuristicos2 ? 1 : 2;
            
            break;

        case 5:
            printf("\nVocê escolheu a segunda opção Densidade demográfica!\n");
            printf("\nCarta 1 - Cidade %s \nDensidade demográfica %.2f", nomeCidade, densidade_populacional);
            printf("\nCarta 2 - Cidade %s \nDensidade demográfica %.2f", nomeCidade2, densidade_populacional2);
            resultado2 = densidade_populacional < densidade_populacional2 ? 1 : 2;

            break;
        
        default:
            printf("\nOpção de atributo inválida!\n");
            break;
    }

    }

    //exibindo o resultado

    if (resultado1 == 1 && resultado2 == 1)
    {
        printf("\n\nCarta 1 venceu!\n");
    } 
    else if(resultado1 == 2 && resultado2 == 2){
        printf("\n\nCarta 2 venceu!\n");
    }
    else{
        printf("\n\nEmpate!\n");
    }
    

    return 0;
}

