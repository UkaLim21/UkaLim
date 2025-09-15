#include <stdio.h>

int main(){

    // carta 1
    char estado1;
    char codigo1[4];
    char cidade1[20];
    float populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1, pibPerCapita1;

    // carta 2
    char estado2;
    char codigo2[4];
    char cidade2[20];
    float populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2, pibPerCapita2;

    // Cadastro Carta 1
    printf("Digite o Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite a Cidade da Carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a População: ");
    scanf("%f", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    // Cadastro Carta 2
    printf("\nDigite o Estado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite a Cidade da Carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a População: ");
    scanf("%f", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

//Carta 01
printf("\n=== Carta 1 ===\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %.3f\n", populacao1);
printf("Área (em Km): %.3fkm²\n", area1);
printf("PIB: %.3f bilhões de reais\n", pib1);
printf("Núremo de Pontos Turísticos: %d\n", pontos1);
printf("Densidade populaciona: %.3fhab/km²\n", densidade1);
printf("PIB per Capita: %.3freais\n", pibPerCapita1);

//carta 02
printf("\n=== Carta 2 ===\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %.3f\n", populacao2);
printf("Área (em Km): %.3fkm²\n", area2);
printf("PIB: %.3f bilhões de reais\n", pib2);
printf("Núremo de Pontos Turísticos: %d\n", pontos2);
printf("Densidade populaciona: %.3fhab/km²\n", densidade2);
printf("PIB per Capita: %.3freais\n", pibPerCapita2);
    

    // ===== MENU INTERATIVO =====
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Escolha o atributo para comparar: ");
    scanf("%d", &opcao);

    printf("\n=== Comparação de Cartas ===\n");

    switch(opcao){
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %.0f habitantes\n", cidade1, populacao1);
            printf("%s: %.0f habitantes\n", cidade2, populacao2);
            if(populacao1 > populacao2)
                printf("Vencedora: %s\n", cidade1);
            else if(populacao2 > populacao1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if(area1 > area2)
                printf("Vencedora: %s\n", cidade1);
            else if(area2 > area1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            if(pib1 > pib2)
                printf("Vencedora: %s\n", cidade1);
            else if(pib2 > pib1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontos1);
            printf("%s: %d pontos\n", cidade2, pontos2);
            if(pontos1 > pontos2)
                printf("Vencedora: %s\n", cidade1);
            else if(pontos2 > pontos1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (REGRA INVERTIDA: menor vence!)
            printf("Atributo escolhido: Densidade Demográfica\n");
            printf("%s: %.4f hab/km²\n", cidade1, densidade1);
            printf("%s: %.4f hab/km²\n", cidade2, densidade2);
            if(densidade1 < densidade2)
                printf("Vencedora: %s\n", cidade1);
            else if(densidade2 < densidade1)
                printf("Vencedora: %s\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}
